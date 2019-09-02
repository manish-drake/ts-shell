#ifndef __BDSCode61_h
#define __BDSCode61_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode61:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2d;
    CBDSCode61(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode61(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFormatTypeCode(unsigned int value)
    {
        write("FormatTypeCode",value);
    }

    unsigned int getFormatTypeCode(void)

    {
        return getUInt("FormatTypeCode");
    }

    bool isFormatTypeCodeValid(void)
    {
        return isValid("FormatTypeCode");

    }

    void setSubtypeCode(unsigned int value)
    {
        write("SubtypeCode",value);
    }

    unsigned int getSubtypeCode(void)

    {
        return getUInt("SubtypeCode");
    }

    bool isSubtypeCodeValid(void)
    {
        return isValid("SubtypeCode");

    }

    void setEmergencyState(unsigned int value)
    {
        write("EmergencyState",value);
    }

    unsigned int getEmergencyState(void)

    {
        return getUInt("EmergencyState");
    }

    bool isEmergencyStateValid(void)
    {
        return isValid("EmergencyState");

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