#ifndef __RouterRegisterReply_h
#define __RouterRegisterReply_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRouterRegisterReply:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2;
    CRouterRegisterReply(void)
    {
        setCmdID(mCmdID);
    }
    CRouterRegisterReply(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setToken(int value)
    {
        write("Token",value);
    }

    int getToken(void)

    {
        return getInt("Token");
    }

    bool isTokenValid(void)
    {
        return isValid("Token");

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