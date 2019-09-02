#ifndef __BDSCode0A_h
#define __BDSCode0A_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode0A:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xb;
    CBDSCode0A(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode0A(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setRawData1_8(std::string value)
    {
        write("RawData1_8",value);
    }

    std::string getRawData1_8(void)

    {
        return getString("RawData1_8");
    }

    bool isRawData1_8Valid(void)
    {
        return isValid("RawData1_8");

    }

    void setRawData9_16(std::string value)
    {
        write("RawData9_16",value);
    }

    std::string getRawData9_16(void)

    {
        return getString("RawData9_16");
    }

    bool isRawData9_16Valid(void)
    {
        return isValid("RawData9_16");

    }

    void setRawData17_24(std::string value)
    {
        write("RawData17_24",value);
    }

    std::string getRawData17_24(void)

    {
        return getString("RawData17_24");
    }

    bool isRawData17_24Valid(void)
    {
        return isValid("RawData17_24");

    }

    void setRawData25_32(std::string value)
    {
        write("RawData25_32",value);
    }

    std::string getRawData25_32(void)

    {
        return getString("RawData25_32");
    }

    bool isRawData25_32Valid(void)
    {
        return isValid("RawData25_32");

    }

    void setRawData33_40(std::string value)
    {
        write("RawData33_40",value);
    }

    std::string getRawData33_40(void)

    {
        return getString("RawData33_40");
    }

    bool isRawData33_40Valid(void)
    {
        return isValid("RawData33_40");

    }

    void setRawData41_48(std::string value)
    {
        write("RawData41_48",value);
    }

    std::string getRawData41_48(void)

    {
        return getString("RawData41_48");
    }

    bool isRawData41_48Valid(void)
    {
        return isValid("RawData41_48");

    }

    void setRawData49_56(std::string value)
    {
        write("RawData49_56",value);
    }

    std::string getRawData49_56(void)

    {
        return getString("RawData49_56");
    }

    bool isRawData49_56Valid(void)
    {
        return isValid("RawData49_56");

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