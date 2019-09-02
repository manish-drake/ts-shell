#include "peer.h"
Peer::Peer()
{
}

Peer::Peer(const string &name, const string &addressUri): m_name{name},
                                                                  m_uri{addressUri}
{
}

Peer::~Peer()
{
}