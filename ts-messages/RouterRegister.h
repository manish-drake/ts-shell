#ifndef __RouterRegister_h
#define __RouterRegister_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CRouterRegister:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1;
    CRouterRegister(void)
    {
        setCmdID(mCmdID);
    }
    CRouterRegister(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAddressUri(std::string value)
    {
        write("AddressUri",value);
    }

    std::string getAddressUri(void)

    {
        return getString("AddressUri");
    }

    bool isAddressUriValid(void)
    {
        return isValid("AddressUri");

    }

    void setName(std::string value)
    {
        write("Name",value);
    }

    std::string getName(void)

    {
        return getString("Name");
    }

    bool isNameValid(void)
    {
        return isValid("Name");

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