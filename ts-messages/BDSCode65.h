#ifndef __BDSCode65_h
#define __BDSCode65_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode65:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2e;
    CBDSCode65(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode65(Json::Value obj):TServerMessage(obj)
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

    void setSubtypeCode(unsigned int value)
    {
        write("SubtypeCode",value);
    }

    unsigned int getSubtypeCode(void)

    {
        return getUInt("SubtypeCode");
    }

    bool isSubtypeCodeValid(void)
    {
        return isValid("SubtypeCode");

    }

    void setEnRouteOperationalCapabilities(unsigned int value)
    {
        write("EnRouteOperationalCapabilities",value);
    }

    unsigned int getEnRouteOperationalCapabilities(void)

    {
        return getUInt("EnRouteOperationalCapabilities");
    }

    bool isEnRouteOperationalCapabilitiesValid(void)
    {
        return isValid("EnRouteOperationalCapabilities");

    }

    void setTerminalAreaOpertionalCapabilities(unsigned int value)
    {
        write("TerminalAreaOpertionalCapabilities",value);
    }

    unsigned int getTerminalAreaOpertionalCapabilities(void)

    {
        return getUInt("TerminalAreaOpertionalCapabilities");
    }

    bool isTerminalAreaOpertionalCapabilitiesValid(void)
    {
        return isValid("TerminalAreaOpertionalCapabilities");

    }

    void setApproachLandingOperationalCapabilities(unsigned int value)
    {
        write("ApproachLandingOperationalCapabilities",value);
    }

    unsigned int getApproachLandingOperationalCapabilities(void)

    {
        return getUInt("ApproachLandingOperationalCapabilities");
    }

    bool isApproachLandingOperationalCapabilitiesValid(void)
    {
        return isValid("ApproachLandingOperationalCapabilities");

    }

    void setSurfaceOperationalCapabilities(unsigned int value)
    {
        write("SurfaceOperationalCapabilities",value);
    }

    unsigned int getSurfaceOperationalCapabilities(void)

    {
        return getUInt("SurfaceOperationalCapabilities");
    }

    bool isSurfaceOperationalCapabilitiesValid(void)
    {
        return isValid("SurfaceOperationalCapabilities");

    }

    void setEnRouteOperationalCapabilityStatus(unsigned int value)
    {
        write("EnRouteOperationalCapabilityStatus",value);
    }

    unsigned int getEnRouteOperationalCapabilityStatus(void)

    {
        return getUInt("EnRouteOperationalCapabilityStatus");
    }

    bool isEnRouteOperationalCapabilityStatusValid(void)
    {
        return isValid("EnRouteOperationalCapabilityStatus");

    }

    void setTerminalAreaOpertionalCapabilityStatus(unsigned int value)
    {
        write("TerminalAreaOpertionalCapabilityStatus",value);
    }

    unsigned int getTerminalAreaOpertionalCapabilityStatus(void)

    {
        return getUInt("TerminalAreaOpertionalCapabilityStatus");
    }

    bool isTerminalAreaOpertionalCapabilityStatusValid(void)
    {
        return isValid("TerminalAreaOpertionalCapabilityStatus");

    }

    void setApproachLandingOperationalCapabilityStatus(unsigned int value)
    {
        write("ApproachLandingOperationalCapabilityStatus",value);
    }

    unsigned int getApproachLandingOperationalCapabilityStatus(void)

    {
        return getUInt("ApproachLandingOperationalCapabilityStatus");
    }

    bool isApproachLandingOperationalCapabilityStatusValid(void)
    {
        return isValid("ApproachLandingOperationalCapabilityStatus");

    }

    void setSurfaceOperationalCapabilityStatus(unsigned int value)
    {
        write("SurfaceOperationalCapabilityStatus",value);
    }

    unsigned int getSurfaceOperationalCapabilityStatus(void)

    {
        return getUInt("SurfaceOperationalCapabilityStatus");
    }

    bool isSurfaceOperationalCapabilityStatusValid(void)
    {
        return isValid("SurfaceOperationalCapabilityStatus");

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