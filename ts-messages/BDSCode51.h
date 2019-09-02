#ifndef __BDSCode51_h
#define __BDSCode51_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode51:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x25;
    CBDSCode51(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode51(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setPositionStatus(bool value)
    {
        write("PositionStatus",value);
    }

    bool getPositionStatus(void)

    {
        return getBool("PositionStatus");
    }

    bool isPositionStatusValid(void)
    {
        return isValid("PositionStatus");

    }

    void setLatitudeSign(bool value)
    {
        write("LatitudeSign",value);
    }

    bool getLatitudeSign(void)

    {
        return getBool("LatitudeSign");
    }

    bool isLatitudeSignValid(void)
    {
        return isValid("LatitudeSign");

    }

    void setLatitude(double value)
    {
        write("Latitude",value);
    }

    double getLatitude(void)

    {
        return getDouble("Latitude");
    }

    bool isLatitudeValid(void)
    {
        return isValid("Latitude");

    }

    void setLongitudeSign(bool value)
    {
        write("LongitudeSign",value);
    }

    bool getLongitudeSign(void)

    {
        return getBool("LongitudeSign");
    }

    bool isLongitudeSignValid(void)
    {
        return isValid("LongitudeSign");

    }

    void setLongitude(double value)
    {
        write("Longitude",value);
    }

    double getLongitude(void)

    {
        return getDouble("Longitude");
    }

    bool isLongitudeValid(void)
    {
        return isValid("Longitude");

    }

    void setPressureAltitudeSign(bool value)
    {
        write("PressureAltitudeSign",value);
    }

    bool getPressureAltitudeSign(void)

    {
        return getBool("PressureAltitudeSign");
    }

    bool isPressureAltitudeSignValid(void)
    {
        return isValid("PressureAltitudeSign");

    }

    void setPressureAltitude(int value)
    {
        write("PressureAltitude",value);
    }

    int getPressureAltitude(void)

    {
        return getInt("PressureAltitude");
    }

    bool isPressureAltitudeValid(void)
    {
        return isValid("PressureAltitude");

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