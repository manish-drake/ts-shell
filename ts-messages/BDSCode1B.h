#ifndef __BDSCode1B_h
#define __BDSCode1B_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1B:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x13;
    CBDSCode1B(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1B(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_e0(bool value)
    {
        write("BDS_e0",value);
    }

    bool getBDS_e0(void)

    {
        return getBool("BDS_e0");
    }

    bool isBDS_e0Valid(void)
    {
        return isValid("BDS_e0");

    }

    void setBDS_df(bool value)
    {
        write("BDS_df",value);
    }

    bool getBDS_df(void)

    {
        return getBool("BDS_df");
    }

    bool isBDS_dfValid(void)
    {
        return isValid("BDS_df");

    }

    void setBDS_de(bool value)
    {
        write("BDS_de",value);
    }

    bool getBDS_de(void)

    {
        return getBool("BDS_de");
    }

    bool isBDS_deValid(void)
    {
        return isValid("BDS_de");

    }

    void setBDS_dd(bool value)
    {
        write("BDS_dd",value);
    }

    bool getBDS_dd(void)

    {
        return getBool("BDS_dd");
    }

    bool isBDS_ddValid(void)
    {
        return isValid("BDS_dd");

    }

    void setBDS_dc(bool value)
    {
        write("BDS_dc",value);
    }

    bool getBDS_dc(void)

    {
        return getBool("BDS_dc");
    }

    bool isBDS_dcValid(void)
    {
        return isValid("BDS_dc");

    }

    void setBDS_db(bool value)
    {
        write("BDS_db",value);
    }

    bool getBDS_db(void)

    {
        return getBool("BDS_db");
    }

    bool isBDS_dbValid(void)
    {
        return isValid("BDS_db");

    }

    void setBDS_da(bool value)
    {
        write("BDS_da",value);
    }

    bool getBDS_da(void)

    {
        return getBool("BDS_da");
    }

    bool isBDS_daValid(void)
    {
        return isValid("BDS_da");

    }

    void setBDS_d9(bool value)
    {
        write("BDS_d9",value);
    }

    bool getBDS_d9(void)

    {
        return getBool("BDS_d9");
    }

    bool isBDS_d9Valid(void)
    {
        return isValid("BDS_d9");

    }

    void setBDS_d8(bool value)
    {
        write("BDS_d8",value);
    }

    bool getBDS_d8(void)

    {
        return getBool("BDS_d8");
    }

    bool isBDS_d8Valid(void)
    {
        return isValid("BDS_d8");

    }

    void setBDS_d7(bool value)
    {
        write("BDS_d7",value);
    }

    bool getBDS_d7(void)

    {
        return getBool("BDS_d7");
    }

    bool isBDS_d7Valid(void)
    {
        return isValid("BDS_d7");

    }

    void setBDS_d6(bool value)
    {
        write("BDS_d6",value);
    }

    bool getBDS_d6(void)

    {
        return getBool("BDS_d6");
    }

    bool isBDS_d6Valid(void)
    {
        return isValid("BDS_d6");

    }

    void setBDS_d5(bool value)
    {
        write("BDS_d5",value);
    }

    bool getBDS_d5(void)

    {
        return getBool("BDS_d5");
    }

    bool isBDS_d5Valid(void)
    {
        return isValid("BDS_d5");

    }

    void setBDS_d4(bool value)
    {
        write("BDS_d4",value);
    }

    bool getBDS_d4(void)

    {
        return getBool("BDS_d4");
    }

    bool isBDS_d4Valid(void)
    {
        return isValid("BDS_d4");

    }

    void setBDS_d3(bool value)
    {
        write("BDS_d3",value);
    }

    bool getBDS_d3(void)

    {
        return getBool("BDS_d3");
    }

    bool isBDS_d3Valid(void)
    {
        return isValid("BDS_d3");

    }

    void setBDS_d2(bool value)
    {
        write("BDS_d2",value);
    }

    bool getBDS_d2(void)

    {
        return getBool("BDS_d2");
    }

    bool isBDS_d2Valid(void)
    {
        return isValid("BDS_d2");

    }

    void setBDS_d1(bool value)
    {
        write("BDS_d1",value);
    }

    bool getBDS_d1(void)

    {
        return getBool("BDS_d1");
    }

    bool isBDS_d1Valid(void)
    {
        return isValid("BDS_d1");

    }

    void setBDS_d0(bool value)
    {
        write("BDS_d0",value);
    }

    bool getBDS_d0(void)

    {
        return getBool("BDS_d0");
    }

    bool isBDS_d0Valid(void)
    {
        return isValid("BDS_d0");

    }

    void setBDS_cf(bool value)
    {
        write("BDS_cf",value);
    }

    bool getBDS_cf(void)

    {
        return getBool("BDS_cf");
    }

    bool isBDS_cfValid(void)
    {
        return isValid("BDS_cf");

    }

    void setBDS_ce(bool value)
    {
        write("BDS_ce",value);
    }

    bool getBDS_ce(void)

    {
        return getBool("BDS_ce");
    }

    bool isBDS_ceValid(void)
    {
        return isValid("BDS_ce");

    }

    void setBDS_cd(bool value)
    {
        write("BDS_cd",value);
    }

    bool getBDS_cd(void)

    {
        return getBool("BDS_cd");
    }

    bool isBDS_cdValid(void)
    {
        return isValid("BDS_cd");

    }

    void setBDS_cc(bool value)
    {
        write("BDS_cc",value);
    }

    bool getBDS_cc(void)

    {
        return getBool("BDS_cc");
    }

    bool isBDS_ccValid(void)
    {
        return isValid("BDS_cc");

    }

    void setBDS_cb(bool value)
    {
        write("BDS_cb",value);
    }

    bool getBDS_cb(void)

    {
        return getBool("BDS_cb");
    }

    bool isBDS_cbValid(void)
    {
        return isValid("BDS_cb");

    }

    void setBDS_ca(bool value)
    {
        write("BDS_ca",value);
    }

    bool getBDS_ca(void)

    {
        return getBool("BDS_ca");
    }

    bool isBDS_caValid(void)
    {
        return isValid("BDS_ca");

    }

    void setBDS_c9(bool value)
    {
        write("BDS_c9",value);
    }

    bool getBDS_c9(void)

    {
        return getBool("BDS_c9");
    }

    bool isBDS_c9Valid(void)
    {
        return isValid("BDS_c9");

    }

    void setBDS_c8(bool value)
    {
        write("BDS_c8",value);
    }

    bool getBDS_c8(void)

    {
        return getBool("BDS_c8");
    }

    bool isBDS_c8Valid(void)
    {
        return isValid("BDS_c8");

    }

    void setBDS_c7(bool value)
    {
        write("BDS_c7",value);
    }

    bool getBDS_c7(void)

    {
        return getBool("BDS_c7");
    }

    bool isBDS_c7Valid(void)
    {
        return isValid("BDS_c7");

    }

    void setBDS_c6(bool value)
    {
        write("BDS_c6",value);
    }

    bool getBDS_c6(void)

    {
        return getBool("BDS_c6");
    }

    bool isBDS_c6Valid(void)
    {
        return isValid("BDS_c6");

    }

    void setBDS_c5(bool value)
    {
        write("BDS_c5",value);
    }

    bool getBDS_c5(void)

    {
        return getBool("BDS_c5");
    }

    bool isBDS_c5Valid(void)
    {
        return isValid("BDS_c5");

    }

    void setBDS_c4(bool value)
    {
        write("BDS_c4",value);
    }

    bool getBDS_c4(void)

    {
        return getBool("BDS_c4");
    }

    bool isBDS_c4Valid(void)
    {
        return isValid("BDS_c4");

    }

    void setBDS_c3(bool value)
    {
        write("BDS_c3",value);
    }

    bool getBDS_c3(void)

    {
        return getBool("BDS_c3");
    }

    bool isBDS_c3Valid(void)
    {
        return isValid("BDS_c3");

    }

    void setBDS_c2(bool value)
    {
        write("BDS_c2",value);
    }

    bool getBDS_c2(void)

    {
        return getBool("BDS_c2");
    }

    bool isBDS_c2Valid(void)
    {
        return isValid("BDS_c2");

    }

    void setBDS_c1(bool value)
    {
        write("BDS_c1",value);
    }

    bool getBDS_c1(void)

    {
        return getBool("BDS_c1");
    }

    bool isBDS_c1Valid(void)
    {
        return isValid("BDS_c1");

    }

    void setBDS_c0(bool value)
    {
        write("BDS_c0",value);
    }

    bool getBDS_c0(void)

    {
        return getBool("BDS_c0");
    }

    bool isBDS_c0Valid(void)
    {
        return isValid("BDS_c0");

    }

    void setBDS_bf(bool value)
    {
        write("BDS_bf",value);
    }

    bool getBDS_bf(void)

    {
        return getBool("BDS_bf");
    }

    bool isBDS_bfValid(void)
    {
        return isValid("BDS_bf");

    }

    void setBDS_be(bool value)
    {
        write("BDS_be",value);
    }

    bool getBDS_be(void)

    {
        return getBool("BDS_be");
    }

    bool isBDS_beValid(void)
    {
        return isValid("BDS_be");

    }

    void setBDS_bd(bool value)
    {
        write("BDS_bd",value);
    }

    bool getBDS_bd(void)

    {
        return getBool("BDS_bd");
    }

    bool isBDS_bdValid(void)
    {
        return isValid("BDS_bd");

    }

    void setBDS_bc(bool value)
    {
        write("BDS_bc",value);
    }

    bool getBDS_bc(void)

    {
        return getBool("BDS_bc");
    }

    bool isBDS_bcValid(void)
    {
        return isValid("BDS_bc");

    }

    void setBDS_bb(bool value)
    {
        write("BDS_bb",value);
    }

    bool getBDS_bb(void)

    {
        return getBool("BDS_bb");
    }

    bool isBDS_bbValid(void)
    {
        return isValid("BDS_bb");

    }

    void setBDS_ba(bool value)
    {
        write("BDS_ba",value);
    }

    bool getBDS_ba(void)

    {
        return getBool("BDS_ba");
    }

    bool isBDS_baValid(void)
    {
        return isValid("BDS_ba");

    }

    void setBDS_b9(bool value)
    {
        write("BDS_b9",value);
    }

    bool getBDS_b9(void)

    {
        return getBool("BDS_b9");
    }

    bool isBDS_b9Valid(void)
    {
        return isValid("BDS_b9");

    }

    void setBDS_b8(bool value)
    {
        write("BDS_b8",value);
    }

    bool getBDS_b8(void)

    {
        return getBool("BDS_b8");
    }

    bool isBDS_b8Valid(void)
    {
        return isValid("BDS_b8");

    }

    void setBDS_b7(bool value)
    {
        write("BDS_b7",value);
    }

    bool getBDS_b7(void)

    {
        return getBool("BDS_b7");
    }

    bool isBDS_b7Valid(void)
    {
        return isValid("BDS_b7");

    }

    void setBDS_b6(bool value)
    {
        write("BDS_b6",value);
    }

    bool getBDS_b6(void)

    {
        return getBool("BDS_b6");
    }

    bool isBDS_b6Valid(void)
    {
        return isValid("BDS_b6");

    }

    void setBDS_b5(bool value)
    {
        write("BDS_b5",value);
    }

    bool getBDS_b5(void)

    {
        return getBool("BDS_b5");
    }

    bool isBDS_b5Valid(void)
    {
        return isValid("BDS_b5");

    }

    void setBDS_b4(bool value)
    {
        write("BDS_b4",value);
    }

    bool getBDS_b4(void)

    {
        return getBool("BDS_b4");
    }

    bool isBDS_b4Valid(void)
    {
        return isValid("BDS_b4");

    }

    void setBDS_b3(bool value)
    {
        write("BDS_b3",value);
    }

    bool getBDS_b3(void)

    {
        return getBool("BDS_b3");
    }

    bool isBDS_b3Valid(void)
    {
        return isValid("BDS_b3");

    }

    void setBDS_b2(bool value)
    {
        write("BDS_b2",value);
    }

    bool getBDS_b2(void)

    {
        return getBool("BDS_b2");
    }

    bool isBDS_b2Valid(void)
    {
        return isValid("BDS_b2");

    }

    void setBDS_b1(bool value)
    {
        write("BDS_b1",value);
    }

    bool getBDS_b1(void)

    {
        return getBool("BDS_b1");
    }

    bool isBDS_b1Valid(void)
    {
        return isValid("BDS_b1");

    }

    void setBDS_b0(bool value)
    {
        write("BDS_b0",value);
    }

    bool getBDS_b0(void)

    {
        return getBool("BDS_b0");
    }

    bool isBDS_b0Valid(void)
    {
        return isValid("BDS_b0");

    }

    void setBDS_af(bool value)
    {
        write("BDS_af",value);
    }

    bool getBDS_af(void)

    {
        return getBool("BDS_af");
    }

    bool isBDS_afValid(void)
    {
        return isValid("BDS_af");

    }

    void setBDS_ae(bool value)
    {
        write("BDS_ae",value);
    }

    bool getBDS_ae(void)

    {
        return getBool("BDS_ae");
    }

    bool isBDS_aeValid(void)
    {
        return isValid("BDS_ae");

    }

    void setBDS_ad(bool value)
    {
        write("BDS_ad",value);
    }

    bool getBDS_ad(void)

    {
        return getBool("BDS_ad");
    }

    bool isBDS_adValid(void)
    {
        return isValid("BDS_ad");

    }

    void setBDS_ac(bool value)
    {
        write("BDS_ac",value);
    }

    bool getBDS_ac(void)

    {
        return getBool("BDS_ac");
    }

    bool isBDS_acValid(void)
    {
        return isValid("BDS_ac");

    }

    void setBDS_ab(bool value)
    {
        write("BDS_ab",value);
    }

    bool getBDS_ab(void)

    {
        return getBool("BDS_ab");
    }

    bool isBDS_abValid(void)
    {
        return isValid("BDS_ab");

    }

    void setBDS_aa(bool value)
    {
        write("BDS_aa",value);
    }

    bool getBDS_aa(void)

    {
        return getBool("BDS_aa");
    }

    bool isBDS_aaValid(void)
    {
        return isValid("BDS_aa");

    }

    void setBDS_a9(bool value)
    {
        write("BDS_a9",value);
    }

    bool getBDS_a9(void)

    {
        return getBool("BDS_a9");
    }

    bool isBDS_a9Valid(void)
    {
        return isValid("BDS_a9");

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