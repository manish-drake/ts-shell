#ifndef __BDSCode60_h
#define __BDSCode60_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode60:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2c;
    CBDSCode60(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode60(Json::Value obj):TServerMessage(obj)
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

    void setMachStatus(bool value)
    {
        write("MachStatus",value);
    }

    bool getMachStatus(void)

    {
        return getBool("MachStatus");
    }

    bool isMachStatusValid(void)
    {
        return isValid("MachStatus");

    }

    void setMach(float value)
    {
        write("Mach",value);
    }

    float getMach(void)

    {
        return getFloat("Mach");
    }

    bool isMachValid(void)
    {
        return isValid("Mach");

    }

    void setBarometricAltitudeRateStatus(bool value)
    {
        write("BarometricAltitudeRateStatus",value);
    }

    bool getBarometricAltitudeRateStatus(void)

    {
        return getBool("BarometricAltitudeRateStatus");
    }

    bool isBarometricAltitudeRateStatusValid(void)
    {
        return isValid("BarometricAltitudeRateStatus");

    }

    void setBarometricAltitudeRateSign(bool value)
    {
        write("BarometricAltitudeRateSign",value);
    }

    bool getBarometricAltitudeRateSign(void)

    {
        return getBool("BarometricAltitudeRateSign");
    }

    bool isBarometricAltitudeRateSignValid(void)
    {
        return isValid("BarometricAltitudeRateSign");

    }

    void setBarometricAltitudeRate(int value)
    {
        write("BarometricAltitudeRate",value);
    }

    int getBarometricAltitudeRate(void)

    {
        return getInt("BarometricAltitudeRate");
    }

    bool isBarometricAltitudeRateValid(void)
    {
        return isValid("BarometricAltitudeRate");

    }

    void setInertialVerticalVelocityStatus(bool value)
    {
        write("InertialVerticalVelocityStatus",value);
    }

    bool getInertialVerticalVelocityStatus(void)

    {
        return getBool("InertialVerticalVelocityStatus");
    }

    bool isInertialVerticalVelocityStatusValid(void)
    {
        return isValid("InertialVerticalVelocityStatus");

    }

    void setInertialVerticalVelocitySign(bool value)
    {
        write("InertialVerticalVelocitySign",value);
    }

    bool getInertialVerticalVelocitySign(void)

    {
        return getBool("InertialVerticalVelocitySign");
    }

    bool isInertialVerticalVelocitySignValid(void)
    {
        return isValid("InertialVerticalVelocitySign");

    }

    void setInertialVerticalVelocity(int value)
    {
        write("InertialVerticalVelocity",value);
    }

    int getInertialVerticalVelocity(void)

    {
        return getInt("InertialVerticalVelocity");
    }

    bool isInertialVerticalVelocityValid(void)
    {
        return isValid("InertialVerticalVelocity");

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