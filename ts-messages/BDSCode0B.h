#ifndef __BDSCode0B_h
#define __BDSCode0B_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode0B:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xc;
    CBDSCode0B(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode0B(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
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

    void setTrueAirspeed(unsigned int value)
    {
        write("TrueAirspeed",value);
    }

    unsigned int getTrueAirspeed(void)

    {
        return getUInt("TrueAirspeed");
    }

    bool isTrueAirspeedValid(void)
    {
        return isValid("TrueAirspeed");

    }

    void setHeadingSwitch(unsigned int value)
    {
        write("HeadingSwitch",value);
    }

    unsigned int getHeadingSwitch(void)

    {
        return getUInt("HeadingSwitch");
    }

    bool isHeadingSwitchValid(void)
    {
        return isValid("HeadingSwitch");

    }

    void setHeadingStatus(bool value)
    {
        write("HeadingStatus",value);
    }

    bool getHeadingStatus(void)

    {
        return getBool("HeadingStatus");
    }

    bool isHeadingStatusValid(void)
    {
        return isValid("HeadingStatus");

    }

    void setHeadingSign(bool value)
    {
        write("HeadingSign",value);
    }

    bool getHeadingSign(void)

    {
        return getBool("HeadingSign");
    }

    bool isHeadingSignValid(void)
    {
        return isValid("HeadingSign");

    }

    void setHeading(float value)
    {
        write("Heading",value);
    }

    float getHeading(void)

    {
        return getFloat("Heading");
    }

    bool isHeadingValid(void)
    {
        return isValid("Heading");

    }

    void setTrueTrackAngleStatus(bool value)
    {
        write("TrueTrackAngleStatus",value);
    }

    bool getTrueTrackAngleStatus(void)

    {
        return getBool("TrueTrackAngleStatus");
    }

    bool isTrueTrackAngleStatusValid(void)
    {
        return isValid("TrueTrackAngleStatus");

    }

    void setTrueTrackAngleSign(bool value)
    {
        write("TrueTrackAngleSign",value);
    }

    bool getTrueTrackAngleSign(void)

    {
        return getBool("TrueTrackAngleSign");
    }

    bool isTrueTrackAngleSignValid(void)
    {
        return isValid("TrueTrackAngleSign");

    }

    void setTrueTrackAngle(float value)
    {
        write("TrueTrackAngle",value);
    }

    float getTrueTrackAngle(void)

    {
        return getFloat("TrueTrackAngle");
    }

    bool isTrueTrackAngleValid(void)
    {
        return isValid("TrueTrackAngle");

    }

    void setGroundSpeedStatus(bool value)
    {
        write("GroundSpeedStatus",value);
    }

    bool getGroundSpeedStatus(void)

    {
        return getBool("GroundSpeedStatus");
    }

    bool isGroundSpeedStatusValid(void)
    {
        return isValid("GroundSpeedStatus");

    }

    void setGroundSpeed(float value)
    {
        write("GroundSpeed",value);
    }

    float getGroundSpeed(void)

    {
        return getFloat("GroundSpeed");
    }

    bool isGroundSpeedValid(void)
    {
        return isValid("GroundSpeed");

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