#ifndef __BDSCode52_h
#define __BDSCode52_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode52:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x26;
    CBDSCode52(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode52(Json::Value obj):TServerMessage(obj)
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

    void setBDS52FOMSource(unsigned int value)
    {
        write("BDS52FOMSource",value);
    }

    unsigned int getBDS52FOMSource(void)

    {
        return getUInt("BDS52FOMSource");
    }

    bool isBDS52FOMSourceValid(void)
    {
        return isValid("BDS52FOMSource");

    }

    void setLatitudeFine(double value)
    {
        write("LatitudeFine",value);
    }

    double getLatitudeFine(void)

    {
        return getDouble("LatitudeFine");
    }

    bool isLatitudeFineValid(void)
    {
        return isValid("LatitudeFine");

    }

    void setLongitudeFine(double value)
    {
        write("LongitudeFine",value);
    }

    double getLongitudeFine(void)

    {
        return getDouble("LongitudeFine");
    }

    bool isLongitudeFineValid(void)
    {
        return isValid("LongitudeFine");

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