#ifndef ROUTER_H
#define ROUTER_H
#include "string"
#include "table.h"
#include <functional>
#include <vector>
#include <isockservice.h>

using std::string;
// using cbsend = std::function<string(const string &address, const string &message)>;
// using cbsendparts = std::function<string(const string &address, std::vector<std::string> &&messages)>;
// using cbreceive = std::function<string(const string &message)>;
// using cbreceiveparts = std::function<string(std::vector<std::string> &messages)>;
class Router
{
private:
  Table m_table;
  Router();
  ~Router();
  static Router m_router;
  // cbsend m_send;
  // cbsendparts m_sendParts;
  // cbreceive m_receive;
  // cbreceiveparts m_receiveParts = nullptr;
  ISockService m_sockService;
public:

  inline ISockService *Service()
  {
    return &m_sockService;
  }
  static Router *Instance()
  {
    return &m_router;
  }
  string Receive(const string &message);
  string Receive(std::vector<std::string> &messages);
  // inline void SetSend(const cbsend &send)
  // {
  //   m_send = send;
  // }
  // inline void SetSendParts(const cbsendparts &sendParts)
  // {
  //   m_sendParts = sendParts;
  // }
  // inline cbreceive GetReceive()
  // {
  //   return m_receive;
  // }
  // inline cbreceiveparts GetReceiveParts()
  // {
  //   return m_receiveParts;
  // }
};
#endif //ROUTER_H