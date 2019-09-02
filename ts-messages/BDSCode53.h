#ifndef __BDSCode53_h
#define __BDSCode53_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode53:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x27;
    CBDSCode53(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode53(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setMagneticHeadingStatus(bool value)
    {
        write("MagneticHeadingStatus",value);
    }

    bool getMagneticHeadingStatus(void)

    {
        return getBool("MagneticHeadingStatus");
    }

    bool isMagneticHeadingStatusValid(void)
    {
        return isValid("MagneticHeadingStatus");

    }

    void setMagneticHeadingSign(bool value)
    {
        write("MagneticHeadingSign",value);
    }

    bool getMagneticHeadingSign(void)

    {
        return getBool("MagneticHeadingSign");
    }

    bool isMagneticHeadingSignValid(void)
    {
        return isValid("MagneticHeadingSign");

    }

    void setMagneticHeading(float value)
    {
        write("MagneticHeading",value);
    }

    float getMagneticHeading(void)

    {
        return getFloat("MagneticHeading");
    }

    bool isMagneticHeadingValid(void)
    {
        return isValid("MagneticHeading");

    }

    void setIndicatedAirspeedStatus(bool value)
    {
        write("IndicatedAirspeedStatus",value);
    }

    bool getIndicatedAirspeedStatus(void)

    {
        return getBool("IndicatedAirspeedStatus");
    }

    bool isIndicatedAirspeedStatusValid(void)
    {
        return isValid("IndicatedAirspeedStatus");

    }

    void setIndicatedAirspeed(unsigned int value)
    {
        write("IndicatedAirspeed",value);
    }

    unsigned int getIndicatedAirspeed(void)

    {
        return getUInt("IndicatedAirspeed");
    }

    bool isIndicatedAirspeedValid(void)
    {
        return isValid("IndicatedAirspeed");

    }

    void setMachNumberStatus(bool value)
    {
        write("MachNumberStatus",value);
    }

    bool getMachNumberStatus(void)

    {
        return getBool("MachNumberStatus");
    }

    bool isMachNumberStatusValid(void)
    {
        return isValid("MachNumberStatus");

    }

    void setMachNumber(float value)
    {
        write("MachNumber",value);
    }

    float getMachNumber(void)

    {
        return getFloat("MachNumber");
    }

    bool isMachNumberValid(void)
    {
        return isValid("MachNumber");

    }

    void setTrueAirspeedStatus(bool value)
    {
        write("TrueAirspeedStatus",value);
    }

    bool getTrueAirspeedStatus(void)

    {
        return getBool("TrueAirspeedStatus");
    }

    bool isTrueAirspeedStatusValid(void)
    {
        return isValid("TrueAirspeedStatus");

    }

    void setTrueAirspeed(float value)
    {
        write("TrueAirspeed",value);
    }

    float getTrueAirspeed(void)

    {
        return getFloat("TrueAirspeed");
    }

    bool isTrueAirspeedValid(void)
    {
        return isValid("TrueAirspeed");

    }

    void setAltitudeRateStatus(bool value)
    {
        write("AltitudeRateStatus",value);
    }

    bool getAltitudeRateStatus(void)

    {
        return getBool("AltitudeRateStatus");
    }

    bool isAltitudeRateStatusValid(void)
    {
        return isValid("AltitudeRateStatus");

    }

    void setAltitudeRateSign(bool value)
    {
        write("AltitudeRateSign",value);
    }

    bool getAltitudeRateSign(void)

    {
        return getBool("AltitudeRateSign");
    }

    bool isAltitudeRateSignValid(void)
    {
        return isValid("AltitudeRateSign");

    }

    void setAltitudeRate(int value)
    {
        write("AltitudeRate",value);
    }

    int getAltitudeRate(void)

    {
        return getInt("AltitudeRate");
    }

    bool isAltitudeRateValid(void)
    {
        return isValid("AltitudeRate");

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