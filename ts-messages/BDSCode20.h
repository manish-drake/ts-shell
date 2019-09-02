#ifndef __BDSCode20_h
#define __BDSCode20_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode20:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x18;
    CBDSCode20(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode20(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSCode(std::string value)
    {
        write("BDSCode",value);
    }

    std::string getBDSCode(void)

    {
        return getString("BDSCode");
    }

    bool isBDSCodeValid(void)
    {
        return isValid("BDSCode");

    }

    void setAircraftID(std::string value)
    {
        write("AircraftID",value);
    }

    std::string getAircraftID(void)

    {
        return getString("AircraftID");
    }

    bool isAircraftIDValid(void)
    {
        return isValid("AircraftID");

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