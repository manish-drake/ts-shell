#ifndef __BDSCode09Subtypes3n4_h
#define __BDSCode09Subtypes3n4_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode09Subtypes3n4:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xa;
    CBDSCode09Subtypes3n4(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode09Subtypes3n4(Json::Value obj):TServerMessage(obj)
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

    void setSubtype(unsigned int value)
    {
        write("Subtype",value);
    }

    unsigned int getSubtype(void)

    {
        return getUInt("Subtype");
    }

    bool isSubtypeValid(void)
    {
        return isValid("Subtype");

    }

    void setintentChangeFlag(bool value)
    {
        write("intentChangeFlag",value);
    }

    bool getintentChangeFlag(void)

    {
        return getBool("intentChangeFlag");
    }

    bool isintentChangeFlagValid(void)
    {
        return isValid("intentChangeFlag");

    }

    void setiFRCapabilityFlag(bool value)
    {
        write("iFRCapabilityFlag",value);
    }

    bool getiFRCapabilityFlag(void)

    {
        return getBool("iFRCapabilityFlag");
    }

    bool isiFRCapabilityFlagValid(void)
    {
        return isValid("iFRCapabilityFlag");

    }

    void setNavigationUncertaintyCategoryForVelocity(unsigned int value)
    {
        write("NavigationUncertaintyCategoryForVelocity",value);
    }

    unsigned int getNavigationUncertaintyCategoryForVelocity(void)

    {
        return getUInt("NavigationUncertaintyCategoryForVelocity");
    }

    bool isNavigationUncertaintyCategoryForVelocityValid(void)
    {
        return isValid("NavigationUncertaintyCategoryForVelocity");

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

    void setMagneticHeading(unsigned int value)
    {
        write("MagneticHeading",value);
    }

    unsigned int getMagneticHeading(void)

    {
        return getUInt("MagneticHeading");
    }

    bool isMagneticHeadingValid(void)
    {
        return isValid("MagneticHeading");

    }

    void setAirspeedType(unsigned int value)
    {
        write("AirspeedType",value);
    }

    unsigned int getAirspeedType(void)

    {
        return getUInt("AirspeedType");
    }

    bool isAirspeedTypeValid(void)
    {
        return isValid("AirspeedType");

    }

    void setAirspeed(unsigned int value)
    {
        write("Airspeed",value);
    }

    unsigned int getAirspeed(void)

    {
        return getUInt("Airspeed");
    }

    bool isAirspeedValid(void)
    {
        return isValid("Airspeed");

    }

    void setVerticalRateSource(unsigned int value)
    {
        write("VerticalRateSource",value);
    }

    unsigned int getVerticalRateSource(void)

    {
        return getUInt("VerticalRateSource");
    }

    bool isVerticalRateSourceValid(void)
    {
        return isValid("VerticalRateSource");

    }

    void setVerticalRateSign(bool value)
    {
        write("VerticalRateSign",value);
    }

    bool getVerticalRateSign(void)

    {
        return getBool("VerticalRateSign");
    }

    bool isVerticalRateSignValid(void)
    {
        return isValid("VerticalRateSign");

    }

    void setVerticalRate(unsigned int value)
    {
        write("VerticalRate",value);
    }

    unsigned int getVerticalRate(void)

    {
        return getUInt("VerticalRate");
    }

    bool isVerticalRateValid(void)
    {
        return isValid("VerticalRate");

    }

    void setGeometricHeightDifferenceSign(bool value)
    {
        write("GeometricHeightDifferenceSign",value);
    }

    bool getGeometricHeightDifferenceSign(void)

    {
        return getBool("GeometricHeightDifferenceSign");
    }

    bool isGeometricHeightDifferenceSignValid(void)
    {
        return isValid("GeometricHeightDifferenceSign");

    }

    void setGeometricHeightDifferenceFromBaroAlt(unsigned int value)
    {
        write("GeometricHeightDifferenceFromBaroAlt",value);
    }

    unsigned int getGeometricHeightDifferenceFromBaroAlt(void)

    {
        return getUInt("GeometricHeightDifferenceFromBaroAlt");
    }

    bool isGeometricHeightDifferenceFromBaroAltValid(void)
    {
        return isValid("GeometricHeightDifferenceFromBaroAlt");

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