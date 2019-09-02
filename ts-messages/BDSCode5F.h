#ifndef __BDSCode5F_h
#define __BDSCode5F_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode5F:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2b;
    CBDSCode5F(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode5F(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMCPnFCUSeletedAltitude(unsigned int value)
    {
        write("MCPnFCUSeletedAltitude",value);
    }

    unsigned int getMCPnFCUSeletedAltitude(void)

    {
        return getUInt("MCPnFCUSeletedAltitude");
    }

    bool isMCPnFCUSeletedAltitudeValid(void)
    {
        return isValid("MCPnFCUSeletedAltitude");

    }

    void setNextWaypoint(unsigned int value)
    {
        write("NextWaypoint",value);
    }

    unsigned int getNextWaypoint(void)

    {
        return getUInt("NextWaypoint");
    }

    bool isNextWaypointValid(void)
    {
        return isValid("NextWaypoint");

    }

    void setFMSVerticalMode(unsigned int value)
    {
        write("FMSVerticalMode",value);
    }

    unsigned int getFMSVerticalMode(void)

    {
        return getUInt("FMSVerticalMode");
    }

    bool isFMSVerticalModeValid(void)
    {
        return isValid("FMSVerticalMode");

    }

    void setVHFChannelReport(unsigned int value)
    {
        write("VHFChannelReport",value);
    }

    unsigned int getVHFChannelReport(void)

    {
        return getUInt("VHFChannelReport");
    }

    bool isVHFChannelReportValid(void)
    {
        return isValid("VHFChannelReport");

    }

    void setMeteorologicalHazards(unsigned int value)
    {
        write("MeteorologicalHazards",value);
    }

    unsigned int getMeteorologicalHazards(void)

    {
        return getUInt("MeteorologicalHazards");
    }

    bool isMeteorologicalHazardsValid(void)
    {
        return isValid("MeteorologicalHazards");

    }

    void setFMSSelectedAltitude(unsigned int value)
    {
        write("FMSSelectedAltitude",value);
    }

    unsigned int getFMSSelectedAltitude(void)

    {
        return getUInt("FMSSelectedAltitude");
    }

    bool isFMSSelectedAltitudeValid(void)
    {
        return isValid("FMSSelectedAltitude");

    }

    void setBarometricPressureMinus800mb(unsigned int value)
    {
        write("BarometricPressureMinus800mb",value);
    }

    unsigned int getBarometricPressureMinus800mb(void)

    {
        return getUInt("BarometricPressureMinus800mb");
    }

    bool isBarometricPressureMinus800mbValid(void)
    {
        return isValid("BarometricPressureMinus800mb");

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