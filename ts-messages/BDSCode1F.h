#ifndef __BDSCode1F_h
#define __BDSCode1F_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1F:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x17;
    CBDSCode1F(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1F(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setUplinkMSPChannel57(bool value)
    {
        write("UplinkMSPChannel57",value);
    }

    bool getUplinkMSPChannel57(void)

    {
        return getBool("UplinkMSPChannel57");
    }

    bool isUplinkMSPChannel57Valid(void)
    {
        return isValid("UplinkMSPChannel57");

    }

    void setUplinkMSPChannel58(bool value)
    {
        write("UplinkMSPChannel58",value);
    }

    bool getUplinkMSPChannel58(void)

    {
        return getBool("UplinkMSPChannel58");
    }

    bool isUplinkMSPChannel58Valid(void)
    {
        return isValid("UplinkMSPChannel58");

    }

    void setUplinkMSPChannel59(bool value)
    {
        write("UplinkMSPChannel59",value);
    }

    bool getUplinkMSPChannel59(void)

    {
        return getBool("UplinkMSPChannel59");
    }

    bool isUplinkMSPChannel59Valid(void)
    {
        return isValid("UplinkMSPChannel59");

    }

    void setUplinkMSPChannel60(bool value)
    {
        write("UplinkMSPChannel60",value);
    }

    bool getUplinkMSPChannel60(void)

    {
        return getBool("UplinkMSPChannel60");
    }

    bool isUplinkMSPChannel60Valid(void)
    {
        return isValid("UplinkMSPChannel60");

    }

    void setUplinkMSPChannel61(bool value)
    {
        write("UplinkMSPChannel61",value);
    }

    bool getUplinkMSPChannel61(void)

    {
        return getBool("UplinkMSPChannel61");
    }

    bool isUplinkMSPChannel61Valid(void)
    {
        return isValid("UplinkMSPChannel61");

    }

    void setUplinkMSPChannel62(bool value)
    {
        write("UplinkMSPChannel62",value);
    }

    bool getUplinkMSPChannel62(void)

    {
        return getBool("UplinkMSPChannel62");
    }

    bool isUplinkMSPChannel62Valid(void)
    {
        return isValid("UplinkMSPChannel62");

    }

    void setUplinkMSPChannel63(bool value)
    {
        write("UplinkMSPChannel63",value);
    }

    bool getUplinkMSPChannel63(void)

    {
        return getBool("UplinkMSPChannel63");
    }

    bool isUplinkMSPChannel63Valid(void)
    {
        return isValid("UplinkMSPChannel63");

    }

    void setDownlinkMSPChannel57(bool value)
    {
        write("DownlinkMSPChannel57",value);
    }

    bool getDownlinkMSPChannel57(void)

    {
        return getBool("DownlinkMSPChannel57");
    }

    bool isDownlinkMSPChannel57Valid(void)
    {
        return isValid("DownlinkMSPChannel57");

    }

    void setDownlinkMSPChannel58(bool value)
    {
        write("DownlinkMSPChannel58",value);
    }

    bool getDownlinkMSPChannel58(void)

    {
        return getBool("DownlinkMSPChannel58");
    }

    bool isDownlinkMSPChannel58Valid(void)
    {
        return isValid("DownlinkMSPChannel58");

    }

    void setDownlinkMSPChannel59(bool value)
    {
        write("DownlinkMSPChannel59",value);
    }

    bool getDownlinkMSPChannel59(void)

    {
        return getBool("DownlinkMSPChannel59");
    }

    bool isDownlinkMSPChannel59Valid(void)
    {
        return isValid("DownlinkMSPChannel59");

    }

    void setDownlinkMSPChannel60(bool value)
    {
        write("DownlinkMSPChannel60",value);
    }

    bool getDownlinkMSPChannel60(void)

    {
        return getBool("DownlinkMSPChannel60");
    }

    bool isDownlinkMSPChannel60Valid(void)
    {
        return isValid("DownlinkMSPChannel60");

    }

    void setDownlinkMSPChannel61(bool value)
    {
        write("DownlinkMSPChannel61",value);
    }

    bool getDownlinkMSPChannel61(void)

    {
        return getBool("DownlinkMSPChannel61");
    }

    bool isDownlinkMSPChannel61Valid(void)
    {
        return isValid("DownlinkMSPChannel61");

    }

    void setDownlinkMSPChannel62(bool value)
    {
        write("DownlinkMSPChannel62",value);
    }

    bool getDownlinkMSPChannel62(void)

    {
        return getBool("DownlinkMSPChannel62");
    }

    bool isDownlinkMSPChannel62Valid(void)
    {
        return isValid("DownlinkMSPChannel62");

    }

    void setDownlinkMSPChannel63(bool value)
    {
        write("DownlinkMSPChannel63",value);
    }

    bool getDownlinkMSPChannel63(void)

    {
        return getBool("DownlinkMSPChannel63");
    }

    bool isDownlinkMSPChannel63Valid(void)
    {
        return isValid("DownlinkMSPChannel63");

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