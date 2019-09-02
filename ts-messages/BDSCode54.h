#ifndef __BDSCode54_h
#define __BDSCode54_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode54:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x28;
    CBDSCode54(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode54(Json::Value obj):TServerMessage(obj)
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

    void setEstimatedArrivalTime(float value)
    {
        write("EstimatedArrivalTime",value);
    }

    float getEstimatedArrivalTime(void)

    {
        return getFloat("EstimatedArrivalTime");
    }

    bool isEstimatedArrivalTimeValid(void)
    {
        return isValid("EstimatedArrivalTime");

    }

    void setEstimatedFlightLevel(unsigned int value)
    {
        write("EstimatedFlightLevel",value);
    }

    unsigned int getEstimatedFlightLevel(void)

    {
        return getUInt("EstimatedFlightLevel");
    }

    bool isEstimatedFlightLevelValid(void)
    {
        return isValid("EstimatedFlightLevel");

    }

    void setTimeToGo(float value)
    {
        write("TimeToGo",value);
    }

    float getTimeToGo(void)

    {
        return getFloat("TimeToGo");
    }

    bool isTimeToGoValid(void)
    {
        return isValid("TimeToGo");

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