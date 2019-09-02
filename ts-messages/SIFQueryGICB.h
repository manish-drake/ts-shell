#ifndef __SIFQueryGICB_h
#define __SIFQueryGICB_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CSIFQueryGICB:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x6;
    CSIFQueryGICB(void)
    {
        setCmdID(mCmdID);
    }
    CSIFQueryGICB(Json::Value obj):TServerMessage(obj)
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