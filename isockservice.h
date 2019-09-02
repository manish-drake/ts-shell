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
    void Bind(ISockService *client)
    {
        client->m_send = m_send;
        m_receive = client->m_receive;
        client->m_isService = false;
        m_isService = true;
    }
};
#endif //ISOCKSERVICE_H
