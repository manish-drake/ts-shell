#ifndef __BDSCode43_h
#define __BDSCode43_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode43:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x20;
    CBDSCode43(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode43(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBearingToWaypointStatus(bool value)
    {
        write("BearingToWaypointStatus",value);
    }

    bool getBearingToWaypointStatus(void)

    {
        return getBool("BearingToWaypointStatus");
    }

    bool isBearingToWaypointStatusValid(void)
    {
        return isValid("BearingToWaypointStatus");

    }

    void setBearingToWaypointSign(bool value)
    {
        write("BearingToWaypointSign",value);
    }

    bool getBearingToWaypointSign(void)

    {
        return getBool("BearingToWaypointSign");
    }

    bool isBearingToWaypointSignValid(void)
    {
        return isValid("BearingToWaypointSign");

    }

    void setBearingToWaypoint(float value)
    {
        write("BearingToWaypoint",value);
    }

    float getBearingToWaypoint(void)

    {
        return getFloat("BearingToWaypoint");
    }

    bool isBearingToWaypointValid(void)
    {
        return isValid("BearingToWaypoint");

    }

    void setTimeToGoStatus(bool value)
    {
        write("TimeToGoStatus",value);
    }

    bool getTimeToGoStatus(void)

    {
        return getBool("TimeToGoStatus");
    }

    bool isTimeToGoStatusValid(void)
    {
        return isValid("TimeToGoStatus");

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

    void setDistanceToGoStatus(bool value)
    {
        write("DistanceToGoStatus",value);
    }

    bool getDistanceToGoStatus(void)

    {
        return getBool("DistanceToGoStatus");
    }

    bool isDistanceToGoStatusValid(void)
    {
        return isValid("DistanceToGoStatus");

    }

    void setDistanceToGo(float value)
    {
        write("DistanceToGo",value);
    }

    float getDistanceToGo(void)

    {
        return getFloat("DistanceToGo");
    }

    bool isDistanceToGoValid(void)
    {
        return isValid("DistanceToGo");

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