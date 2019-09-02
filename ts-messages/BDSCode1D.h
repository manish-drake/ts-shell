#ifndef __BDSCode1D_h
#define __BDSCode1D_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1D:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x15;
    CBDSCode1D(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1D(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setUplinkMSPChannel1(bool value)
    {
        write("UplinkMSPChannel1",value);
    }

    bool getUplinkMSPChannel1(void)

    {
        return getBool("UplinkMSPChannel1");
    }

    bool isUplinkMSPChannel1Valid(void)
    {
        return isValid("UplinkMSPChannel1");

    }

    void setUplinkMSPChannel2(bool value)
    {
        write("UplinkMSPChannel2",value);
    }

    bool getUplinkMSPChannel2(void)

    {
        return getBool("UplinkMSPChannel2");
    }

    bool isUplinkMSPChannel2Valid(void)
    {
        return isValid("UplinkMSPChannel2");

    }

    void setUplinkMSPChannel3(bool value)
    {
        write("UplinkMSPChannel3",value);
    }

    bool getUplinkMSPChannel3(void)

    {
        return getBool("UplinkMSPChannel3");
    }

    bool isUplinkMSPChannel3Valid(void)
    {
        return isValid("UplinkMSPChannel3");

    }

    void setUplinkMSPChannel4(bool value)
    {
        write("UplinkMSPChannel4",value);
    }

    bool getUplinkMSPChannel4(void)

    {
        return getBool("UplinkMSPChannel4");
    }

    bool isUplinkMSPChannel4Valid(void)
    {
        return isValid("UplinkMSPChannel4");

    }

    void setUplinkMSPChannel5(bool value)
    {
        write("UplinkMSPChannel5",value);
    }

    bool getUplinkMSPChannel5(void)

    {
        return getBool("UplinkMSPChannel5");
    }

    bool isUplinkMSPChannel5Valid(void)
    {
        return isValid("UplinkMSPChannel5");

    }

    void setUplinkMSPChannel6(bool value)
    {
        write("UplinkMSPChannel6",value);
    }

    bool getUplinkMSPChannel6(void)

    {
        return getBool("UplinkMSPChannel6");
    }

    bool isUplinkMSPChannel6Valid(void)
    {
        return isValid("UplinkMSPChannel6");

    }

    void setUplinkMSPChannel7(bool value)
    {
        write("UplinkMSPChannel7",value);
    }

    bool getUplinkMSPChannel7(void)

    {
        return getBool("UplinkMSPChannel7");
    }

    bool isUplinkMSPChannel7Valid(void)
    {
        return isValid("UplinkMSPChannel7");

    }

    void setUplinkMSPChannel8(bool value)
    {
        write("UplinkMSPChannel8",value);
    }

    bool getUplinkMSPChannel8(void)

    {
        return getBool("UplinkMSPChannel8");
    }

    bool isUplinkMSPChannel8Valid(void)
    {
        return isValid("UplinkMSPChannel8");

    }

    void setUplinkMSPChannel9(bool value)
    {
        write("UplinkMSPChannel9",value);
    }

    bool getUplinkMSPChannel9(void)

    {
        return getBool("UplinkMSPChannel9");
    }

    bool isUplinkMSPChannel9Valid(void)
    {
        return isValid("UplinkMSPChannel9");

    }

    void setUplinkMSPChannel10(bool value)
    {
        write("UplinkMSPChannel10",value);
    }

    bool getUplinkMSPChannel10(void)

    {
        return getBool("UplinkMSPChannel10");
    }

    bool isUplinkMSPChannel10Valid(void)
    {
        return isValid("UplinkMSPChannel10");

    }

    void setUplinkMSPChannel11(bool value)
    {
        write("UplinkMSPChannel11",value);
    }

    bool getUplinkMSPChannel11(void)

    {
        return getBool("UplinkMSPChannel11");
    }

    bool isUplinkMSPChannel11Valid(void)
    {
        return isValid("UplinkMSPChannel11");

    }

    void setUplinkMSPChannel12(bool value)
    {
        write("UplinkMSPChannel12",value);
    }

    bool getUplinkMSPChannel12(void)

    {
        return getBool("UplinkMSPChannel12");
    }

    bool isUplinkMSPChannel12Valid(void)
    {
        return isValid("UplinkMSPChannel12");

    }

    void setUplinkMSPChannel13(bool value)
    {
        write("UplinkMSPChannel13",value);
    }

    bool getUplinkMSPChannel13(void)

    {
        return getBool("UplinkMSPChannel13");
    }

    bool isUplinkMSPChannel13Valid(void)
    {
        return isValid("UplinkMSPChannel13");

    }

    void setUplinkMSPChannel14(bool value)
    {
        write("UplinkMSPChannel14",value);
    }

    bool getUplinkMSPChannel14(void)

    {
        return getBool("UplinkMSPChannel14");
    }

    bool isUplinkMSPChannel14Valid(void)
    {
        return isValid("UplinkMSPChannel14");

    }

    void setUplinkMSPChannel15(bool value)
    {
        write("UplinkMSPChannel15",value);
    }

    bool getUplinkMSPChannel15(void)

    {
        return getBool("UplinkMSPChannel15");
    }

    bool isUplinkMSPChannel15Valid(void)
    {
        return isValid("UplinkMSPChannel15");

    }

    void setUplinkMSPChannel16(bool value)
    {
        write("UplinkMSPChannel16",value);
    }

    bool getUplinkMSPChannel16(void)

    {
        return getBool("UplinkMSPChannel16");
    }

    bool isUplinkMSPChannel16Valid(void)
    {
        return isValid("UplinkMSPChannel16");

    }

    void setUplinkMSPChannel17(bool value)
    {
        write("UplinkMSPChannel17",value);
    }

    bool getUplinkMSPChannel17(void)

    {
        return getBool("UplinkMSPChannel17");
    }

    bool isUplinkMSPChannel17Valid(void)
    {
        return isValid("UplinkMSPChannel17");

    }

    void setUplinkMSPChannel18(bool value)
    {
        write("UplinkMSPChannel18",value);
    }

    bool getUplinkMSPChannel18(void)

    {
        return getBool("UplinkMSPChannel18");
    }

    bool isUplinkMSPChannel18Valid(void)
    {
        return isValid("UplinkMSPChannel18");

    }

    void setUplinkMSPChannel19(bool value)
    {
        write("UplinkMSPChannel19",value);
    }

    bool getUplinkMSPChannel19(void)

    {
        return getBool("UplinkMSPChannel19");
    }

    bool isUplinkMSPChannel19Valid(void)
    {
        return isValid("UplinkMSPChannel19");

    }

    void setUplinkMSPChannel20(bool value)
    {
        write("UplinkMSPChannel20",value);
    }

    bool getUplinkMSPChannel20(void)

    {
        return getBool("UplinkMSPChannel20");
    }

    bool isUplinkMSPChannel20Valid(void)
    {
        return isValid("UplinkMSPChannel20");

    }

    void setUplinkMSPChannel21(bool value)
    {
        write("UplinkMSPChannel21",value);
    }

    bool getUplinkMSPChannel21(void)

    {
        return getBool("UplinkMSPChannel21");
    }

    bool isUplinkMSPChannel21Valid(void)
    {
        return isValid("UplinkMSPChannel21");

    }

    void setUplinkMSPChannel22(bool value)
    {
        write("UplinkMSPChannel22",value);
    }

    bool getUplinkMSPChannel22(void)

    {
        return getBool("UplinkMSPChannel22");
    }

    bool isUplinkMSPChannel22Valid(void)
    {
        return isValid("UplinkMSPChannel22");

    }

    void setUplinkMSPChannel23(bool value)
    {
        write("UplinkMSPChannel23",value);
    }

    bool getUplinkMSPChannel23(void)

    {
        return getBool("UplinkMSPChannel23");
    }

    bool isUplinkMSPChannel23Valid(void)
    {
        return isValid("UplinkMSPChannel23");

    }

    void setUplinkMSPChannel24(bool value)
    {
        write("UplinkMSPChannel24",value);
    }

    bool getUplinkMSPChannel24(void)

    {
        return getBool("UplinkMSPChannel24");
    }

    bool isUplinkMSPChannel24Valid(void)
    {
        return isValid("UplinkMSPChannel24");

    }

    void setUplinkMSPChannel25(bool value)
    {
        write("UplinkMSPChannel25",value);
    }

    bool getUplinkMSPChannel25(void)

    {
        return getBool("UplinkMSPChannel25");
    }

    bool isUplinkMSPChannel25Valid(void)
    {
        return isValid("UplinkMSPChannel25");

    }

    void setUplinkMSPChannel26(bool value)
    {
        write("UplinkMSPChannel26",value);
    }

    bool getUplinkMSPChannel26(void)

    {
        return getBool("UplinkMSPChannel26");
    }

    bool isUplinkMSPChannel26Valid(void)
    {
        return isValid("UplinkMSPChannel26");

    }

    void setUplinkMSPChannel27(bool value)
    {
        write("UplinkMSPChannel27",value);
    }

    bool getUplinkMSPChannel27(void)

    {
        return getBool("UplinkMSPChannel27");
    }

    bool isUplinkMSPChannel27Valid(void)
    {
        return isValid("UplinkMSPChannel27");

    }

    void setUplinkMSPChannel28(bool value)
    {
        write("UplinkMSPChannel28",value);
    }

    bool getUplinkMSPChannel28(void)

    {
        return getBool("UplinkMSPChannel28");
    }

    bool isUplinkMSPChannel28Valid(void)
    {
        return isValid("UplinkMSPChannel28");

    }

    void setDownlinkMSPChannel1(bool value)
    {
        write("DownlinkMSPChannel1",value);
    }

    bool getDownlinkMSPChannel1(void)

    {
        return getBool("DownlinkMSPChannel1");
    }

    bool isDownlinkMSPChannel1Valid(void)
    {
        return isValid("DownlinkMSPChannel1");

    }

    void setDownlinkMSPChannel2(bool value)
    {
        write("DownlinkMSPChannel2",value);
    }

    bool getDownlinkMSPChannel2(void)

    {
        return getBool("DownlinkMSPChannel2");
    }

    bool isDownlinkMSPChannel2Valid(void)
    {
        return isValid("DownlinkMSPChannel2");

    }

    void setDownlinkMSPChannel3(bool value)
    {
        write("DownlinkMSPChannel3",value);
    }

    bool getDownlinkMSPChannel3(void)

    {
        return getBool("DownlinkMSPChannel3");
    }

    bool isDownlinkMSPChannel3Valid(void)
    {
        return isValid("DownlinkMSPChannel3");

    }

    void setDownlinkMSPChannel4(bool value)
    {
        write("DownlinkMSPChannel4",value);
    }

    bool getDownlinkMSPChannel4(void)

    {
        return getBool("DownlinkMSPChannel4");
    }

    bool isDownlinkMSPChannel4Valid(void)
    {
        return isValid("DownlinkMSPChannel4");

    }

    void setDownlinkMSPChannel5(bool value)
    {
        write("DownlinkMSPChannel5",value);
    }

    bool getDownlinkMSPChannel5(void)

    {
        return getBool("DownlinkMSPChannel5");
    }

    bool isDownlinkMSPChannel5Valid(void)
    {
        return isValid("DownlinkMSPChannel5");

    }

    void setDownlinkMSPChannel6(bool value)
    {
        write("DownlinkMSPChannel6",value);
    }

    bool getDownlinkMSPChannel6(void)

    {
        return getBool("DownlinkMSPChannel6");
    }

    bool isDownlinkMSPChannel6Valid(void)
    {
        return isValid("DownlinkMSPChannel6");

    }

    void setDownlinkMSPChannel7(bool value)
    {
        write("DownlinkMSPChannel7",value);
    }

    bool getDownlinkMSPChannel7(void)

    {
        return getBool("DownlinkMSPChannel7");
    }

    bool isDownlinkMSPChannel7Valid(void)
    {
        return isValid("DownlinkMSPChannel7");

    }

    void setDownlinkMSPChannel8(bool value)
    {
        write("DownlinkMSPChannel8",value);
    }

    bool getDownlinkMSPChannel8(void)

    {
        return getBool("DownlinkMSPChannel8");
    }

    bool isDownlinkMSPChannel8Valid(void)
    {
        return isValid("DownlinkMSPChannel8");

    }

    void setDownlinkMSPChannel9(bool value)
    {
        write("DownlinkMSPChannel9",value);
    }

    bool getDownlinkMSPChannel9(void)

    {
        return getBool("DownlinkMSPChannel9");
    }

    bool isDownlinkMSPChannel9Valid(void)
    {
        return isValid("DownlinkMSPChannel9");

    }

    void setDownlinkMSPChannel10(bool value)
    {
        write("DownlinkMSPChannel10",value);
    }

    bool getDownlinkMSPChannel10(void)

    {
        return getBool("DownlinkMSPChannel10");
    }

    bool isDownlinkMSPChannel10Valid(void)
    {
        return isValid("DownlinkMSPChannel10");

    }

    void setDownlinkMSPChannel11(bool value)
    {
        write("DownlinkMSPChannel11",value);
    }

    bool getDownlinkMSPChannel11(void)

    {
        return getBool("DownlinkMSPChannel11");
    }

    bool isDownlinkMSPChannel11Valid(void)
    {
        return isValid("DownlinkMSPChannel11");

    }

    void setDownlinkMSPChannel12(bool value)
    {
        write("DownlinkMSPChannel12",value);
    }

    bool getDownlinkMSPChannel12(void)

    {
        return getBool("DownlinkMSPChannel12");
    }

    bool isDownlinkMSPChannel12Valid(void)
    {
        return isValid("DownlinkMSPChannel12");

    }

    void setDownlinkMSPChannel13(bool value)
    {
        write("DownlinkMSPChannel13",value);
    }

    bool getDownlinkMSPChannel13(void)

    {
        return getBool("DownlinkMSPChannel13");
    }

    bool isDownlinkMSPChannel13Valid(void)
    {
        return isValid("DownlinkMSPChannel13");

    }

    void setDownlinkMSPChannel14(bool value)
    {
        write("DownlinkMSPChannel14",value);
    }

    bool getDownlinkMSPChannel14(void)

    {
        return getBool("DownlinkMSPChannel14");
    }

    bool isDownlinkMSPChannel14Valid(void)
    {
        return isValid("DownlinkMSPChannel14");

    }

    void setDownlinkMSPChannel15(bool value)
    {
        write("DownlinkMSPChannel15",value);
    }

    bool getDownlinkMSPChannel15(void)

    {
        return getBool("DownlinkMSPChannel15");
    }

    bool isDownlinkMSPChannel15Valid(void)
    {
        return isValid("DownlinkMSPChannel15");

    }

    void setDownlinkMSPChannel16(bool value)
    {
        write("DownlinkMSPChannel16",value);
    }

    bool getDownlinkMSPChannel16(void)

    {
        return getBool("DownlinkMSPChannel16");
    }

    bool isDownlinkMSPChannel16Valid(void)
    {
        return isValid("DownlinkMSPChannel16");

    }

    void setDownlinkMSPChannel17(bool value)
    {
        write("DownlinkMSPChannel17",value);
    }

    bool getDownlinkMSPChannel17(void)

    {
        return getBool("DownlinkMSPChannel17");
    }

    bool isDownlinkMSPChannel17Valid(void)
    {
        return isValid("DownlinkMSPChannel17");

    }

    void setDownlinkMSPChannel18(bool value)
    {
        write("DownlinkMSPChannel18",value);
    }

    bool getDownlinkMSPChannel18(void)

    {
        return getBool("DownlinkMSPChannel18");
    }

    bool isDownlinkMSPChannel18Valid(void)
    {
        return isValid("DownlinkMSPChannel18");

    }

    void setDownlinkMSPChannel19(bool value)
    {
        write("DownlinkMSPChannel19",value);
    }

    bool getDownlinkMSPChannel19(void)

    {
        return getBool("DownlinkMSPChannel19");
    }

    bool isDownlinkMSPChannel19Valid(void)
    {
        return isValid("DownlinkMSPChannel19");

    }

    void setDownlinkMSPChannel20(bool value)
    {
        write("DownlinkMSPChannel20",value);
    }

    bool getDownlinkMSPChannel20(void)

    {
        return getBool("DownlinkMSPChannel20");
    }

    bool isDownlinkMSPChannel20Valid(void)
    {
        return isValid("DownlinkMSPChannel20");

    }

    void setDownlinkMSPChannel21(bool value)
    {
        write("DownlinkMSPChannel21",value);
    }

    bool getDownlinkMSPChannel21(void)

    {
        return getBool("DownlinkMSPChannel21");
    }

    bool isDownlinkMSPChannel21Valid(void)
    {
        return isValid("DownlinkMSPChannel21");

    }

    void setDownlinkMSPChannel22(bool value)
    {
        write("DownlinkMSPChannel22",value);
    }

    bool getDownlinkMSPChannel22(void)

    {
        return getBool("DownlinkMSPChannel22");
    }

    bool isDownlinkMSPChannel22Valid(void)
    {
        return isValid("DownlinkMSPChannel22");

    }

    void setDownlinkMSPChannel23(bool value)
    {
        write("DownlinkMSPChannel23",value);
    }

    bool getDownlinkMSPChannel23(void)

    {
        return getBool("DownlinkMSPChannel23");
    }

    bool isDownlinkMSPChannel23Valid(void)
    {
        return isValid("DownlinkMSPChannel23");

    }

    void setDownlinkMSPChannel24(bool value)
    {
        write("DownlinkMSPChannel24",value);
    }

    bool getDownlinkMSPChannel24(void)

    {
        return getBool("DownlinkMSPChannel24");
    }

    bool isDownlinkMSPChannel24Valid(void)
    {
        return isValid("DownlinkMSPChannel24");

    }

    void setDownlinkMSPChannel25(bool value)
    {
        write("DownlinkMSPChannel25",value);
    }

    bool getDownlinkMSPChannel25(void)

    {
        return getBool("DownlinkMSPChannel25");
    }

    bool isDownlinkMSPChannel25Valid(void)
    {
        return isValid("DownlinkMSPChannel25");

    }

    void setDownlinkMSPChannel26(bool value)
    {
        write("DownlinkMSPChannel26",value);
    }

    bool getDownlinkMSPChannel26(void)

    {
        return getBool("DownlinkMSPChannel26");
    }

    bool isDownlinkMSPChannel26Valid(void)
    {
        return isValid("DownlinkMSPChannel26");

    }

    void setDownlinkMSPChannel27(bool value)
    {
        write("DownlinkMSPChannel27",value);
    }

    bool getDownlinkMSPChannel27(void)

    {
        return getBool("DownlinkMSPChannel27");
    }

    bool isDownlinkMSPChannel27Valid(void)
    {
        return isValid("DownlinkMSPChannel27");

    }

    void setDownlinkMSPChannel28(bool value)
    {
        write("DownlinkMSPChannel28",value);
    }

    bool getDownlinkMSPChannel28(void)

    {
        return getBool("DownlinkMSPChannel28");
    }

    bool isDownlinkMSPChannel28Valid(void)
    {
        return isValid("DownlinkMSPChannel28");

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