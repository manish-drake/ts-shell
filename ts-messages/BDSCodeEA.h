#ifndef __BDSCodeEA_h
#define __BDSCodeEA_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCodeEA:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x34;
    CBDSCodeEA(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCodeEA(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSEARegisterNumber(std::string value)
    {
        write("BDSEARegisterNumber",value);
    }

    std::string getBDSEARegisterNumber(void)

    {
        return getString("BDSEARegisterNumber");
    }

    bool isBDSEARegisterNumberValid(void)
    {
        return isValid("BDSEARegisterNumber");

    }

    void setManufacturerDefinedDiagnosticField9_16(std::string value)
    {
        write("ManufacturerDefinedDiagnosticField9_16",value);
    }

    std::string getManufacturerDefinedDiagnosticField9_16(void)

    {
        return getString("ManufacturerDefinedDiagnosticField9_16");
    }

    bool isManufacturerDefinedDiagnosticField9_16Valid(void)
    {
        return isValid("ManufacturerDefinedDiagnosticField9_16");

    }

    void setManufacturerDefinedDiagnosticField17_24(std::string value)
    {
        write("ManufacturerDefinedDiagnosticField17_24",value);
    }

    std::string getManufacturerDefinedDiagnosticField17_24(void)

    {
        return getString("ManufacturerDefinedDiagnosticField17_24");
    }

    bool isManufacturerDefinedDiagnosticField17_24Valid(void)
    {
        return isValid("ManufacturerDefinedDiagnosticField17_24");

    }

    void setManufacturerDefinedDiagnosticField25_32(std::string value)
    {
        write("ManufacturerDefinedDiagnosticField25_32",value);
    }

    std::string getManufacturerDefinedDiagnosticField25_32(void)

    {
        return getString("ManufacturerDefinedDiagnosticField25_32");
    }

    bool isManufacturerDefinedDiagnosticField25_32Valid(void)
    {
        return isValid("ManufacturerDefinedDiagnosticField25_32");

    }

    void setManufacturerDefinedDiagnosticField33_40(std::string value)
    {
        write("ManufacturerDefinedDiagnosticField33_40",value);
    }

    std::string getManufacturerDefinedDiagnosticField33_40(void)

    {
        return getString("ManufacturerDefinedDiagnosticField33_40");
    }

    bool isManufacturerDefinedDiagnosticField33_40Valid(void)
    {
        return isValid("ManufacturerDefinedDiagnosticField33_40");

    }

    void setManufacturerDefinedDiagnosticField41_48(std::string value)
    {
        write("ManufacturerDefinedDiagnosticField41_48",value);
    }

    std::string getManufacturerDefinedDiagnosticField41_48(void)

    {
        return getString("ManufacturerDefinedDiagnosticField41_48");
    }

    bool isManufacturerDefinedDiagnosticField41_48Valid(void)
    {
        return isValid("ManufacturerDefinedDiagnosticField41_48");

    }

    void setManufacturerDefinedDiagnosticField49_56(std::string value)
    {
        write("ManufacturerDefinedDiagnosticField49_56",value);
    }

    std::string getManufacturerDefinedDiagnosticField49_56(void)

    {
        return getString("ManufacturerDefinedDiagnosticField49_56");
    }

    bool isManufacturerDefinedDiagnosticField49_56Valid(void)
    {
        return isValid("ManufacturerDefinedDiagnosticField49_56");

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