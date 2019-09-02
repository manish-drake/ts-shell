#ifndef __BDSCode48_h
#define __BDSCode48_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode48:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x23;
    CBDSCode48(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode48(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setVHF1Freq(float value)
    {
        write("VHF1Freq",value);
    }

    float getVHF1Freq(void)

    {
        return getFloat("VHF1Freq");
    }

    bool isVHF1FreqValid(void)
    {
        return isValid("VHF1Freq");

    }

    void setVHF1Status(bool value)
    {
        write("VHF1Status",value);
    }

    bool getVHF1Status(void)

    {
        return getBool("VHF1Status");
    }

    bool isVHF1StatusValid(void)
    {
        return isValid("VHF1Status");

    }

    void setVHF1AudioStatus(unsigned int value)
    {
        write("VHF1AudioStatus",value);
    }

    unsigned int getVHF1AudioStatus(void)

    {
        return getUInt("VHF1AudioStatus");
    }

    bool isVHF1AudioStatusValid(void)
    {
        return isValid("VHF1AudioStatus");

    }

    void setVHF2Freq(float value)
    {
        write("VHF2Freq",value);
    }

    float getVHF2Freq(void)

    {
        return getFloat("VHF2Freq");
    }

    bool isVHF2FreqValid(void)
    {
        return isValid("VHF2Freq");

    }

    void setVHF2Status(bool value)
    {
        write("VHF2Status",value);
    }

    bool getVHF2Status(void)

    {
        return getBool("VHF2Status");
    }

    bool isVHF2StatusValid(void)
    {
        return isValid("VHF2Status");

    }

    void setVHF2AudioStatus(unsigned int value)
    {
        write("VHF2AudioStatus",value);
    }

    unsigned int getVHF2AudioStatus(void)

    {
        return getUInt("VHF2AudioStatus");
    }

    bool isVHF2AudioStatusValid(void)
    {
        return isValid("VHF2AudioStatus");

    }

    void setVHF3Freq(float value)
    {
        write("VHF3Freq",value);
    }

    float getVHF3Freq(void)

    {
        return getFloat("VHF3Freq");
    }

    bool isVHF3FreqValid(void)
    {
        return isValid("VHF3Freq");

    }

    void setVHF3Status(bool value)
    {
        write("VHF3Status",value);
    }

    bool getVHF3Status(void)

    {
        return getBool("VHF3Status");
    }

    bool isVHF3StatusValid(void)
    {
        return isValid("VHF3Status");

    }

    void setVHF3AudioStatus(unsigned int value)
    {
        write("VHF3AudioStatus",value);
    }

    unsigned int getVHF3AudioStatus(void)

    {
        return getUInt("VHF3AudioStatus");
    }

    bool isVHF3AudioStatusValid(void)
    {
        return isValid("VHF3AudioStatus");

    }

    void set121_5MHzAudioStatus(unsigned int value)
    {
        write("121_5MHzAudioStatus",value);
    }

    unsigned int get121_5MHzAudioStatus(void)

    {
        return getUInt("121_5MHzAudioStatus");
    }

    bool is121_5MHzAudioStatusValid(void)
    {
        return isValid("121_5MHzAudioStatus");

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