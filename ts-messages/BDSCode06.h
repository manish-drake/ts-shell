#ifndef __BDSCode06_h
#define __BDSCode06_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode06:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x6;
    CBDSCode06(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode06(Json::Value obj):TServerMessage(obj)
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

    void setMovement(unsigned int value)
    {
        write("Movement",value);
    }

    unsigned int getMovement(void)

    {
        return getUInt("Movement");
    }

    bool isMovementValid(void)
    {
        return isValid("Movement");

    }

    void setGroundTrackStatus(unsigned int value)
    {
        write("GroundTrackStatus",value);
    }

    unsigned int getGroundTrackStatus(void)

    {
        return getUInt("GroundTrackStatus");
    }

    bool isGroundTrackStatusValid(void)
    {
        return isValid("GroundTrackStatus");

    }

    void setGroundTrack(unsigned int value)
    {
        write("GroundTrack",value);
    }

    unsigned int getGroundTrack(void)

    {
        return getUInt("GroundTrack");
    }

    bool isGroundTrackValid(void)
    {
        return isValid("GroundTrack");

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