#ifndef __BDSCodeE6_h
#define __BDSCodeE6_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCodeE6:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x32;
    CBDSCodeE6(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCodeE6(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSE6Status(bool value)
    {
        write("BDSE6Status",value);
    }

    bool getBDSE6Status(void)

    {
        return getBool("BDSE6Status");
    }

    bool isBDSE6StatusValid(void)
    {
        return isValid("BDSE6Status");

    }

    void setBDSE6FormatType(unsigned int value)
    {
        write("BDSE6FormatType",value);
    }

    unsigned int getBDSE6FormatType(void)

    {
        return getUInt("BDSE6FormatType");
    }

    bool isBDSE6FormatTypeValid(void)
    {
        return isValid("BDSE6FormatType");

    }

    void setBDSE6RevisionNumber(std::string value)
    {
        write("BDSE6RevisionNumber",value);
    }

    std::string getBDSE6RevisionNumber(void)

    {
        return getString("BDSE6RevisionNumber");
    }

    bool isBDSE6RevisionNumberValid(void)
    {
        return isValid("BDSE6RevisionNumber");

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