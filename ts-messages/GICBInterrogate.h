#ifndef __GICBInterrogate_h
#define __GICBInterrogate_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CGICBInterrogate:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x4;
    CGICBInterrogate(void)
    {
        setCmdID(mCmdID);
    }
    CGICBInterrogate(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSRegister(unsigned int value)
    {
        write("BDSRegister",value);
    }

    unsigned int getBDSRegister(void)

    {
        return getUInt("BDSRegister");
    }

    bool isBDSRegisterValid(void)
    {
        return isValid("BDSRegister");

    }

    void setModeSUFFormat(unsigned int value)
    {
        write("ModeSUFFormat",value);
    }

    unsigned int getModeSUFFormat(void)

    {
        return getUInt("ModeSUFFormat");
    }

    bool isModeSUFFormatValid(void)
    {
        return isValid("ModeSUFFormat");

    }

    void setModeSAddress(unsigned int value)
    {
        write("ModeSAddress",value);
    }

    unsigned int getModeSAddress(void)

    {
        return getUInt("ModeSAddress");
    }

    bool isModeSAddressValid(void)
    {
        return isValid("ModeSAddress");

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