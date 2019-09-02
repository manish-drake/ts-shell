#ifndef __BDSCode07_h
#define __BDSCode07_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode07:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x7;
    CBDSCode07(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode07(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTransmissionRateSubfield(unsigned int value)
    {
        write("TransmissionRateSubfield",value);
    }

    unsigned int getTransmissionRateSubfield(void)

    {
        return getUInt("TransmissionRateSubfield");
    }

    bool isTransmissionRateSubfieldValid(void)
    {
        return isValid("TransmissionRateSubfield");

    }

    void setAltitudeTypeSubfield(unsigned int value)
    {
        write("AltitudeTypeSubfield",value);
    }

    unsigned int getAltitudeTypeSubfield(void)

    {
        return getUInt("AltitudeTypeSubfield");
    }

    bool isAltitudeTypeSubfieldValid(void)
    {
        return isValid("AltitudeTypeSubfield");

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