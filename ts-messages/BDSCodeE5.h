#ifndef __BDSCodeE5_h
#define __BDSCodeE5_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCodeE5:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x31;
    CBDSCodeE5(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCodeE5(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSE5Status(bool value)
    {
        write("BDSE5Status",value);
    }

    bool getBDSE5Status(void)

    {
        return getBool("BDSE5Status");
    }

    bool isBDSE5StatusValid(void)
    {
        return isValid("BDSE5Status");

    }

    void setBDSE5FormatType(unsigned int value)
    {
        write("BDSE5FormatType",value);
    }

    unsigned int getBDSE5FormatType(void)

    {
        return getUInt("BDSE5FormatType");
    }

    bool isBDSE5FormatTypeValid(void)
    {
        return isValid("BDSE5FormatType");

    }

    void setBDSE5PartNumber(std::string value)
    {
        write("BDSE5PartNumber",value);
    }

    std::string getBDSE5PartNumber(void)

    {
        return getString("BDSE5PartNumber");
    }

    bool isBDSE5PartNumberValid(void)
    {
        return isValid("BDSE5PartNumber");

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