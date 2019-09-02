#include "header.h"
Header::Header()
{
}

Header::~Header()
{
}

int Header::getSource()
{
    return mReadRoot["source"].asInt();
}

void Header::setSource(int source)
{
    mWriteRoot["source"] = source;
}

string Header::getDestination()
{
    return mReadRoot["destination"].asString();
}

void Header::setDestination(string destination)
{
    mWriteRoot["destination"] = destination;
}

string Header::getType()
{
    return mReadRoot["type"].asString();
}

void Header::setType(string type)
{
    mWriteRoot["type"] = type;
}
