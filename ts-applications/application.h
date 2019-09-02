#ifndef APPLICATION_H
#define APPLICATION_H
#include <string>
#include <iostream>
#include <vector>
#include <isockservice.h>

using std::string;
class Application
{
private:
  void Request(const char *request, const char *address);
  string m_msg;
  ISockService m_sockService;
public:
  Application();
  ~Application();
  inline ISockService *Service()
  {
    return &m_sockService;
  }
  string Receive(const string &message);
  string Receive(std::vector<std::string> &messages);
  void Register(const char *routerEp);

  string queryMessage(const int &index);

  string messageBDS05Data();
  string messageBDS06Data();
  string messageBDS07Data();
  string messageBDS08Data();
  string messageBDSCode09Subtypes1n2Data();
  string messageBDSCode09Subtypes3n4Data();
  string messageBDSCode0AData();
  string messageBDSCode0BData();
  string messageBDSCode0CData();
  string messageBDSCode10Data();
  string messageBDSCode17Data();
  string messageBDSCode18Data();
  string messageBDSCode19Data();
  string messageBDSCode1AData();
  string messageBDSCode1BData();
  string messageBDSCode1CData();
  string messageBDSCode1DData();
  string messageBDSCode1EData();
  string messageBDSCode1FData();
  string messageBDSCode20Data();
  string messageBDSCode21Data();
  string messageBDSCode22Data();
  string messageBDSCode25Data();
  string messageBDSCode30Data();
  string messageBDSCode40Data();
  string messageBDSCode41Data();
  string messageBDSCode42Data();
  string messageBDSCode43Data();
  string messageBDSCode44Data();
  string messageBDSCode45Data();
  string messageBDSCode48Data();
  string messageBDSCode50Data();
  string messageBDSCode51Data();
  string messageBDSCode52Data();
  string messageBDSCode53Data();
  string messageBDSCode54Data();
  string messageBDSCode55Data();
  string messageBDSCode56Data();
  string messageBDSCode5FData();
  string messageBDSCode60Data();
  string messageBDSCode61Data();
  string messageBDSCode65Data();
  string messageBDSCodeE3Data();
  string messageBDSCodeE4Data();
  string messageBDSCodeE5Data();
  string messageBDSCodeE6Data();
  string messageBDSCodeE7Data();
  string messageBDSCodeEAData();
};
#endif //APPLICATION_H