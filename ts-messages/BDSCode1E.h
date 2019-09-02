#ifndef __BDSCode1E_h
#define __BDSCode1E_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1E:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x16;
    CBDSCode1E(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1E(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setUplinkMSPChannel29(bool value)
    {
        write("UplinkMSPChannel29",value);
    }

    bool getUplinkMSPChannel29(void)

    {
        return getBool("UplinkMSPChannel29");
    }

    bool isUplinkMSPChannel29Valid(void)
    {
        return isValid("UplinkMSPChannel29");

    }

    void setUplinkMSPChannel30(bool value)
    {
        write("UplinkMSPChannel30",value);
    }

    bool getUplinkMSPChannel30(void)

    {
        return getBool("UplinkMSPChannel30");
    }

    bool isUplinkMSPChannel30Valid(void)
    {
        return isValid("UplinkMSPChannel30");

    }

    void setUplinkMSPChannel31(bool value)
    {
        write("UplinkMSPChannel31",value);
    }

    bool getUplinkMSPChannel31(void)

    {
        return getBool("UplinkMSPChannel31");
    }

    bool isUplinkMSPChannel31Valid(void)
    {
        return isValid("UplinkMSPChannel31");

    }

    void setUplinkMSPChannel32(bool value)
    {
        write("UplinkMSPChannel32",value);
    }

    bool getUplinkMSPChannel32(void)

    {
        return getBool("UplinkMSPChannel32");
    }

    bool isUplinkMSPChannel32Valid(void)
    {
        return isValid("UplinkMSPChannel32");

    }

    void setUplinkMSPChannel33(bool value)
    {
        write("UplinkMSPChannel33",value);
    }

    bool getUplinkMSPChannel33(void)

    {
        return getBool("UplinkMSPChannel33");
    }

    bool isUplinkMSPChannel33Valid(void)
    {
        return isValid("UplinkMSPChannel33");

    }

    void setUplinkMSPChannel34(bool value)
    {
        write("UplinkMSPChannel34",value);
    }

    bool getUplinkMSPChannel34(void)

    {
        return getBool("UplinkMSPChannel34");
    }

    bool isUplinkMSPChannel34Valid(void)
    {
        return isValid("UplinkMSPChannel34");

    }

    void setUplinkMSPChannel35(bool value)
    {
        write("UplinkMSPChannel35",value);
    }

    bool getUplinkMSPChannel35(void)

    {
        return getBool("UplinkMSPChannel35");
    }

    bool isUplinkMSPChannel35Valid(void)
    {
        return isValid("UplinkMSPChannel35");

    }

    void setUplinkMSPChannel36(bool value)
    {
        write("UplinkMSPChannel36",value);
    }

    bool getUplinkMSPChannel36(void)

    {
        return getBool("UplinkMSPChannel36");
    }

    bool isUplinkMSPChannel36Valid(void)
    {
        return isValid("UplinkMSPChannel36");

    }

    void setUplinkMSPChannel37(bool value)
    {
        write("UplinkMSPChannel37",value);
    }

    bool getUplinkMSPChannel37(void)

    {
        return getBool("UplinkMSPChannel37");
    }

    bool isUplinkMSPChannel37Valid(void)
    {
        return isValid("UplinkMSPChannel37");

    }

    void setUplinkMSPChannel38(bool value)
    {
        write("UplinkMSPChannel38",value);
    }

    bool getUplinkMSPChannel38(void)

    {
        return getBool("UplinkMSPChannel38");
    }

    bool isUplinkMSPChannel38Valid(void)
    {
        return isValid("UplinkMSPChannel38");

    }

    void setUplinkMSPChannel39(bool value)
    {
        write("UplinkMSPChannel39",value);
    }

    bool getUplinkMSPChannel39(void)

    {
        return getBool("UplinkMSPChannel39");
    }

    bool isUplinkMSPChannel39Valid(void)
    {
        return isValid("UplinkMSPChannel39");

    }

    void setUplinkMSPChannel40(bool value)
    {
        write("UplinkMSPChannel40",value);
    }

    bool getUplinkMSPChannel40(void)

    {
        return getBool("UplinkMSPChannel40");
    }

    bool isUplinkMSPChannel40Valid(void)
    {
        return isValid("UplinkMSPChannel40");

    }

    void setUplinkMSPChannel41(bool value)
    {
        write("UplinkMSPChannel41",value);
    }

    bool getUplinkMSPChannel41(void)

    {
        return getBool("UplinkMSPChannel41");
    }

    bool isUplinkMSPChannel41Valid(void)
    {
        return isValid("UplinkMSPChannel41");

    }

    void setUplinkMSPChannel42(bool value)
    {
        write("UplinkMSPChannel42",value);
    }

    bool getUplinkMSPChannel42(void)

    {
        return getBool("UplinkMSPChannel42");
    }

    bool isUplinkMSPChannel42Valid(void)
    {
        return isValid("UplinkMSPChannel42");

    }

    void setUplinkMSPChannel43(bool value)
    {
        write("UplinkMSPChannel43",value);
    }

    bool getUplinkMSPChannel43(void)

    {
        return getBool("UplinkMSPChannel43");
    }

    bool isUplinkMSPChannel43Valid(void)
    {
        return isValid("UplinkMSPChannel43");

    }

    void setUplinkMSPChannel44(bool value)
    {
        write("UplinkMSPChannel44",value);
    }

    bool getUplinkMSPChannel44(void)

    {
        return getBool("UplinkMSPChannel44");
    }

    bool isUplinkMSPChannel44Valid(void)
    {
        return isValid("UplinkMSPChannel44");

    }

    void setUplinkMSPChannel45(bool value)
    {
        write("UplinkMSPChannel45",value);
    }

    bool getUplinkMSPChannel45(void)

    {
        return getBool("UplinkMSPChannel45");
    }

    bool isUplinkMSPChannel45Valid(void)
    {
        return isValid("UplinkMSPChannel45");

    }

    void setUplinkMSPChannel46(bool value)
    {
        write("UplinkMSPChannel46",value);
    }

    bool getUplinkMSPChannel46(void)

    {
        return getBool("UplinkMSPChannel46");
    }

    bool isUplinkMSPChannel46Valid(void)
    {
        return isValid("UplinkMSPChannel46");

    }

    void setUplinkMSPChannel47(bool value)
    {
        write("UplinkMSPChannel47",value);
    }

    bool getUplinkMSPChannel47(void)

    {
        return getBool("UplinkMSPChannel47");
    }

    bool isUplinkMSPChannel47Valid(void)
    {
        return isValid("UplinkMSPChannel47");

    }

    void setUplinkMSPChannel48(bool value)
    {
        write("UplinkMSPChannel48",value);
    }

    bool getUplinkMSPChannel48(void)

    {
        return getBool("UplinkMSPChannel48");
    }

    bool isUplinkMSPChannel48Valid(void)
    {
        return isValid("UplinkMSPChannel48");

    }

    void setUplinkMSPChannel49(bool value)
    {
        write("UplinkMSPChannel49",value);
    }

    bool getUplinkMSPChannel49(void)

    {
        return getBool("UplinkMSPChannel49");
    }

    bool isUplinkMSPChannel49Valid(void)
    {
        return isValid("UplinkMSPChannel49");

    }

    void setUplinkMSPChannel50(bool value)
    {
        write("UplinkMSPChannel50",value);
    }

    bool getUplinkMSPChannel50(void)

    {
        return getBool("UplinkMSPChannel50");
    }

    bool isUplinkMSPChannel50Valid(void)
    {
        return isValid("UplinkMSPChannel50");

    }

    void setUplinkMSPChannel51(bool value)
    {
        write("UplinkMSPChannel51",value);
    }

    bool getUplinkMSPChannel51(void)

    {
        return getBool("UplinkMSPChannel51");
    }

    bool isUplinkMSPChannel51Valid(void)
    {
        return isValid("UplinkMSPChannel51");

    }

    void setUplinkMSPChannel52(bool value)
    {
        write("UplinkMSPChannel52",value);
    }

    bool getUplinkMSPChannel52(void)

    {
        return getBool("UplinkMSPChannel52");
    }

    bool isUplinkMSPChannel52Valid(void)
    {
        return isValid("UplinkMSPChannel52");

    }

    void setUplinkMSPChannel53(bool value)
    {
        write("UplinkMSPChannel53",value);
    }

    bool getUplinkMSPChannel53(void)

    {
        return getBool("UplinkMSPChannel53");
    }

    bool isUplinkMSPChannel53Valid(void)
    {
        return isValid("UplinkMSPChannel53");

    }

    void setUplinkMSPChannel54(bool value)
    {
        write("UplinkMSPChannel54",value);
    }

    bool getUplinkMSPChannel54(void)

    {
        return getBool("UplinkMSPChannel54");
    }

    bool isUplinkMSPChannel54Valid(void)
    {
        return isValid("UplinkMSPChannel54");

    }

    void setUplinkMSPChannel55(bool value)
    {
        write("UplinkMSPChannel55",value);
    }

    bool getUplinkMSPChannel55(void)

    {
        return getBool("UplinkMSPChannel55");
    }

    bool isUplinkMSPChannel55Valid(void)
    {
        return isValid("UplinkMSPChannel55");

    }

    void setUplinkMSPChannel56(bool value)
    {
        write("UplinkMSPChannel56",value);
    }

    bool getUplinkMSPChannel56(void)

    {
        return getBool("UplinkMSPChannel56");
    }

    bool isUplinkMSPChannel56Valid(void)
    {
        return isValid("UplinkMSPChannel56");

    }

    void setDownlinkMSPChannel29(bool value)
    {
        write("DownlinkMSPChannel29",value);
    }

    bool getDownlinkMSPChannel29(void)

    {
        return getBool("DownlinkMSPChannel29");
    }

    bool isDownlinkMSPChannel29Valid(void)
    {
        return isValid("DownlinkMSPChannel29");

    }

    void setDownlinkMSPChannel30(bool value)
    {
        write("DownlinkMSPChannel30",value);
    }

    bool getDownlinkMSPChannel30(void)

    {
        return getBool("DownlinkMSPChannel30");
    }

    bool isDownlinkMSPChannel30Valid(void)
    {
        return isValid("DownlinkMSPChannel30");

    }

    void setDownlinkMSPChannel31(bool value)
    {
        write("DownlinkMSPChannel31",value);
    }

    bool getDownlinkMSPChannel31(void)

    {
        return getBool("DownlinkMSPChannel31");
    }

    bool isDownlinkMSPChannel31Valid(void)
    {
        return isValid("DownlinkMSPChannel31");

    }

    void setDownlinkMSPChannel32(bool value)
    {
        write("DownlinkMSPChannel32",value);
    }

    bool getDownlinkMSPChannel32(void)

    {
        return getBool("DownlinkMSPChannel32");
    }

    bool isDownlinkMSPChannel32Valid(void)
    {
        return isValid("DownlinkMSPChannel32");

    }

    void setDownlinkMSPChannel33(bool value)
    {
        write("DownlinkMSPChannel33",value);
    }

    bool getDownlinkMSPChannel33(void)

    {
        return getBool("DownlinkMSPChannel33");
    }

    bool isDownlinkMSPChannel33Valid(void)
    {
        return isValid("DownlinkMSPChannel33");

    }

    void setDownlinkMSPChannel34(bool value)
    {
        write("DownlinkMSPChannel34",value);
    }

    bool getDownlinkMSPChannel34(void)

    {
        return getBool("DownlinkMSPChannel34");
    }

    bool isDownlinkMSPChannel34Valid(void)
    {
        return isValid("DownlinkMSPChannel34");

    }

    void setDownlinkMSPChannel35(bool value)
    {
        write("DownlinkMSPChannel35",value);
    }

    bool getDownlinkMSPChannel35(void)

    {
        return getBool("DownlinkMSPChannel35");
    }

    bool isDownlinkMSPChannel35Valid(void)
    {
        return isValid("DownlinkMSPChannel35");

    }

    void setDownlinkMSPChannel36(bool value)
    {
        write("DownlinkMSPChannel36",value);
    }

    bool getDownlinkMSPChannel36(void)

    {
        return getBool("DownlinkMSPChannel36");
    }

    bool isDownlinkMSPChannel36Valid(void)
    {
        return isValid("DownlinkMSPChannel36");

    }

    void setDownlinkMSPChannel37(bool value)
    {
        write("DownlinkMSPChannel37",value);
    }

    bool getDownlinkMSPChannel37(void)

    {
        return getBool("DownlinkMSPChannel37");
    }

    bool isDownlinkMSPChannel37Valid(void)
    {
        return isValid("DownlinkMSPChannel37");

    }

    void setDownlinkMSPChannel38(bool value)
    {
        write("DownlinkMSPChannel38",value);
    }

    bool getDownlinkMSPChannel38(void)

    {
        return getBool("DownlinkMSPChannel38");
    }

    bool isDownlinkMSPChannel38Valid(void)
    {
        return isValid("DownlinkMSPChannel38");

    }

    void setDownlinkMSPChannel39(bool value)
    {
        write("DownlinkMSPChannel39",value);
    }

    bool getDownlinkMSPChannel39(void)

    {
        return getBool("DownlinkMSPChannel39");
    }

    bool isDownlinkMSPChannel39Valid(void)
    {
        return isValid("DownlinkMSPChannel39");

    }

    void setDownlinkMSPChannel40(bool value)
    {
        write("DownlinkMSPChannel40",value);
    }

    bool getDownlinkMSPChannel40(void)

    {
        return getBool("DownlinkMSPChannel40");
    }

    bool isDownlinkMSPChannel40Valid(void)
    {
        return isValid("DownlinkMSPChannel40");

    }

    void setDownlinkMSPChannel41(bool value)
    {
        write("DownlinkMSPChannel41",value);
    }

    bool getDownlinkMSPChannel41(void)

    {
        return getBool("DownlinkMSPChannel41");
    }

    bool isDownlinkMSPChannel41Valid(void)
    {
        return isValid("DownlinkMSPChannel41");

    }

    void setDownlinkMSPChannel42(bool value)
    {
        write("DownlinkMSPChannel42",value);
    }

    bool getDownlinkMSPChannel42(void)

    {
        return getBool("DownlinkMSPChannel42");
    }

    bool isDownlinkMSPChannel42Valid(void)
    {
        return isValid("DownlinkMSPChannel42");

    }

    void setDownlinkMSPChannel43(bool value)
    {
        write("DownlinkMSPChannel43",value);
    }

    bool getDownlinkMSPChannel43(void)

    {
        return getBool("DownlinkMSPChannel43");
    }

    bool isDownlinkMSPChannel43Valid(void)
    {
        return isValid("DownlinkMSPChannel43");

    }

    void setDownlinkMSPChannel44(bool value)
    {
        write("DownlinkMSPChannel44",value);
    }

    bool getDownlinkMSPChannel44(void)

    {
        return getBool("DownlinkMSPChannel44");
    }

    bool isDownlinkMSPChannel44Valid(void)
    {
        return isValid("DownlinkMSPChannel44");

    }

    void setDownlinkMSPChannel45(bool value)
    {
        write("DownlinkMSPChannel45",value);
    }

    bool getDownlinkMSPChannel45(void)

    {
        return getBool("DownlinkMSPChannel45");
    }

    bool isDownlinkMSPChannel45Valid(void)
    {
        return isValid("DownlinkMSPChannel45");

    }

    void setDownlinkMSPChannel46(bool value)
    {
        write("DownlinkMSPChannel46",value);
    }

    bool getDownlinkMSPChannel46(void)

    {
        return getBool("DownlinkMSPChannel46");
    }

    bool isDownlinkMSPChannel46Valid(void)
    {
        return isValid("DownlinkMSPChannel46");

    }

    void setDownlinkMSPChannel47(bool value)
    {
        write("DownlinkMSPChannel47",value);
    }

    bool getDownlinkMSPChannel47(void)

    {
        return getBool("DownlinkMSPChannel47");
    }

    bool isDownlinkMSPChannel47Valid(void)
    {
        return isValid("DownlinkMSPChannel47");

    }

    void setDownlinkMSPChannel48(bool value)
    {
        write("DownlinkMSPChannel48",value);
    }

    bool getDownlinkMSPChannel48(void)

    {
        return getBool("DownlinkMSPChannel48");
    }

    bool isDownlinkMSPChannel48Valid(void)
    {
        return isValid("DownlinkMSPChannel48");

    }

    void setDownlinkMSPChannel49(bool value)
    {
        write("DownlinkMSPChannel49",value);
    }

    bool getDownlinkMSPChannel49(void)

    {
        return getBool("DownlinkMSPChannel49");
    }

    bool isDownlinkMSPChannel49Valid(void)
    {
        return isValid("DownlinkMSPChannel49");

    }

    void setDownlinkMSPChannel50(bool value)
    {
        write("DownlinkMSPChannel50",value);
    }

    bool getDownlinkMSPChannel50(void)

    {
        return getBool("DownlinkMSPChannel50");
    }

    bool isDownlinkMSPChannel50Valid(void)
    {
        return isValid("DownlinkMSPChannel50");

    }

    void setDownlinkMSPChannel51(bool value)
    {
        write("DownlinkMSPChannel51",value);
    }

    bool getDownlinkMSPChannel51(void)

    {
        return getBool("DownlinkMSPChannel51");
    }

    bool isDownlinkMSPChannel51Valid(void)
    {
        return isValid("DownlinkMSPChannel51");

    }

    void setDownlinkMSPChannel52(bool value)
    {
        write("DownlinkMSPChannel52",value);
    }

    bool getDownlinkMSPChannel52(void)

    {
        return getBool("DownlinkMSPChannel52");
    }

    bool isDownlinkMSPChannel52Valid(void)
    {
        return isValid("DownlinkMSPChannel52");

    }

    void setDownlinkMSPChannel53(bool value)
    {
        write("DownlinkMSPChannel53",value);
    }

    bool getDownlinkMSPChannel53(void)

    {
        return getBool("DownlinkMSPChannel53");
    }

    bool isDownlinkMSPChannel53Valid(void)
    {
        return isValid("DownlinkMSPChannel53");

    }

    void setDownlinkMSPChannel54(bool value)
    {
        write("DownlinkMSPChannel54",value);
    }

    bool getDownlinkMSPChannel54(void)

    {
        return getBool("DownlinkMSPChannel54");
    }

    bool isDownlinkMSPChannel54Valid(void)
    {
        return isValid("DownlinkMSPChannel54");

    }

    void setDownlinkMSPChannel55(bool value)
    {
        write("DownlinkMSPChannel55",value);
    }

    bool getDownlinkMSPChannel55(void)

    {
        return getBool("DownlinkMSPChannel55");
    }

    bool isDownlinkMSPChannel55Valid(void)
    {
        return isValid("DownlinkMSPChannel55");

    }

    void setDownlinkMSPChannel56(bool value)
    {
        write("DownlinkMSPChannel56",value);
    }

    bool getDownlinkMSPChannel56(void)

    {
        return getBool("DownlinkMSPChannel56");
    }

    bool isDownlinkMSPChannel56Valid(void)
    {
        return isValid("DownlinkMSPChannel56");

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