#ifndef __BDSCode40_h
#define __BDSCode40_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode40:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1d;
    CBDSCode40(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode40(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMCPnFCUSelectedAltitudeStatus(bool value)
    {
        write("MCPnFCUSelectedAltitudeStatus",value);
    }

    bool getMCPnFCUSelectedAltitudeStatus(void)

    {
        return getBool("MCPnFCUSelectedAltitudeStatus");
    }

    bool isMCPnFCUSelectedAltitudeStatusValid(void)
    {
        return isValid("MCPnFCUSelectedAltitudeStatus");

    }

    void setMCPnFCUSelectedAltitude(int value)
    {
        write("MCPnFCUSelectedAltitude",value);
    }

    int getMCPnFCUSelectedAltitude(void)

    {
        return getInt("MCPnFCUSelectedAltitude");
    }

    bool isMCPnFCUSelectedAltitudeValid(void)
    {
        return isValid("MCPnFCUSelectedAltitude");

    }

    void setFMSSelectedAltitudeStatus(bool value)
    {
        write("FMSSelectedAltitudeStatus",value);
    }

    bool getFMSSelectedAltitudeStatus(void)

    {
        return getBool("FMSSelectedAltitudeStatus");
    }

    bool isFMSSelectedAltitudeStatusValid(void)
    {
        return isValid("FMSSelectedAltitudeStatus");

    }

    void setFMSSelectedAltitude(int value)
    {
        write("FMSSelectedAltitude",value);
    }

    int getFMSSelectedAltitude(void)

    {
        return getInt("FMSSelectedAltitude");
    }

    bool isFMSSelectedAltitudeValid(void)
    {
        return isValid("FMSSelectedAltitude");

    }

    void setBarometricPressureStatus(bool value)
    {
        write("BarometricPressureStatus",value);
    }

    bool getBarometricPressureStatus(void)

    {
        return getBool("BarometricPressureStatus");
    }

    bool isBarometricPressureStatusValid(void)
    {
        return isValid("BarometricPressureStatus");

    }

    void setBarometricPressureMinus800mb(float value)
    {
        write("BarometricPressureMinus800mb",value);
    }

    float getBarometricPressureMinus800mb(void)

    {
        return getFloat("BarometricPressureMinus800mb");
    }

    bool isBarometricPressureMinus800mbValid(void)
    {
        return isValid("BarometricPressureMinus800mb");

    }

    void setMCPnFCUModeStatus(bool value)
    {
        write("MCPnFCUModeStatus",value);
    }

    bool getMCPnFCUModeStatus(void)

    {
        return getBool("MCPnFCUModeStatus");
    }

    bool isMCPnFCUModeStatusValid(void)
    {
        return isValid("MCPnFCUModeStatus");

    }

    void setVNAVMode(bool value)
    {
        write("VNAVMode",value);
    }

    bool getVNAVMode(void)

    {
        return getBool("VNAVMode");
    }

    bool isVNAVModeValid(void)
    {
        return isValid("VNAVMode");

    }

    void setAltHoldMode(bool value)
    {
        write("AltHoldMode",value);
    }

    bool getAltHoldMode(void)

    {
        return getBool("AltHoldMode");
    }

    bool isAltHoldModeValid(void)
    {
        return isValid("AltHoldMode");

    }

    void setApproachMode(bool value)
    {
        write("ApproachMode",value);
    }

    bool getApproachMode(void)

    {
        return getBool("ApproachMode");
    }

    bool isApproachModeValid(void)
    {
        return isValid("ApproachMode");

    }

    void setTargetAltSourceStatus(bool value)
    {
        write("TargetAltSourceStatus",value);
    }

    bool getTargetAltSourceStatus(void)

    {
        return getBool("TargetAltSourceStatus");
    }

    bool isTargetAltSourceStatusValid(void)
    {
        return isValid("TargetAltSourceStatus");

    }

    void setTargetAltSource(unsigned int value)
    {
        write("TargetAltSource",value);
    }

    unsigned int getTargetAltSource(void)

    {
        return getUInt("TargetAltSource");
    }

    bool isTargetAltSourceValid(void)
    {
        return isValid("TargetAltSource");

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