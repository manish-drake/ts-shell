#ifndef __BDSCodeE4_h
#define __BDSCodeE4_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCodeE4:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x30;
    CBDSCodeE4(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCodeE4(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSE4Status(bool value)
    {
        write("BDSE4Status",value);
    }

    bool getBDSE4Status(void)

    {
        return getBool("BDSE4Status");
    }

    bool isBDSE4StatusValid(void)
    {
        return isValid("BDSE4Status");

    }

    void setBDSE4FormatType(unsigned int value)
    {
        write("BDSE4FormatType",value);
    }

    unsigned int getBDSE4FormatType(void)

    {
        return getUInt("BDSE4FormatType");
    }

    bool isBDSE4FormatTypeValid(void)
    {
        return isValid("BDSE4FormatType");

    }

    void setBDSE4RevisionNumber(std::string value)
    {
        write("BDSE4RevisionNumber",value);
    }

    std::string getBDSE4RevisionNumber(void)

    {
        return getString("BDSE4RevisionNumber");
    }

    bool isBDSE4RevisionNumberValid(void)
    {
        return isValid("BDSE4RevisionNumber");

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