#ifndef __BDSCode21_h
#define __BDSCode21_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode21:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x19;
    CBDSCode21(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode21(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAircraftRegistrationStatus(bool value)
    {
        write("AircraftRegistrationStatus",value);
    }

    bool getAircraftRegistrationStatus(void)

    {
        return getBool("AircraftRegistrationStatus");
    }

    bool isAircraftRegistrationStatusValid(void)
    {
        return isValid("AircraftRegistrationStatus");

    }

    void setAircraftRegistrationNumber(std::string value)
    {
        write("AircraftRegistrationNumber",value);
    }

    std::string getAircraftRegistrationNumber(void)

    {
        return getString("AircraftRegistrationNumber");
    }

    bool isAircraftRegistrationNumberValid(void)
    {
        return isValid("AircraftRegistrationNumber");

    }

    void setICAOAirlineRegistrationStatus(bool value)
    {
        write("ICAOAirlineRegistrationStatus",value);
    }

    bool getICAOAirlineRegistrationStatus(void)

    {
        return getBool("ICAOAirlineRegistrationStatus");
    }

    bool isICAOAirlineRegistrationStatusValid(void)
    {
        return isValid("ICAOAirlineRegistrationStatus");

    }

    void setICAOAirlineRegistrationMarking(std::string value)
    {
        write("ICAOAirlineRegistrationMarking",value);
    }

    std::string getICAOAirlineRegistrationMarking(void)

    {
        return getString("ICAOAirlineRegistrationMarking");
    }

    bool isICAOAirlineRegistrationMarkingValid(void)
    {
        return isValid("ICAOAirlineRegistrationMarking");

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