#ifndef __BDSCode10_h
#define __BDSCode10_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode10:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xe;
    CBDSCode10(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode10(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSCode(std::string value)
    {
        write("BDSCode",value);
    }

    std::string getBDSCode(void)

    {
        return getString("BDSCode");
    }

    bool isBDSCodeValid(void)
    {
        return isValid("BDSCode");

    }

    void setcontinuationFlag(bool value)
    {
        write("continuationFlag",value);
    }

    bool getcontinuationFlag(void)

    {
        return getBool("continuationFlag");
    }

    bool iscontinuationFlagValid(void)
    {
        return isValid("continuationFlag");

    }

    void setOverlayCommandCapability(unsigned int value)
    {
        write("OverlayCommandCapability",value);
    }

    unsigned int getOverlayCommandCapability(void)

    {
        return getUInt("OverlayCommandCapability");
    }

    bool isOverlayCommandCapabilityValid(void)
    {
        return isValid("OverlayCommandCapability");

    }

    void setACASStatus(bool value)
    {
        write("ACASStatus",value);
    }

    bool getACASStatus(void)

    {
        return getBool("ACASStatus");
    }

    bool isACASStatusValid(void)
    {
        return isValid("ACASStatus");

    }

    void setModeSSubnetworkVersion(unsigned int value)
    {
        write("ModeSSubnetworkVersion",value);
    }

    unsigned int getModeSSubnetworkVersion(void)

    {
        return getUInt("ModeSSubnetworkVersion");
    }

    bool isModeSSubnetworkVersionValid(void)
    {
        return isValid("ModeSSubnetworkVersion");

    }

    void setTransponderEnhancedProtocolIndicator(unsigned int value)
    {
        write("TransponderEnhancedProtocolIndicator",value);
    }

    unsigned int getTransponderEnhancedProtocolIndicator(void)

    {
        return getUInt("TransponderEnhancedProtocolIndicator");
    }

    bool isTransponderEnhancedProtocolIndicatorValid(void)
    {
        return isValid("TransponderEnhancedProtocolIndicator");

    }

    void setModeSSpecificServicesCapability(unsigned int value)
    {
        write("ModeSSpecificServicesCapability",value);
    }

    unsigned int getModeSSpecificServicesCapability(void)

    {
        return getUInt("ModeSSpecificServicesCapability");
    }

    bool isModeSSpecificServicesCapabilityValid(void)
    {
        return isValid("ModeSSpecificServicesCapability");

    }

    void setUplinkELM(unsigned int value)
    {
        write("UplinkELM",value);
    }

    unsigned int getUplinkELM(void)

    {
        return getUInt("UplinkELM");
    }

    bool isUplinkELMValid(void)
    {
        return isValid("UplinkELM");

    }

    void setDownlinkELM(unsigned int value)
    {
        write("DownlinkELM",value);
    }

    unsigned int getDownlinkELM(void)

    {
        return getUInt("DownlinkELM");
    }

    bool isDownlinkELMValid(void)
    {
        return isValid("DownlinkELM");

    }

    void setAircraftIDCapability(bool value)
    {
        write("AircraftIDCapability",value);
    }

    bool getAircraftIDCapability(void)

    {
        return getBool("AircraftIDCapability");
    }

    bool isAircraftIDCapabilityValid(void)
    {
        return isValid("AircraftIDCapability");

    }

    void setSquitterCapabilitySubfield(bool value)
    {
        write("SquitterCapabilitySubfield",value);
    }

    bool getSquitterCapabilitySubfield(void)

    {
        return getBool("SquitterCapabilitySubfield");
    }

    bool isSquitterCapabilitySubfieldValid(void)
    {
        return isValid("SquitterCapabilitySubfield");

    }

    void setSurveillanceIdentifierCode(bool value)
    {
        write("SurveillanceIdentifierCode",value);
    }

    bool getSurveillanceIdentifierCode(void)

    {
        return getBool("SurveillanceIdentifierCode");
    }

    bool isSurveillanceIdentifierCodeValid(void)
    {
        return isValid("SurveillanceIdentifierCode");

    }

    void setCommonUsageGICBCapabilityReport(bool value)
    {
        write("CommonUsageGICBCapabilityReport",value);
    }

    bool getCommonUsageGICBCapabilityReport(void)

    {
        return getBool("CommonUsageGICBCapabilityReport");
    }

    bool isCommonUsageGICBCapabilityReportValid(void)
    {
        return isValid("CommonUsageGICBCapabilityReport");

    }

    void setHybridSurveillanceCapability(bool value)
    {
        write("HybridSurveillanceCapability",value);
    }

    bool getHybridSurveillanceCapability(void)

    {
        return getBool("HybridSurveillanceCapability");
    }

    bool isHybridSurveillanceCapabilityValid(void)
    {
        return isValid("HybridSurveillanceCapability");

    }

    void setACASTAsRAsGeneration(bool value)
    {
        write("ACASTAsRAsGeneration",value);
    }

    bool getACASTAsRAsGeneration(void)

    {
        return getBool("ACASTAsRAsGeneration");
    }

    bool isACASTAsRAsGenerationValid(void)
    {
        return isValid("ACASTAsRAsGeneration");

    }

    void setMOPSDocument(unsigned int value)
    {
        write("MOPSDocument",value);
    }

    unsigned int getMOPSDocument(void)

    {
        return getUInt("MOPSDocument");
    }

    bool isMOPSDocumentValid(void)
    {
        return isValid("MOPSDocument");

    }

    void setDTESubAddrStatus0(bool value)
    {
        write("DTESubAddrStatus0",value);
    }

    bool getDTESubAddrStatus0(void)

    {
        return getBool("DTESubAddrStatus0");
    }

    bool isDTESubAddrStatus0Valid(void)
    {
        return isValid("DTESubAddrStatus0");

    }

    void setDTESubAddrStatus1(bool value)
    {
        write("DTESubAddrStatus1",value);
    }

    bool getDTESubAddrStatus1(void)

    {
        return getBool("DTESubAddrStatus1");
    }

    bool isDTESubAddrStatus1Valid(void)
    {
        return isValid("DTESubAddrStatus1");

    }

    void setDTESubAddrStatus2(bool value)
    {
        write("DTESubAddrStatus2",value);
    }

    bool getDTESubAddrStatus2(void)

    {
        return getBool("DTESubAddrStatus2");
    }

    bool isDTESubAddrStatus2Valid(void)
    {
        return isValid("DTESubAddrStatus2");

    }

    void setDTESubAddrStatus3(bool value)
    {
        write("DTESubAddrStatus3",value);
    }

    bool getDTESubAddrStatus3(void)

    {
        return getBool("DTESubAddrStatus3");
    }

    bool isDTESubAddrStatus3Valid(void)
    {
        return isValid("DTESubAddrStatus3");

    }

    void setDTESubAddrStatus4(bool value)
    {
        write("DTESubAddrStatus4",value);
    }

    bool getDTESubAddrStatus4(void)

    {
        return getBool("DTESubAddrStatus4");
    }

    bool isDTESubAddrStatus4Valid(void)
    {
        return isValid("DTESubAddrStatus4");

    }

    void setDTESubAddrStatus5(bool value)
    {
        write("DTESubAddrStatus5",value);
    }

    bool getDTESubAddrStatus5(void)

    {
        return getBool("DTESubAddrStatus5");
    }

    bool isDTESubAddrStatus5Valid(void)
    {
        return isValid("DTESubAddrStatus5");

    }

    void setDTESubAddrStatus6(bool value)
    {
        write("DTESubAddrStatus6",value);
    }

    bool getDTESubAddrStatus6(void)

    {
        return getBool("DTESubAddrStatus6");
    }

    bool isDTESubAddrStatus6Valid(void)
    {
        return isValid("DTESubAddrStatus6");

    }

    void setDTESubAddrStatus7(bool value)
    {
        write("DTESubAddrStatus7",value);
    }

    bool getDTESubAddrStatus7(void)

    {
        return getBool("DTESubAddrStatus7");
    }

    bool isDTESubAddrStatus7Valid(void)
    {
        return isValid("DTESubAddrStatus7");

    }

    void setDTESubAddrStatus8(bool value)
    {
        write("DTESubAddrStatus8",value);
    }

    bool getDTESubAddrStatus8(void)

    {
        return getBool("DTESubAddrStatus8");
    }

    bool isDTESubAddrStatus8Valid(void)
    {
        return isValid("DTESubAddrStatus8");

    }

    void setDTESubAddrStatus9(bool value)
    {
        write("DTESubAddrStatus9",value);
    }

    bool getDTESubAddrStatus9(void)

    {
        return getBool("DTESubAddrStatus9");
    }

    bool isDTESubAddrStatus9Valid(void)
    {
        return isValid("DTESubAddrStatus9");

    }

    void setDTESubAddrStatus10(bool value)
    {
        write("DTESubAddrStatus10",value);
    }

    bool getDTESubAddrStatus10(void)

    {
        return getBool("DTESubAddrStatus10");
    }

    bool isDTESubAddrStatus10Valid(void)
    {
        return isValid("DTESubAddrStatus10");

    }

    void setDTESubAddrStatus11(bool value)
    {
        write("DTESubAddrStatus11",value);
    }

    bool getDTESubAddrStatus11(void)

    {
        return getBool("DTESubAddrStatus11");
    }

    bool isDTESubAddrStatus11Valid(void)
    {
        return isValid("DTESubAddrStatus11");

    }

    void setDTESubAddrStatus12(bool value)
    {
        write("DTESubAddrStatus12",value);
    }

    bool getDTESubAddrStatus12(void)

    {
        return getBool("DTESubAddrStatus12");
    }

    bool isDTESubAddrStatus12Valid(void)
    {
        return isValid("DTESubAddrStatus12");

    }

    void setDTESubAddrStatus13(bool value)
    {
        write("DTESubAddrStatus13",value);
    }

    bool getDTESubAddrStatus13(void)

    {
        return getBool("DTESubAddrStatus13");
    }

    bool isDTESubAddrStatus13Valid(void)
    {
        return isValid("DTESubAddrStatus13");

    }

    void setDTESubAddrStatus14(bool value)
    {
        write("DTESubAddrStatus14",value);
    }

    bool getDTESubAddrStatus14(void)

    {
        return getBool("DTESubAddrStatus14");
    }

    bool isDTESubAddrStatus14Valid(void)
    {
        return isValid("DTESubAddrStatus14");

    }

    void setDTESubAddrStatus15(bool value)
    {
        write("DTESubAddrStatus15",value);
    }

    bool getDTESubAddrStatus15(void)

    {
        return getBool("DTESubAddrStatus15");
    }

    bool isDTESubAddrStatus15Valid(void)
    {
        return isValid("DTESubAddrStatus15");

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