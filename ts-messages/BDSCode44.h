#ifndef __BDSCode44_h
#define __BDSCode44_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode44:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x21;
    CBDSCode44(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode44(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setFOMSource(unsigned int value)
    {
        write("FOMSource",value);
    }

    unsigned int getFOMSource(void)

    {
        return getUInt("FOMSource");
    }

    bool isFOMSourceValid(void)
    {
        return isValid("FOMSource");

    }

    void setWindSpeednDirectionStatus(bool value)
    {
        write("WindSpeednDirectionStatus",value);
    }

    bool getWindSpeednDirectionStatus(void)

    {
        return getBool("WindSpeednDirectionStatus");
    }

    bool isWindSpeednDirectionStatusValid(void)
    {
        return isValid("WindSpeednDirectionStatus");

    }

    void setWindSpeed(unsigned int value)
    {
        write("WindSpeed",value);
    }

    unsigned int getWindSpeed(void)

    {
        return getUInt("WindSpeed");
    }

    bool isWindSpeedValid(void)
    {
        return isValid("WindSpeed");

    }

    void setWindDirection(float value)
    {
        write("WindDirection",value);
    }

    float getWindDirection(void)

    {
        return getFloat("WindDirection");
    }

    bool isWindDirectionValid(void)
    {
        return isValid("WindDirection");

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

    void setHumidityStatus(bool value)
    {
        write("HumidityStatus",value);
    }

    bool getHumidityStatus(void)

    {
        return getBool("HumidityStatus");
    }

    bool isHumidityStatusValid(void)
    {
        return isValid("HumidityStatus");

    }

    void setHumidity(float value)
    {
        write("Humidity",value);
    }

    float getHumidity(void)

    {
        return getFloat("Humidity");
    }

    bool isHumidityValid(void)
    {
        return isValid("Humidity");

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