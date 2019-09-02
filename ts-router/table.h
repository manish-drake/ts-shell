#ifndef TABLE_H
#define TABLE_H
#include <string>
#include <vector>
#include "peer.h"

using std::string;
class Table
{
  private:
    std::vector<Peer> m_Peers;
  public:
    Table();
    ~Table();
    int Add(const string &name, const string &uri);
    inline string GetClientUri(const int & clientId)
    {
      return m_Peers[clientId - 1].getUri();
    }
};
#endif //TABLE_H