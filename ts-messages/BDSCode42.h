#ifndef __BDSCode42_h
#define __BDSCode42_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode42:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1f;
    CBDSCode42(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode42(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setWaypointLatitudeStatus(bool value)
    {
        write("WaypointLatitudeStatus",value);
    }

    bool getWaypointLatitudeStatus(void)

    {
        return getBool("WaypointLatitudeStatus");
    }

    bool isWaypointLatitudeStatusValid(void)
    {
        return isValid("WaypointLatitudeStatus");

    }

    void setWaypointLatitudeSign(bool value)
    {
        write("WaypointLatitudeSign",value);
    }

    bool getWaypointLatitudeSign(void)

    {
        return getBool("WaypointLatitudeSign");
    }

    bool isWaypointLatitudeSignValid(void)
    {
        return isValid("WaypointLatitudeSign");

    }

    void setWaypointLatitude(double value)
    {
        write("WaypointLatitude",value);
    }

    double getWaypointLatitude(void)

    {
        return getDouble("WaypointLatitude");
    }

    bool isWaypointLatitudeValid(void)
    {
        return isValid("WaypointLatitude");

    }

    void setWaypointLongitudeStatus(bool value)
    {
        write("WaypointLongitudeStatus",value);
    }

    bool getWaypointLongitudeStatus(void)

    {
        return getBool("WaypointLongitudeStatus");
    }

    bool isWaypointLongitudeStatusValid(void)
    {
        return isValid("WaypointLongitudeStatus");

    }

    void setWaypointLongitudeSign(bool value)
    {
        write("WaypointLongitudeSign",value);
    }

    bool getWaypointLongitudeSign(void)

    {
        return getBool("WaypointLongitudeSign");
    }

    bool isWaypointLongitudeSignValid(void)
    {
        return isValid("WaypointLongitudeSign");

    }

    void setWaypointLongitude(double value)
    {
        write("WaypointLongitude",value);
    }

    double getWaypointLongitude(void)

    {
        return getDouble("WaypointLongitude");
    }

    bool isWaypointLongitudeValid(void)
    {
        return isValid("WaypointLongitude");

    }

    void setWaypointCrossingAltitudeStatus(bool value)
    {
        write("WaypointCrossingAltitudeStatus",value);
    }

    bool getWaypointCrossingAltitudeStatus(void)

    {
        return getBool("WaypointCrossingAltitudeStatus");
    }

    bool isWaypointCrossingAltitudeStatusValid(void)
    {
        return isValid("WaypointCrossingAltitudeStatus");

    }

    void setWaypointCrossingAltitudeSign(bool value)
    {
        write("WaypointCrossingAltitudeSign",value);
    }

    bool getWaypointCrossingAltitudeSign(void)

    {
        return getBool("WaypointCrossingAltitudeSign");
    }

    bool isWaypointCrossingAltitudeSignValid(void)
    {
        return isValid("WaypointCrossingAltitudeSign");

    }

    void setWaypointCrossingAltitude(int value)
    {
        write("WaypointCrossingAltitude",value);
    }

    int getWaypointCrossingAltitude(void)

    {
        return getInt("WaypointCrossingAltitude");
    }

    bool isWaypointCrossingAltitudeValid(void)
    {
        return isValid("WaypointCrossingAltitude");

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