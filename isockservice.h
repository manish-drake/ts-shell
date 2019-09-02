#ifndef ISOCKSERVICE_H
#define ISOCKSERVICE_H
#include <string>
#include <vector>
#include <functional>

using std::string;
class ISockService;
using cbsend = std::function<string(const string &address, std::vector<std::string> &messages)>;
using cbreceive = std::function<string(std::vector<std::string> &messages)>;
class ISockService
{
  private:
  cbsend m_send;
  cbreceive m_receive;
  bool m_isService;
  public:
    ISockService() = default;
    ~ISockService() = default;
    string Send(const string &address, std::vector<std::string> &&messages)
    {
        return m_send(address, messages);
    }
    void OnSend(cbsend &&p)
    {
        m_send = p;
    };
    string Receive(std::vector<std::string> &messages)
    {
        return m_receive(messages);
    }
    void OnReceive(cbreceive &&p)
    {
        m_receive = p;
    };
    void Bind(ISockService *server)
    {
        m_send = server->m_send;
        server->m_receive = m_receive;
        server->m_isService = true;
        m_isService = false;
    }
};
#endif //ISOCKSERVICE_H
