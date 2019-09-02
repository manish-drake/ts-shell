#ifndef __BDSCode50_h
#define __BDSCode50_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode50:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x24;
    CBDSCode50(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode50(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setRollAngleStatus(bool value)
    {
        write("RollAngleStatus",value);
    }

    bool getRollAngleStatus(void)

    {
        return getBool("RollAngleStatus");
    }

    bool isRollAngleStatusValid(void)
    {
        return isValid("RollAngleStatus");

    }

    void setRollAngleSign(bool value)
    {
        write("RollAngleSign",value);
    }

    bool getRollAngleSign(void)

    {
        return getBool("RollAngleSign");
    }

    bool isRollAngleSignValid(void)
    {
        return isValid("RollAngleSign");

    }

    void setRollAngle(float value)
    {
        write("RollAngle",value);
    }

    float getRollAngle(void)

    {
        return getFloat("RollAngle");
    }

    bool isRollAngleValid(void)
    {
        return isValid("RollAngle");

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

    void setTrackAngleRateStatus(bool value)
    {
        write("TrackAngleRateStatus",value);
    }

    bool getTrackAngleRateStatus(void)

    {
        return getBool("TrackAngleRateStatus");
    }

    bool isTrackAngleRateStatusValid(void)
    {
        return isValid("TrackAngleRateStatus");

    }

    void setTrackAngleRateSign(bool value)
    {
        write("TrackAngleRateSign",value);
    }

    bool getTrackAngleRateSign(void)

    {
        return getBool("TrackAngleRateSign");
    }

    bool isTrackAngleRateSignValid(void)
    {
        return isValid("TrackAngleRateSign");

    }

    void setTrackAngleRate(float value)
    {
        write("TrackAngleRate",value);
    }

    float getTrackAngleRate(void)

    {
        return getFloat("TrackAngleRate");
    }

    bool isTrackAngleRateValid(void)
    {
        return isValid("TrackAngleRate");

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