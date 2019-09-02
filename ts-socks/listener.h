#ifndef LISTENER_H
#define LISTENER_H
#include <string>
#include <vector>
#include <functional>
#include <thread>
#include <memory>

using std::string;

class Listener
{
  private:
    std::function<string(std::vector<std::string> &messages)> m_subscriber;
    
    bool m_exit;
  public:
    Listener();
    ~Listener();
    void Setup(const char* address);
    void Stop();
    void Listen(std::function<string(std::vector<std::string> &messages)> &&subscription);
};
#endif //LISTENER_H