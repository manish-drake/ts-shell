#ifndef __BDSCodeE3_h
#define __BDSCodeE3_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCodeE3:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x2f;
    CBDSCodeE3(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCodeE3(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSE3Status(bool value)
    {
        write("BDSE3Status",value);
    }

    bool getBDSE3Status(void)

    {
        return getBool("BDSE3Status");
    }

    bool isBDSE3StatusValid(void)
    {
        return isValid("BDSE3Status");

    }

    void setBDSE3FormatType(unsigned int value)
    {
        write("BDSE3FormatType",value);
    }

    unsigned int getBDSE3FormatType(void)

    {
        return getUInt("BDSE3FormatType");
    }

    bool isBDSE3FormatTypeValid(void)
    {
        return isValid("BDSE3FormatType");

    }

    void setBDSE3PartNumber(std::string value)
    {
        write("BDSE3PartNumber",value);
    }

    std::string getBDSE3PartNumber(void)

    {
        return getString("BDSE3PartNumber");
    }

    bool isBDSE3PartNumberValid(void)
    {
        return isValid("BDSE3PartNumber");

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