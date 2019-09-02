#ifndef __BDSCode09Subtypes1n2_h
#define __BDSCode09Subtypes1n2_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode09Subtypes1n2:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x9;
    CBDSCode09Subtypes1n2(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode09Subtypes1n2(Json::Value obj):TServerMessage(obj)
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

    void setEastWestVelocityDirection(bool value)
    {
        write("EastWestVelocityDirection",value);
    }

    bool getEastWestVelocityDirection(void)

    {
        return getBool("EastWestVelocityDirection");
    }

    bool isEastWestVelocityDirectionValid(void)
    {
        return isValid("EastWestVelocityDirection");

    }

    void setEastWestVelocity(unsigned int value)
    {
        write("EastWestVelocity",value);
    }

    unsigned int getEastWestVelocity(void)

    {
        return getUInt("EastWestVelocity");
    }

    bool isEastWestVelocityValid(void)
    {
        return isValid("EastWestVelocity");

    }

    void setNorthSouthVelocityDirection(bool value)
    {
        write("NorthSouthVelocityDirection",value);
    }

    bool getNorthSouthVelocityDirection(void)

    {
        return getBool("NorthSouthVelocityDirection");
    }

    bool isNorthSouthVelocityDirectionValid(void)
    {
        return isValid("NorthSouthVelocityDirection");

    }

    void setNorthSouthVelocity(unsigned int value)
    {
        write("NorthSouthVelocity",value);
    }

    unsigned int getNorthSouthVelocity(void)

    {
        return getUInt("NorthSouthVelocity");
    }

    bool isNorthSouthVelocityValid(void)
    {
        return isValid("NorthSouthVelocity");

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

    void setGNSSAltSign(bool value)
    {
        write("GNSSAltSign",value);
    }

    bool getGNSSAltSign(void)

    {
        return getBool("GNSSAltSign");
    }

    bool isGNSSAltSignValid(void)
    {
        return isValid("GNSSAltSign");

    }

    void setGNSSAltDifferenceFromBaroAlt(unsigned int value)
    {
        write("GNSSAltDifferenceFromBaroAlt",value);
    }

    unsigned int getGNSSAltDifferenceFromBaroAlt(void)

    {
        return getUInt("GNSSAltDifferenceFromBaroAlt");
    }

    bool isGNSSAltDifferenceFromBaroAltValid(void)
    {
        return isValid("GNSSAltDifferenceFromBaroAlt");

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