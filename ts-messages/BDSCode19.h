#ifndef __BDSCode19_h
#define __BDSCode19_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode19:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x11;
    CBDSCode19(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode19(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_70(bool value)
    {
        write("BDS_70",value);
    }

    bool getBDS_70(void)

    {
        return getBool("BDS_70");
    }

    bool isBDS_70Valid(void)
    {
        return isValid("BDS_70");

    }

    void setBDS_6f(bool value)
    {
        write("BDS_6f",value);
    }

    bool getBDS_6f(void)

    {
        return getBool("BDS_6f");
    }

    bool isBDS_6fValid(void)
    {
        return isValid("BDS_6f");

    }

    void setBDS_6e(bool value)
    {
        write("BDS_6e",value);
    }

    bool getBDS_6e(void)

    {
        return getBool("BDS_6e");
    }

    bool isBDS_6eValid(void)
    {
        return isValid("BDS_6e");

    }

    void setBDS_6d(bool value)
    {
        write("BDS_6d",value);
    }

    bool getBDS_6d(void)

    {
        return getBool("BDS_6d");
    }

    bool isBDS_6dValid(void)
    {
        return isValid("BDS_6d");

    }

    void setBDS_6c(bool value)
    {
        write("BDS_6c",value);
    }

    bool getBDS_6c(void)

    {
        return getBool("BDS_6c");
    }

    bool isBDS_6cValid(void)
    {
        return isValid("BDS_6c");

    }

    void setBDS_6b(bool value)
    {
        write("BDS_6b",value);
    }

    bool getBDS_6b(void)

    {
        return getBool("BDS_6b");
    }

    bool isBDS_6bValid(void)
    {
        return isValid("BDS_6b");

    }

    void setBDS_6a(bool value)
    {
        write("BDS_6a",value);
    }

    bool getBDS_6a(void)

    {
        return getBool("BDS_6a");
    }

    bool isBDS_6aValid(void)
    {
        return isValid("BDS_6a");

    }

    void setBDS_69(bool value)
    {
        write("BDS_69",value);
    }

    bool getBDS_69(void)

    {
        return getBool("BDS_69");
    }

    bool isBDS_69Valid(void)
    {
        return isValid("BDS_69");

    }

    void setBDS_68(bool value)
    {
        write("BDS_68",value);
    }

    bool getBDS_68(void)

    {
        return getBool("BDS_68");
    }

    bool isBDS_68Valid(void)
    {
        return isValid("BDS_68");

    }

    void setBDS_67(bool value)
    {
        write("BDS_67",value);
    }

    bool getBDS_67(void)

    {
        return getBool("BDS_67");
    }

    bool isBDS_67Valid(void)
    {
        return isValid("BDS_67");

    }

    void setBDS_66(bool value)
    {
        write("BDS_66",value);
    }

    bool getBDS_66(void)

    {
        return getBool("BDS_66");
    }

    bool isBDS_66Valid(void)
    {
        return isValid("BDS_66");

    }

    void setBDS_65(bool value)
    {
        write("BDS_65",value);
    }

    bool getBDS_65(void)

    {
        return getBool("BDS_65");
    }

    bool isBDS_65Valid(void)
    {
        return isValid("BDS_65");

    }

    void setBDS_64(bool value)
    {
        write("BDS_64",value);
    }

    bool getBDS_64(void)

    {
        return getBool("BDS_64");
    }

    bool isBDS_64Valid(void)
    {
        return isValid("BDS_64");

    }

    void setBDS_63(bool value)
    {
        write("BDS_63",value);
    }

    bool getBDS_63(void)

    {
        return getBool("BDS_63");
    }

    bool isBDS_63Valid(void)
    {
        return isValid("BDS_63");

    }

    void setBDS_62(bool value)
    {
        write("BDS_62",value);
    }

    bool getBDS_62(void)

    {
        return getBool("BDS_62");
    }

    bool isBDS_62Valid(void)
    {
        return isValid("BDS_62");

    }

    void setBDS_61(bool value)
    {
        write("BDS_61",value);
    }

    bool getBDS_61(void)

    {
        return getBool("BDS_61");
    }

    bool isBDS_61Valid(void)
    {
        return isValid("BDS_61");

    }

    void setBDS_60(bool value)
    {
        write("BDS_60",value);
    }

    bool getBDS_60(void)

    {
        return getBool("BDS_60");
    }

    bool isBDS_60Valid(void)
    {
        return isValid("BDS_60");

    }

    void setBDS_5f(bool value)
    {
        write("BDS_5f",value);
    }

    bool getBDS_5f(void)

    {
        return getBool("BDS_5f");
    }

    bool isBDS_5fValid(void)
    {
        return isValid("BDS_5f");

    }

    void setBDS_5e(bool value)
    {
        write("BDS_5e",value);
    }

    bool getBDS_5e(void)

    {
        return getBool("BDS_5e");
    }

    bool isBDS_5eValid(void)
    {
        return isValid("BDS_5e");

    }

    void setBDS_5d(bool value)
    {
        write("BDS_5d",value);
    }

    bool getBDS_5d(void)

    {
        return getBool("BDS_5d");
    }

    bool isBDS_5dValid(void)
    {
        return isValid("BDS_5d");

    }

    void setBDS_5c(bool value)
    {
        write("BDS_5c",value);
    }

    bool getBDS_5c(void)

    {
        return getBool("BDS_5c");
    }

    bool isBDS_5cValid(void)
    {
        return isValid("BDS_5c");

    }

    void setBDS_5b(bool value)
    {
        write("BDS_5b",value);
    }

    bool getBDS_5b(void)

    {
        return getBool("BDS_5b");
    }

    bool isBDS_5bValid(void)
    {
        return isValid("BDS_5b");

    }

    void setBDS_5a(bool value)
    {
        write("BDS_5a",value);
    }

    bool getBDS_5a(void)

    {
        return getBool("BDS_5a");
    }

    bool isBDS_5aValid(void)
    {
        return isValid("BDS_5a");

    }

    void setBDS_59(bool value)
    {
        write("BDS_59",value);
    }

    bool getBDS_59(void)

    {
        return getBool("BDS_59");
    }

    bool isBDS_59Valid(void)
    {
        return isValid("BDS_59");

    }

    void setBDS_58(bool value)
    {
        write("BDS_58",value);
    }

    bool getBDS_58(void)

    {
        return getBool("BDS_58");
    }

    bool isBDS_58Valid(void)
    {
        return isValid("BDS_58");

    }

    void setBDS_57(bool value)
    {
        write("BDS_57",value);
    }

    bool getBDS_57(void)

    {
        return getBool("BDS_57");
    }

    bool isBDS_57Valid(void)
    {
        return isValid("BDS_57");

    }

    void setBDS_56(bool value)
    {
        write("BDS_56",value);
    }

    bool getBDS_56(void)

    {
        return getBool("BDS_56");
    }

    bool isBDS_56Valid(void)
    {
        return isValid("BDS_56");

    }

    void setBDS_55(bool value)
    {
        write("BDS_55",value);
    }

    bool getBDS_55(void)

    {
        return getBool("BDS_55");
    }

    bool isBDS_55Valid(void)
    {
        return isValid("BDS_55");

    }

    void setBDS_54(bool value)
    {
        write("BDS_54",value);
    }

    bool getBDS_54(void)

    {
        return getBool("BDS_54");
    }

    bool isBDS_54Valid(void)
    {
        return isValid("BDS_54");

    }

    void setBDS_53(bool value)
    {
        write("BDS_53",value);
    }

    bool getBDS_53(void)

    {
        return getBool("BDS_53");
    }

    bool isBDS_53Valid(void)
    {
        return isValid("BDS_53");

    }

    void setBDS_52(bool value)
    {
        write("BDS_52",value);
    }

    bool getBDS_52(void)

    {
        return getBool("BDS_52");
    }

    bool isBDS_52Valid(void)
    {
        return isValid("BDS_52");

    }

    void setBDS_51(bool value)
    {
        write("BDS_51",value);
    }

    bool getBDS_51(void)

    {
        return getBool("BDS_51");
    }

    bool isBDS_51Valid(void)
    {
        return isValid("BDS_51");

    }

    void setBDS_50(bool value)
    {
        write("BDS_50",value);
    }

    bool getBDS_50(void)

    {
        return getBool("BDS_50");
    }

    bool isBDS_50Valid(void)
    {
        return isValid("BDS_50");

    }

    void setBDS_4f(bool value)
    {
        write("BDS_4f",value);
    }

    bool getBDS_4f(void)

    {
        return getBool("BDS_4f");
    }

    bool isBDS_4fValid(void)
    {
        return isValid("BDS_4f");

    }

    void setBDS_4e(bool value)
    {
        write("BDS_4e",value);
    }

    bool getBDS_4e(void)

    {
        return getBool("BDS_4e");
    }

    bool isBDS_4eValid(void)
    {
        return isValid("BDS_4e");

    }

    void setBDS_4d(bool value)
    {
        write("BDS_4d",value);
    }

    bool getBDS_4d(void)

    {
        return getBool("BDS_4d");
    }

    bool isBDS_4dValid(void)
    {
        return isValid("BDS_4d");

    }

    void setBDS_4c(bool value)
    {
        write("BDS_4c",value);
    }

    bool getBDS_4c(void)

    {
        return getBool("BDS_4c");
    }

    bool isBDS_4cValid(void)
    {
        return isValid("BDS_4c");

    }

    void setBDS_4b(bool value)
    {
        write("BDS_4b",value);
    }

    bool getBDS_4b(void)

    {
        return getBool("BDS_4b");
    }

    bool isBDS_4bValid(void)
    {
        return isValid("BDS_4b");

    }

    void setBDS_4a(bool value)
    {
        write("BDS_4a",value);
    }

    bool getBDS_4a(void)

    {
        return getBool("BDS_4a");
    }

    bool isBDS_4aValid(void)
    {
        return isValid("BDS_4a");

    }

    void setBDS_49(bool value)
    {
        write("BDS_49",value);
    }

    bool getBDS_49(void)

    {
        return getBool("BDS_49");
    }

    bool isBDS_49Valid(void)
    {
        return isValid("BDS_49");

    }

    void setBDS_48(bool value)
    {
        write("BDS_48",value);
    }

    bool getBDS_48(void)

    {
        return getBool("BDS_48");
    }

    bool isBDS_48Valid(void)
    {
        return isValid("BDS_48");

    }

    void setBDS_47(bool value)
    {
        write("BDS_47",value);
    }

    bool getBDS_47(void)

    {
        return getBool("BDS_47");
    }

    bool isBDS_47Valid(void)
    {
        return isValid("BDS_47");

    }

    void setBDS_46(bool value)
    {
        write("BDS_46",value);
    }

    bool getBDS_46(void)

    {
        return getBool("BDS_46");
    }

    bool isBDS_46Valid(void)
    {
        return isValid("BDS_46");

    }

    void setBDS_45(bool value)
    {
        write("BDS_45",value);
    }

    bool getBDS_45(void)

    {
        return getBool("BDS_45");
    }

    bool isBDS_45Valid(void)
    {
        return isValid("BDS_45");

    }

    void setBDS_44(bool value)
    {
        write("BDS_44",value);
    }

    bool getBDS_44(void)

    {
        return getBool("BDS_44");
    }

    bool isBDS_44Valid(void)
    {
        return isValid("BDS_44");

    }

    void setBDS_43(bool value)
    {
        write("BDS_43",value);
    }

    bool getBDS_43(void)

    {
        return getBool("BDS_43");
    }

    bool isBDS_43Valid(void)
    {
        return isValid("BDS_43");

    }

    void setBDS_42(bool value)
    {
        write("BDS_42",value);
    }

    bool getBDS_42(void)

    {
        return getBool("BDS_42");
    }

    bool isBDS_42Valid(void)
    {
        return isValid("BDS_42");

    }

    void setBDS_41(bool value)
    {
        write("BDS_41",value);
    }

    bool getBDS_41(void)

    {
        return getBool("BDS_41");
    }

    bool isBDS_41Valid(void)
    {
        return isValid("BDS_41");

    }

    void setBDS_40(bool value)
    {
        write("BDS_40",value);
    }

    bool getBDS_40(void)

    {
        return getBool("BDS_40");
    }

    bool isBDS_40Valid(void)
    {
        return isValid("BDS_40");

    }

    void setBDS_3f(bool value)
    {
        write("BDS_3f",value);
    }

    bool getBDS_3f(void)

    {
        return getBool("BDS_3f");
    }

    bool isBDS_3fValid(void)
    {
        return isValid("BDS_3f");

    }

    void setBDS_3e(bool value)
    {
        write("BDS_3e",value);
    }

    bool getBDS_3e(void)

    {
        return getBool("BDS_3e");
    }

    bool isBDS_3eValid(void)
    {
        return isValid("BDS_3e");

    }

    void setBDS_3d(bool value)
    {
        write("BDS_3d",value);
    }

    bool getBDS_3d(void)

    {
        return getBool("BDS_3d");
    }

    bool isBDS_3dValid(void)
    {
        return isValid("BDS_3d");

    }

    void setBDS_3c(bool value)
    {
        write("BDS_3c",value);
    }

    bool getBDS_3c(void)

    {
        return getBool("BDS_3c");
    }

    bool isBDS_3cValid(void)
    {
        return isValid("BDS_3c");

    }

    void setBDS_3b(bool value)
    {
        write("BDS_3b",value);
    }

    bool getBDS_3b(void)

    {
        return getBool("BDS_3b");
    }

    bool isBDS_3bValid(void)
    {
        return isValid("BDS_3b");

    }

    void setBDS_3a(bool value)
    {
        write("BDS_3a",value);
    }

    bool getBDS_3a(void)

    {
        return getBool("BDS_3a");
    }

    bool isBDS_3aValid(void)
    {
        return isValid("BDS_3a");

    }

    void setBDS_39(bool value)
    {
        write("BDS_39",value);
    }

    bool getBDS_39(void)

    {
        return getBool("BDS_39");
    }

    bool isBDS_39Valid(void)
    {
        return isValid("BDS_39");

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