#include "endpoint.h"
#include "context.h"
#include <ctime>

Endpoint::Endpoint(const char *id):m_sock(*Context::Get(), ZMQ_DEALER)
{
    m_ep.append("inproc://").append(id);
    this->setup();

    char _id[10];
    srand((uint)time(0));
    sprintf(_id, "%04d-%04d", rand() % 10000, rand() % 10000);
    m_sock.setsockopt(ZMQ_IDENTITY, _id, 10);
}
Endpoint::Endpoint(const int &port):m_sock(*Context::Get(), ZMQ_DEALER)
{
    m_ep.append("ipc:///tmp/app").append(std::to_string(port)).append(".ipc");
    this->setup();

    char _id[10];
    srand((uint)time(0));
    sprintf(_id, "%04d-%04d", rand() % 10000, rand() % 10000);
    m_sock.setsockopt(ZMQ_IDENTITY, _id, 10);
}

void Endpoint::setup()
{
    print();
    m_sockService.OnSend([this](const string &address, std::vector<std::string> &messages) -> string {
        return this->Send(address, messages);
    });
    m_listner.Listen([this](std::vector<std::string> &messages) -> string {
        print();
        std::cout << "ep: " << this->m_ep.c_str() << ", msg: " << messages.size() << std::endl;
        return m_sockService.Receive(messages);
    });
    m_listner.Setup(m_ep.c_str());
}

string Endpoint::Send(const string &address, const string &msg)
{
    m_sock.connect(address);
    {
        zmq::message_t message(msg.size());
        memcpy(message.data(), msg.c_str(), msg.size());
        m_sock.send(message);
    }
    m_sock.disconnect(address);
    return "OK";
}
string Endpoint::Send(const string &address, std::vector<std::string> &messages)
{

    m_sock.connect(address);
    {
        size_t count = 0;
        for (const std::string &msg : messages)
        {
            zmq::message_t message(msg.size());
            memcpy(message.data(), msg.c_str(), msg.size());
            if (++count < messages.size())
                m_sock.send(message, ZMQ_SNDMORE);
            else
                m_sock.send(message);
        }
    }
    m_sock.disconnect(address);
    return "OK";
}

Endpoint::~Endpoint()
{
    m_sock.close();
}
