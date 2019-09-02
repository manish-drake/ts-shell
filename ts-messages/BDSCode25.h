#ifndef __BDSCode25_h
#define __BDSCode25_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode25:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1b;
    CBDSCode25(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode25(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAircraftType(std::string value)
    {
        write("AircraftType",value);
    }

    std::string getAircraftType(void)

    {
        return getString("AircraftType");
    }

    bool isAircraftTypeValid(void)
    {
        return isValid("AircraftType");

    }

    void setEngines(unsigned int value)
    {
        write("Engines",value);
    }

    unsigned int getEngines(void)

    {
        return getUInt("Engines");
    }

    bool isEnginesValid(void)
    {
        return isValid("Engines");

    }

    void setEngineType(std::string value)
    {
        write("EngineType",value);
    }

    std::string getEngineType(void)

    {
        return getString("EngineType");
    }

    bool isEngineTypeValid(void)
    {
        return isValid("EngineType");

    }

    void setModelDesignation(unsigned int value)
    {
        write("ModelDesignation",value);
    }

    unsigned int getModelDesignation(void)

    {
        return getUInt("ModelDesignation");
    }

    bool isModelDesignationValid(void)
    {
        return isValid("ModelDesignation");

    }

    void setWakeTurbulenceCategory(std::string value)
    {
        write("WakeTurbulenceCategory",value);
    }

    std::string getWakeTurbulenceCategory(void)

    {
        return getString("WakeTurbulenceCategory");
    }

    bool isWakeTurbulenceCategoryValid(void)
    {
        return isValid("WakeTurbulenceCategory");

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