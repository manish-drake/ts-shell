#ifndef __BDSCode18_h
#define __BDSCode18_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode18:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x10;
    CBDSCode18(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode18(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_38(bool value)
    {
        write("BDS_38",value);
    }

    bool getBDS_38(void)

    {
        return getBool("BDS_38");
    }

    bool isBDS_38Valid(void)
    {
        return isValid("BDS_38");

    }

    void setBDS_37(bool value)
    {
        write("BDS_37",value);
    }

    bool getBDS_37(void)

    {
        return getBool("BDS_37");
    }

    bool isBDS_37Valid(void)
    {
        return isValid("BDS_37");

    }

    void setBDS_36(bool value)
    {
        write("BDS_36",value);
    }

    bool getBDS_36(void)

    {
        return getBool("BDS_36");
    }

    bool isBDS_36Valid(void)
    {
        return isValid("BDS_36");

    }

    void setBDS_35(bool value)
    {
        write("BDS_35",value);
    }

    bool getBDS_35(void)

    {
        return getBool("BDS_35");
    }

    bool isBDS_35Valid(void)
    {
        return isValid("BDS_35");

    }

    void setBDS_34(bool value)
    {
        write("BDS_34",value);
    }

    bool getBDS_34(void)

    {
        return getBool("BDS_34");
    }

    bool isBDS_34Valid(void)
    {
        return isValid("BDS_34");

    }

    void setBDS_33(bool value)
    {
        write("BDS_33",value);
    }

    bool getBDS_33(void)

    {
        return getBool("BDS_33");
    }

    bool isBDS_33Valid(void)
    {
        return isValid("BDS_33");

    }

    void setBDS_32(bool value)
    {
        write("BDS_32",value);
    }

    bool getBDS_32(void)

    {
        return getBool("BDS_32");
    }

    bool isBDS_32Valid(void)
    {
        return isValid("BDS_32");

    }

    void setBDS_31(bool value)
    {
        write("BDS_31",value);
    }

    bool getBDS_31(void)

    {
        return getBool("BDS_31");
    }

    bool isBDS_31Valid(void)
    {
        return isValid("BDS_31");

    }

    void setBDS_30(bool value)
    {
        write("BDS_30",value);
    }

    bool getBDS_30(void)

    {
        return getBool("BDS_30");
    }

    bool isBDS_30Valid(void)
    {
        return isValid("BDS_30");

    }

    void setBDS_2f(bool value)
    {
        write("BDS_2f",value);
    }

    bool getBDS_2f(void)

    {
        return getBool("BDS_2f");
    }

    bool isBDS_2fValid(void)
    {
        return isValid("BDS_2f");

    }

    void setBDS_2e(bool value)
    {
        write("BDS_2e",value);
    }

    bool getBDS_2e(void)

    {
        return getBool("BDS_2e");
    }

    bool isBDS_2eValid(void)
    {
        return isValid("BDS_2e");

    }

    void setBDS_2d(bool value)
    {
        write("BDS_2d",value);
    }

    bool getBDS_2d(void)

    {
        return getBool("BDS_2d");
    }

    bool isBDS_2dValid(void)
    {
        return isValid("BDS_2d");

    }

    void setBDS_2c(bool value)
    {
        write("BDS_2c",value);
    }

    bool getBDS_2c(void)

    {
        return getBool("BDS_2c");
    }

    bool isBDS_2cValid(void)
    {
        return isValid("BDS_2c");

    }

    void setBDS_2b(bool value)
    {
        write("BDS_2b",value);
    }

    bool getBDS_2b(void)

    {
        return getBool("BDS_2b");
    }

    bool isBDS_2bValid(void)
    {
        return isValid("BDS_2b");

    }

    void setBDS_2a(bool value)
    {
        write("BDS_2a",value);
    }

    bool getBDS_2a(void)

    {
        return getBool("BDS_2a");
    }

    bool isBDS_2aValid(void)
    {
        return isValid("BDS_2a");

    }

    void setBDS_29(bool value)
    {
        write("BDS_29",value);
    }

    bool getBDS_29(void)

    {
        return getBool("BDS_29");
    }

    bool isBDS_29Valid(void)
    {
        return isValid("BDS_29");

    }

    void setBDS_28(bool value)
    {
        write("BDS_28",value);
    }

    bool getBDS_28(void)

    {
        return getBool("BDS_28");
    }

    bool isBDS_28Valid(void)
    {
        return isValid("BDS_28");

    }

    void setBDS_27(bool value)
    {
        write("BDS_27",value);
    }

    bool getBDS_27(void)

    {
        return getBool("BDS_27");
    }

    bool isBDS_27Valid(void)
    {
        return isValid("BDS_27");

    }

    void setBDS_26(bool value)
    {
        write("BDS_26",value);
    }

    bool getBDS_26(void)

    {
        return getBool("BDS_26");
    }

    bool isBDS_26Valid(void)
    {
        return isValid("BDS_26");

    }

    void setBDS_25(bool value)
    {
        write("BDS_25",value);
    }

    bool getBDS_25(void)

    {
        return getBool("BDS_25");
    }

    bool isBDS_25Valid(void)
    {
        return isValid("BDS_25");

    }

    void setBDS_24(bool value)
    {
        write("BDS_24",value);
    }

    bool getBDS_24(void)

    {
        return getBool("BDS_24");
    }

    bool isBDS_24Valid(void)
    {
        return isValid("BDS_24");

    }

    void setBDS_23(bool value)
    {
        write("BDS_23",value);
    }

    bool getBDS_23(void)

    {
        return getBool("BDS_23");
    }

    bool isBDS_23Valid(void)
    {
        return isValid("BDS_23");

    }

    void setBDS_22(bool value)
    {
        write("BDS_22",value);
    }

    bool getBDS_22(void)

    {
        return getBool("BDS_22");
    }

    bool isBDS_22Valid(void)
    {
        return isValid("BDS_22");

    }

    void setBDS_21(bool value)
    {
        write("BDS_21",value);
    }

    bool getBDS_21(void)

    {
        return getBool("BDS_21");
    }

    bool isBDS_21Valid(void)
    {
        return isValid("BDS_21");

    }

    void setBDS_20(bool value)
    {
        write("BDS_20",value);
    }

    bool getBDS_20(void)

    {
        return getBool("BDS_20");
    }

    bool isBDS_20Valid(void)
    {
        return isValid("BDS_20");

    }

    void setBDS_1f(bool value)
    {
        write("BDS_1f",value);
    }

    bool getBDS_1f(void)

    {
        return getBool("BDS_1f");
    }

    bool isBDS_1fValid(void)
    {
        return isValid("BDS_1f");

    }

    void setBDS_1e(bool value)
    {
        write("BDS_1e",value);
    }

    bool getBDS_1e(void)

    {
        return getBool("BDS_1e");
    }

    bool isBDS_1eValid(void)
    {
        return isValid("BDS_1e");

    }

    void setBDS_1d(bool value)
    {
        write("BDS_1d",value);
    }

    bool getBDS_1d(void)

    {
        return getBool("BDS_1d");
    }

    bool isBDS_1dValid(void)
    {
        return isValid("BDS_1d");

    }

    void setBDS_1c(bool value)
    {
        write("BDS_1c",value);
    }

    bool getBDS_1c(void)

    {
        return getBool("BDS_1c");
    }

    bool isBDS_1cValid(void)
    {
        return isValid("BDS_1c");

    }

    void setBDS_1b(bool value)
    {
        write("BDS_1b",value);
    }

    bool getBDS_1b(void)

    {
        return getBool("BDS_1b");
    }

    bool isBDS_1bValid(void)
    {
        return isValid("BDS_1b");

    }

    void setBDS_1a(bool value)
    {
        write("BDS_1a",value);
    }

    bool getBDS_1a(void)

    {
        return getBool("BDS_1a");
    }

    bool isBDS_1aValid(void)
    {
        return isValid("BDS_1a");

    }

    void setBDS_19(bool value)
    {
        write("BDS_19",value);
    }

    bool getBDS_19(void)

    {
        return getBool("BDS_19");
    }

    bool isBDS_19Valid(void)
    {
        return isValid("BDS_19");

    }

    void setBDS_18(bool value)
    {
        write("BDS_18",value);
    }

    bool getBDS_18(void)

    {
        return getBool("BDS_18");
    }

    bool isBDS_18Valid(void)
    {
        return isValid("BDS_18");

    }

    void setBDS_17(bool value)
    {
        write("BDS_17",value);
    }

    bool getBDS_17(void)

    {
        return getBool("BDS_17");
    }

    bool isBDS_17Valid(void)
    {
        return isValid("BDS_17");

    }

    void setBDS_16(bool value)
    {
        write("BDS_16",value);
    }

    bool getBDS_16(void)

    {
        return getBool("BDS_16");
    }

    bool isBDS_16Valid(void)
    {
        return isValid("BDS_16");

    }

    void setBDS_15(bool value)
    {
        write("BDS_15",value);
    }

    bool getBDS_15(void)

    {
        return getBool("BDS_15");
    }

    bool isBDS_15Valid(void)
    {
        return isValid("BDS_15");

    }

    void setBDS_14(bool value)
    {
        write("BDS_14",value);
    }

    bool getBDS_14(void)

    {
        return getBool("BDS_14");
    }

    bool isBDS_14Valid(void)
    {
        return isValid("BDS_14");

    }

    void setBDS_13(bool value)
    {
        write("BDS_13",value);
    }

    bool getBDS_13(void)

    {
        return getBool("BDS_13");
    }

    bool isBDS_13Valid(void)
    {
        return isValid("BDS_13");

    }

    void setBDS_12(bool value)
    {
        write("BDS_12",value);
    }

    bool getBDS_12(void)

    {
        return getBool("BDS_12");
    }

    bool isBDS_12Valid(void)
    {
        return isValid("BDS_12");

    }

    void setBDS_11(bool value)
    {
        write("BDS_11",value);
    }

    bool getBDS_11(void)

    {
        return getBool("BDS_11");
    }

    bool isBDS_11Valid(void)
    {
        return isValid("BDS_11");

    }

    void setBDS_10(bool value)
    {
        write("BDS_10",value);
    }

    bool getBDS_10(void)

    {
        return getBool("BDS_10");
    }

    bool isBDS_10Valid(void)
    {
        return isValid("BDS_10");

    }

    void setBDS_f(bool value)
    {
        write("BDS_f",value);
    }

    bool getBDS_f(void)

    {
        return getBool("BDS_f");
    }

    bool isBDS_fValid(void)
    {
        return isValid("BDS_f");

    }

    void setBDS_e(bool value)
    {
        write("BDS_e",value);
    }

    bool getBDS_e(void)

    {
        return getBool("BDS_e");
    }

    bool isBDS_eValid(void)
    {
        return isValid("BDS_e");

    }

    void setBDS_d(bool value)
    {
        write("BDS_d",value);
    }

    bool getBDS_d(void)

    {
        return getBool("BDS_d");
    }

    bool isBDS_dValid(void)
    {
        return isValid("BDS_d");

    }

    void setBDS_c(bool value)
    {
        write("BDS_c",value);
    }

    bool getBDS_c(void)

    {
        return getBool("BDS_c");
    }

    bool isBDS_cValid(void)
    {
        return isValid("BDS_c");

    }

    void setBDS_b(bool value)
    {
        write("BDS_b",value);
    }

    bool getBDS_b(void)

    {
        return getBool("BDS_b");
    }

    bool isBDS_bValid(void)
    {
        return isValid("BDS_b");

    }

    void setBDS_a(bool value)
    {
        write("BDS_a",value);
    }

    bool getBDS_a(void)

    {
        return getBool("BDS_a");
    }

    bool isBDS_aValid(void)
    {
        return isValid("BDS_a");

    }

    void setBDS_9(bool value)
    {
        write("BDS_9",value);
    }

    bool getBDS_9(void)

    {
        return getBool("BDS_9");
    }

    bool isBDS_9Valid(void)
    {
        return isValid("BDS_9");

    }

    void setBDS_8(bool value)
    {
        write("BDS_8",value);
    }

    bool getBDS_8(void)

    {
        return getBool("BDS_8");
    }

    bool isBDS_8Valid(void)
    {
        return isValid("BDS_8");

    }

    void setBDS_7(bool value)
    {
        write("BDS_7",value);
    }

    bool getBDS_7(void)

    {
        return getBool("BDS_7");
    }

    bool isBDS_7Valid(void)
    {
        return isValid("BDS_7");

    }

    void setBDS_6(bool value)
    {
        write("BDS_6",value);
    }

    bool getBDS_6(void)

    {
        return getBool("BDS_6");
    }

    bool isBDS_6Valid(void)
    {
        return isValid("BDS_6");

    }

    void setBDS_5(bool value)
    {
        write("BDS_5",value);
    }

    bool getBDS_5(void)

    {
        return getBool("BDS_5");
    }

    bool isBDS_5Valid(void)
    {
        return isValid("BDS_5");

    }

    void setBDS_4(bool value)
    {
        write("BDS_4",value);
    }

    bool getBDS_4(void)

    {
        return getBool("BDS_4");
    }

    bool isBDS_4Valid(void)
    {
        return isValid("BDS_4");

    }

    void setBDS_3(bool value)
    {
        write("BDS_3",value);
    }

    bool getBDS_3(void)

    {
        return getBool("BDS_3");
    }

    bool isBDS_3Valid(void)
    {
        return isValid("BDS_3");

    }

    void setBDS_2(bool value)
    {
        write("BDS_2",value);
    }

    bool getBDS_2(void)

    {
        return getBool("BDS_2");
    }

    bool isBDS_2Valid(void)
    {
        return isValid("BDS_2");

    }

    void setBDS_1(bool value)
    {
        write("BDS_1",value);
    }

    bool getBDS_1(void)

    {
        return getBool("BDS_1");
    }

    bool isBDS_1Valid(void)
    {
        return isValid("BDS_1");

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