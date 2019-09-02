#ifndef __BDSCode05_h
#define __BDSCode05_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode05:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x5;
    CBDSCode05(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode05(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFormatTypeCode(unsigned int value)
    {
        write("FormatTypeCode",value);
    }

    unsigned int getFormatTypeCode(void)

    {
        return getUInt("FormatTypeCode");
    }

    bool isFormatTypeCodeValid(void)
    {
        return isValid("FormatTypeCode");

    }

    void setSurveillanceStatus(unsigned int value)
    {
        write("SurveillanceStatus",value);
    }

    unsigned int getSurveillanceStatus(void)

    {
        return getUInt("SurveillanceStatus");
    }

    bool isSurveillanceStatusValid(void)
    {
        return isValid("SurveillanceStatus");

    }

    void setsingleAntennaFlag(bool value)
    {
        write("singleAntennaFlag",value);
    }

    bool getsingleAntennaFlag(void)

    {
        return getBool("singleAntennaFlag");
    }

    bool issingleAntennaFlagValid(void)
    {
        return isValid("singleAntennaFlag");

    }

    void setAltitude(unsigned int value)
    {
        write("Altitude",value);
    }

    unsigned int getAltitude(void)

    {
        return getUInt("Altitude");
    }

    bool isAltitudeValid(void)
    {
        return isValid("Altitude");

    }

    void setUTCTimeSync(bool value)
    {
        write("UTCTimeSync",value);
    }

    bool getUTCTimeSync(void)

    {
        return getBool("UTCTimeSync");
    }

    bool isUTCTimeSyncValid(void)
    {
        return isValid("UTCTimeSync");

    }

    void setCPRFormat(unsigned int value)
    {
        write("CPRFormat",value);
    }

    unsigned int getCPRFormat(void)

    {
        return getUInt("CPRFormat");
    }

    bool isCPRFormatValid(void)
    {
        return isValid("CPRFormat");

    }

    void setEncodedLatitude(double value)
    {
        write("EncodedLatitude",value);
    }

    double getEncodedLatitude(void)

    {
        return getDouble("EncodedLatitude");
    }

    bool isEncodedLatitudeValid(void)
    {
        return isValid("EncodedLatitude");

    }

    void setEncodedLongitude(double value)
    {
        write("EncodedLongitude",value);
    }

    double getEncodedLongitude(void)

    {
        return getDouble("EncodedLongitude");
    }

    bool isEncodedLongitudeValid(void)
    {
        return isValid("EncodedLongitude");

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