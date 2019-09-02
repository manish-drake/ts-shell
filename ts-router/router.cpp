#include "router.h"
#include "ts-messages/RouterRegister.h"
#include "ts-messages/RouterRegisterReply.h"
#include "ts-messages/header.h"
#include <memory>

Router Router::m_router;
Router::Router()
{
    m_sockService.OnReceive([&](std::vector<std::string> &messages) -> std::string {
        return this->Receive(messages);
    });
}

Router::~Router()
{
}

string Router::Receive(std::vector<std::string>& messages)
{
    if (messages.size() >= 2) {
        Header hdr;
        hdr.setMessage(messages[0]);
        if (hdr.getDestination() == "router") {
            if (hdr.getType() == "CRouterRegister") {
                CRouterRegister routerRegister;
                routerRegister.setMessage(messages[1]);
                int token = this->m_table.Add(routerRegister.getName(), routerRegister.getAddressUri());
                CRouterRegisterReply reply;
                reply.setToken(token);
                Header repHdr;
                repHdr.setType("CRouterRegisterReply");
                m_sockService.Send(routerRegister.getAddressUri(), {repHdr.getMessage(), reply.getMessage()});
                return reply.getMessage();                
            }
        } else {
            int source = hdr.getSource();
            string destination = hdr.getDestination();

            char dest[255];
            sprintf(dest, "inproc://%s", destination.c_str());
            destination = m_table.GetClientUri(source);
            Header dstHdr;
            dstHdr.setDestination(destination);
            dstHdr.setSource(source);
            dstHdr.setType(hdr.getType());

            return m_sockService.Send(dest, { dstHdr.getMessage(), messages[1] });
        }
    } else {
        return "touche!"; //Hit by an unknown message
    }
}

string Router::Receive(const string& strMsg)
{
    return "touche!"; //Nothing here
}
