#include "listener.h"
#include <zmq.hpp>
#include "context.h"
#include <thread>
#include <iostream>

Listener::Listener() : m_exit{false}
{
}
Listener::~Listener()
{
}

void Listener::Setup(const char *address)
{
    std::thread([](const string &add, const bool &exit, const std::function<string(std::vector<std::string> & messages)> &&subscriber) {
        zmq::socket_t socket(*Context::Get(), ZMQ_ROUTER);
        socket.bind(add);
        zmq::pollitem_t items[] = {{socket, 0, ZMQ_POLLIN, 0}};

        while (!exit)
        {
            zmq::message_t message;
            zmq::poll(&items[0], 1, 2);
            int more = 0;
            if (items[0].revents & ZMQ_POLLIN)
            {
                std::vector<std::string> messages;
                char _id[10];
                socket.recv(_id, 10);
                while (1)
                {
                    //  Process all parts of the message
                    socket.recv(&message);
                    size_t more_size = sizeof(more);
                    const char *data = static_cast<char *>(message.data());
                    std::string dataString = std::string(data, message.size());

                    socket.getsockopt(ZMQ_RCVMORE, &more, &more_size);

                    if (strlen(data) > 0)
                        messages.push_back(dataString);

                    if (!more)
                        break; //  Last message part
                }
                string response = "OK";
                if (subscriber)
                {
                    response = subscriber(messages);
                }

                // if (response.size() > 0)
                // {
                //     socket.send(_id, 10, ZMQ_SNDMORE);
                //     zmq::message_t responseMsg(response.size());
                //     memcpy(responseMsg.data(), response.c_str(), response.size());
                //     socket.send(responseMsg, 0);
                // }
            }
        }
        socket.unbind(add);
        socket.close();
    },
                string(address), m_exit, m_subscriber)
        .detach();
}

void Listener::Stop()
{
    this->m_exit = true;
}
void Listener::Listen(std::function<string(std::vector<std::string> &messages)> &&subscription)
{
    this->m_subscriber = subscription;
}