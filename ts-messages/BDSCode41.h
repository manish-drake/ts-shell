#ifndef __BDSCode41_h
#define __BDSCode41_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode41:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1e;
    CBDSCode41(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode41(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setWaypointNameStatus(bool value)
    {
        write("WaypointNameStatus",value);
    }

    bool getWaypointNameStatus(void)

    {
        return getBool("WaypointNameStatus");
    }

    bool isWaypointNameStatusValid(void)
    {
        return isValid("WaypointNameStatus");

    }

    void setWaypointName(std::string value)
    {
        write("WaypointName",value);
    }

    std::string getWaypointName(void)

    {
        return getString("WaypointName");
    }

    bool isWaypointNameValid(void)
    {
        return isValid("WaypointName");

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