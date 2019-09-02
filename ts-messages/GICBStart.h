#ifndef __GICBStart_h
#define __GICBStart_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CGICBStart:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1;
    CGICBStart(void)
    {
        setCmdID(mCmdID);
    }
    CGICBStart(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setEndpoint(unsigned int value)
    {
        write("Endpoint",value);
    }

    unsigned int getEndpoint(void)

    {
        return getUInt("Endpoint");
    }

    bool isEndpointValid(void)
    {
        return isValid("Endpoint");

    }

    void setMessage(std::string jsonstring)
    {

        TServerMessage::setMessage(jsonstring);

    }

    void set(Json::Value obj)
    {

        TServerMessage::set(obj);

    }

    std::string getMessage(void)
    {
        return TServerMessage::getMessage();
    }

    Json::Value get(void)
    {
        return TServerMessage::get();
    }

};




#endif