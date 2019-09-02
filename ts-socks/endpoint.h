#ifndef ENDPOINT_H
#define ENDPOINT_H
#include <iostream>
#include <string>
#include <zmq.hpp>
#include "listener.h"
#include <isockservice.h>

using std::string;
class Endpoint
{
  private:
    int getId()
    {
        static int i = 0;
        return ++i;
    }

    Listener m_listner;
    string m_ep;
    int epId = 0;
    void Receive();
    string Send(const string &address, const string &message);
    string Send(const string &address, std::vector<std::string> &messages);
    ISockService m_sockService;
  public:
    Endpoint(const char *id);
    Endpoint(const int &port);
    ~Endpoint();

    void Close();

    void print()
    {
        if (epId <= 0)
            epId = getId();
        std::cout << "EP_ID = " << epId << std::endl;
    }
    inline ISockService *Service()
    {
      return &m_sockService;
    }
};
#endif //ENDPOINT_H
