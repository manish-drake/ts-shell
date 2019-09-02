#ifndef ROUTER_H
#define ROUTER_H
#include "string"
#include "table.h"
#include <functional>
#include <vector>
#include <isockservice.h>

using std::string;
class Router
{
private:
  Table m_table;
  Router();
  ~Router();
  static Router m_router;
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
};
#endif //ROUTER_H