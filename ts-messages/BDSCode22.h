#ifndef __BDSCode22_h
#define __BDSCode22_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode22:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x1a;
    CBDSCode22(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode22(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAntenna1AntennaType(unsigned int value)
    {
        write("Antenna1AntennaType",value);
    }

    unsigned int getAntenna1AntennaType(void)

    {
        return getUInt("Antenna1AntennaType");
    }

    bool isAntenna1AntennaTypeValid(void)
    {
        return isValid("Antenna1AntennaType");

    }

    void setAntenna1XPostion(unsigned int value)
    {
        write("Antenna1XPostion",value);
    }

    unsigned int getAntenna1XPostion(void)

    {
        return getUInt("Antenna1XPostion");
    }

    bool isAntenna1XPostionValid(void)
    {
        return isValid("Antenna1XPostion");

    }

    void setAntenna1ZPostion(unsigned int value)
    {
        write("Antenna1ZPostion",value);
    }

    unsigned int getAntenna1ZPostion(void)

    {
        return getUInt("Antenna1ZPostion");
    }

    bool isAntenna1ZPostionValid(void)
    {
        return isValid("Antenna1ZPostion");

    }

    void setAntenna2AntennaType(unsigned int value)
    {
        write("Antenna2AntennaType",value);
    }

    unsigned int getAntenna2AntennaType(void)

    {
        return getUInt("Antenna2AntennaType");
    }

    bool isAntenna2AntennaTypeValid(void)
    {
        return isValid("Antenna2AntennaType");

    }

    void setAntenna2XPostion(unsigned int value)
    {
        write("Antenna2XPostion",value);
    }

    unsigned int getAntenna2XPostion(void)

    {
        return getUInt("Antenna2XPostion");
    }

    bool isAntenna2XPostionValid(void)
    {
        return isValid("Antenna2XPostion");

    }

    void setAntenna2ZPostion(unsigned int value)
    {
        write("Antenna2ZPostion",value);
    }

    unsigned int getAntenna2ZPostion(void)

    {
        return getUInt("Antenna2ZPostion");
    }

    bool isAntenna2ZPostionValid(void)
    {
        return isValid("Antenna2ZPostion");

    }

    void setAntenna3AntennaType(unsigned int value)
    {
        write("Antenna3AntennaType",value);
    }

    unsigned int getAntenna3AntennaType(void)

    {
        return getUInt("Antenna3AntennaType");
    }

    bool isAntenna3AntennaTypeValid(void)
    {
        return isValid("Antenna3AntennaType");

    }

    void setAntenna3XPostion(unsigned int value)
    {
        write("Antenna3XPostion",value);
    }

    unsigned int getAntenna3XPostion(void)

    {
        return getUInt("Antenna3XPostion");
    }

    bool isAntenna3XPostionValid(void)
    {
        return isValid("Antenna3XPostion");

    }

    void setAntenna3ZPostion(unsigned int value)
    {
        write("Antenna3ZPostion",value);
    }

    unsigned int getAntenna3ZPostion(void)

    {
        return getUInt("Antenna3ZPostion");
    }

    bool isAntenna3ZPostionValid(void)
    {
        return isValid("Antenna3ZPostion");

    }

    void setAntenna4AntennaType(unsigned int value)
    {
        write("Antenna4AntennaType",value);
    }

    unsigned int getAntenna4AntennaType(void)

    {
        return getUInt("Antenna4AntennaType");
    }

    bool isAntenna4AntennaTypeValid(void)
    {
        return isValid("Antenna4AntennaType");

    }

    void setAntenna4XPostion(unsigned int value)
    {
        write("Antenna4XPostion",value);
    }

    unsigned int getAntenna4XPostion(void)

    {
        return getUInt("Antenna4XPostion");
    }

    bool isAntenna4XPostionValid(void)
    {
        return isValid("Antenna4XPostion");

    }

    void setAntenna4ZPostion(unsigned int value)
    {
        write("Antenna4ZPostion",value);
    }

    unsigned int getAntenna4ZPostion(void)

    {
        return getUInt("Antenna4ZPostion");
    }

    bool isAntenna4ZPostionValid(void)
    {
        return isValid("Antenna4ZPostion");

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