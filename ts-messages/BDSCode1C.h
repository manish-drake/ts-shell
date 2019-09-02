#ifndef __BDSCode1C_h
#define __BDSCode1C_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1C:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x14;
    CBDSCode1C(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1C(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_ff(bool value)
    {
        write("BDS_ff",value);
    }

    bool getBDS_ff(void)

    {
        return getBool("BDS_ff");
    }

    bool isBDS_ffValid(void)
    {
        return isValid("BDS_ff");

    }

    void setBDS_fe(bool value)
    {
        write("BDS_fe",value);
    }

    bool getBDS_fe(void)

    {
        return getBool("BDS_fe");
    }

    bool isBDS_feValid(void)
    {
        return isValid("BDS_fe");

    }

    void setBDS_fd(bool value)
    {
        write("BDS_fd",value);
    }

    bool getBDS_fd(void)

    {
        return getBool("BDS_fd");
    }

    bool isBDS_fdValid(void)
    {
        return isValid("BDS_fd");

    }

    void setBDS_fc(bool value)
    {
        write("BDS_fc",value);
    }

    bool getBDS_fc(void)

    {
        return getBool("BDS_fc");
    }

    bool isBDS_fcValid(void)
    {
        return isValid("BDS_fc");

    }

    void setBDS_fb(bool value)
    {
        write("BDS_fb",value);
    }

    bool getBDS_fb(void)

    {
        return getBool("BDS_fb");
    }

    bool isBDS_fbValid(void)
    {
        return isValid("BDS_fb");

    }

    void setBDS_fa(bool value)
    {
        write("BDS_fa",value);
    }

    bool getBDS_fa(void)

    {
        return getBool("BDS_fa");
    }

    bool isBDS_faValid(void)
    {
        return isValid("BDS_fa");

    }

    void setBDS_f9(bool value)
    {
        write("BDS_f9",value);
    }

    bool getBDS_f9(void)

    {
        return getBool("BDS_f9");
    }

    bool isBDS_f9Valid(void)
    {
        return isValid("BDS_f9");

    }

    void setBDS_f8(bool value)
    {
        write("BDS_f8",value);
    }

    bool getBDS_f8(void)

    {
        return getBool("BDS_f8");
    }

    bool isBDS_f8Valid(void)
    {
        return isValid("BDS_f8");

    }

    void setBDS_f7(bool value)
    {
        write("BDS_f7",value);
    }

    bool getBDS_f7(void)

    {
        return getBool("BDS_f7");
    }

    bool isBDS_f7Valid(void)
    {
        return isValid("BDS_f7");

    }

    void setBDS_f6(bool value)
    {
        write("BDS_f6",value);
    }

    bool getBDS_f6(void)

    {
        return getBool("BDS_f6");
    }

    bool isBDS_f6Valid(void)
    {
        return isValid("BDS_f6");

    }

    void setBDS_f5(bool value)
    {
        write("BDS_f5",value);
    }

    bool getBDS_f5(void)

    {
        return getBool("BDS_f5");
    }

    bool isBDS_f5Valid(void)
    {
        return isValid("BDS_f5");

    }

    void setBDS_f4(bool value)
    {
        write("BDS_f4",value);
    }

    bool getBDS_f4(void)

    {
        return getBool("BDS_f4");
    }

    bool isBDS_f4Valid(void)
    {
        return isValid("BDS_f4");

    }

    void setBDS_f3(bool value)
    {
        write("BDS_f3",value);
    }

    bool getBDS_f3(void)

    {
        return getBool("BDS_f3");
    }

    bool isBDS_f3Valid(void)
    {
        return isValid("BDS_f3");

    }

    void setBDS_f2(bool value)
    {
        write("BDS_f2",value);
    }

    bool getBDS_f2(void)

    {
        return getBool("BDS_f2");
    }

    bool isBDS_f2Valid(void)
    {
        return isValid("BDS_f2");

    }

    void setBDS_f1(bool value)
    {
        write("BDS_f1",value);
    }

    bool getBDS_f1(void)

    {
        return getBool("BDS_f1");
    }

    bool isBDS_f1Valid(void)
    {
        return isValid("BDS_f1");

    }

    void setBDS_f0(bool value)
    {
        write("BDS_f0",value);
    }

    bool getBDS_f0(void)

    {
        return getBool("BDS_f0");
    }

    bool isBDS_f0Valid(void)
    {
        return isValid("BDS_f0");

    }

    void setBDS_ef(bool value)
    {
        write("BDS_ef",value);
    }

    bool getBDS_ef(void)

    {
        return getBool("BDS_ef");
    }

    bool isBDS_efValid(void)
    {
        return isValid("BDS_ef");

    }

    void setBDS_ee(bool value)
    {
        write("BDS_ee",value);
    }

    bool getBDS_ee(void)

    {
        return getBool("BDS_ee");
    }

    bool isBDS_eeValid(void)
    {
        return isValid("BDS_ee");

    }

    void setBDS_ed(bool value)
    {
        write("BDS_ed",value);
    }

    bool getBDS_ed(void)

    {
        return getBool("BDS_ed");
    }

    bool isBDS_edValid(void)
    {
        return isValid("BDS_ed");

    }

    void setBDS_ec(bool value)
    {
        write("BDS_ec",value);
    }

    bool getBDS_ec(void)

    {
        return getBool("BDS_ec");
    }

    bool isBDS_ecValid(void)
    {
        return isValid("BDS_ec");

    }

    void setBDS_eb(bool value)
    {
        write("BDS_eb",value);
    }

    bool getBDS_eb(void)

    {
        return getBool("BDS_eb");
    }

    bool isBDS_ebValid(void)
    {
        return isValid("BDS_eb");

    }

    void setBDS_ea(bool value)
    {
        write("BDS_ea",value);
    }

    bool getBDS_ea(void)

    {
        return getBool("BDS_ea");
    }

    bool isBDS_eaValid(void)
    {
        return isValid("BDS_ea");

    }

    void setBDS_e9(bool value)
    {
        write("BDS_e9",value);
    }

    bool getBDS_e9(void)

    {
        return getBool("BDS_e9");
    }

    bool isBDS_e9Valid(void)
    {
        return isValid("BDS_e9");

    }

    void setBDS_e8(bool value)
    {
        write("BDS_e8",value);
    }

    bool getBDS_e8(void)

    {
        return getBool("BDS_e8");
    }

    bool isBDS_e8Valid(void)
    {
        return isValid("BDS_e8");

    }

    void setBDS_e7(bool value)
    {
        write("BDS_e7",value);
    }

    bool getBDS_e7(void)

    {
        return getBool("BDS_e7");
    }

    bool isBDS_e7Valid(void)
    {
        return isValid("BDS_e7");

    }

    void setBDS_e6(bool value)
    {
        write("BDS_e6",value);
    }

    bool getBDS_e6(void)

    {
        return getBool("BDS_e6");
    }

    bool isBDS_e6Valid(void)
    {
        return isValid("BDS_e6");

    }

    void setBDS_e5(bool value)
    {
        write("BDS_e5",value);
    }

    bool getBDS_e5(void)

    {
        return getBool("BDS_e5");
    }

    bool isBDS_e5Valid(void)
    {
        return isValid("BDS_e5");

    }

    void setBDS_e4(bool value)
    {
        write("BDS_e4",value);
    }

    bool getBDS_e4(void)

    {
        return getBool("BDS_e4");
    }

    bool isBDS_e4Valid(void)
    {
        return isValid("BDS_e4");

    }

    void setBDS_e3(bool value)
    {
        write("BDS_e3",value);
    }

    bool getBDS_e3(void)

    {
        return getBool("BDS_e3");
    }

    bool isBDS_e3Valid(void)
    {
        return isValid("BDS_e3");

    }

    void setBDS_e2(bool value)
    {
        write("BDS_e2",value);
    }

    bool getBDS_e2(void)

    {
        return getBool("BDS_e2");
    }

    bool isBDS_e2Valid(void)
    {
        return isValid("BDS_e2");

    }

    void setBDS_e1(bool value)
    {
        write("BDS_e1",value);
    }

    bool getBDS_e1(void)

    {
        return getBool("BDS_e1");
    }

    bool isBDS_e1Valid(void)
    {
        return isValid("BDS_e1");

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