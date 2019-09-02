#ifndef PEER_H
#define PEER_H
#include <string>
using std::string;
class Peer
{
  private:
    string m_name;
    string m_uri;
  public:
    Peer();
    Peer(const string &name, const string &addressUri);
    ~Peer();
    
    inline void setUri(const string &uri)
    {
        m_uri = uri;
    }
    
    inline string getUri()
    {
        return m_uri;
    }
    
    inline void setName(const string &name)
    {
        m_name = name;
    }
    
    inline string getName()
    {
        return m_name;
    }
};
#endif //PEER_H