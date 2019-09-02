#ifndef __BDSCode45_h
#define __BDSCode45_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode45:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x22;
    CBDSCode45(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode45(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setTurbulenceStatus(bool value)
    {
        write("TurbulenceStatus",value);
    }

    bool getTurbulenceStatus(void)

    {
        return getBool("TurbulenceStatus");
    }

    bool isTurbulenceStatusValid(void)
    {
        return isValid("TurbulenceStatus");

    }

    void setTurbulence(unsigned int value)
    {
        write("Turbulence",value);
    }

    unsigned int getTurbulence(void)

    {
        return getUInt("Turbulence");
    }

    bool isTurbulenceValid(void)
    {
        return isValid("Turbulence");

    }

    void setWindShearStatus(bool value)
    {
        write("WindShearStatus",value);
    }

    bool getWindShearStatus(void)

    {
        return getBool("WindShearStatus");
    }

    bool isWindShearStatusValid(void)
    {
        return isValid("WindShearStatus");

    }

    void setWindShear(unsigned int value)
    {
        write("WindShear",value);
    }

    unsigned int getWindShear(void)

    {
        return getUInt("WindShear");
    }

    bool isWindShearValid(void)
    {
        return isValid("WindShear");

    }

    void setMicroburstStatus(bool value)
    {
        write("MicroburstStatus",value);
    }

    bool getMicroburstStatus(void)

    {
        return getBool("MicroburstStatus");
    }

    bool isMicroburstStatusValid(void)
    {
        return isValid("MicroburstStatus");

    }

    void setMicroburst(unsigned int value)
    {
        write("Microburst",value);
    }

    unsigned int getMicroburst(void)

    {
        return getUInt("Microburst");
    }

    bool isMicroburstValid(void)
    {
        return isValid("Microburst");

    }

    void setIcingStatus(bool value)
    {
        write("IcingStatus",value);
    }

    bool getIcingStatus(void)

    {
        return getBool("IcingStatus");
    }

    bool isIcingStatusValid(void)
    {
        return isValid("IcingStatus");

    }

    void setIcing(unsigned int value)
    {
        write("Icing",value);
    }

    unsigned int getIcing(void)

    {
        return getUInt("Icing");
    }

    bool isIcingValid(void)
    {
        return isValid("Icing");

    }

    void setWakeVortexStatus(bool value)
    {
        write("WakeVortexStatus",value);
    }

    bool getWakeVortexStatus(void)

    {
        return getBool("WakeVortexStatus");
    }

    bool isWakeVortexStatusValid(void)
    {
        return isValid("WakeVortexStatus");

    }

    void setWakeVortex(unsigned int value)
    {
        write("WakeVortex",value);
    }

    unsigned int getWakeVortex(void)

    {
        return getUInt("WakeVortex");
    }

    bool isWakeVortexValid(void)
    {
        return isValid("WakeVortex");

    }

    void setStaticAirTemperatureStatus(bool value)
    {
        write("StaticAirTemperatureStatus",value);
    }

    bool getStaticAirTemperatureStatus(void)

    {
        return getBool("StaticAirTemperatureStatus");
    }

    bool isStaticAirTemperatureStatusValid(void)
    {
        return isValid("StaticAirTemperatureStatus");

    }

    void setStaticAirTemperatureSign(bool value)
    {
        write("StaticAirTemperatureSign",value);
    }

    bool getStaticAirTemperatureSign(void)

    {
        return getBool("StaticAirTemperatureSign");
    }

    bool isStaticAirTemperatureSignValid(void)
    {
        return isValid("StaticAirTemperatureSign");

    }

    void setStaticAirTemperature(float value)
    {
        write("StaticAirTemperature",value);
    }

    float getStaticAirTemperature(void)

    {
        return getFloat("StaticAirTemperature");
    }

    bool isStaticAirTemperatureValid(void)
    {
        return isValid("StaticAirTemperature");

    }

    void setAverageStaticPressureStatus(bool value)
    {
        write("AverageStaticPressureStatus",value);
    }

    bool getAverageStaticPressureStatus(void)

    {
        return getBool("AverageStaticPressureStatus");
    }

    bool isAverageStaticPressureStatusValid(void)
    {
        return isValid("AverageStaticPressureStatus");

    }

    void setAverageStaticPressure(unsigned int value)
    {
        write("AverageStaticPressure",value);
    }

    unsigned int getAverageStaticPressure(void)

    {
        return getUInt("AverageStaticPressure");
    }

    bool isAverageStaticPressureValid(void)
    {
        return isValid("AverageStaticPressure");

    }

    void setRadioHeightStatus(bool value)
    {
        write("RadioHeightStatus",value);
    }

    bool getRadioHeightStatus(void)

    {
        return getBool("RadioHeightStatus");
    }

    bool isRadioHeightStatusValid(void)
    {
        return isValid("RadioHeightStatus");

    }

    void setRadioHeight(int value)
    {
        write("RadioHeight",value);
    }

    int getRadioHeight(void)

    {
        return getInt("RadioHeight");
    }

    bool isRadioHeightValid(void)
    {
        return isValid("RadioHeight");

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