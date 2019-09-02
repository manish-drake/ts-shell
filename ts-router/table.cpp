#include "table.h"
Table::Table()
{
}

Table::~Table()
{
}
int Table::Add(const string &name, const string &uri)
{
    this->m_Peers.push_back(Peer(name, uri));
    return this->m_Peers.size();
}