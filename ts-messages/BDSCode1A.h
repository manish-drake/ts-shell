#ifndef __BDSCode1A_h
#define __BDSCode1A_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode1A:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x12;
    CBDSCode1A(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode1A(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDS_a8(bool value)
    {
        write("BDS_a8",value);
    }

    bool getBDS_a8(void)

    {
        return getBool("BDS_a8");
    }

    bool isBDS_a8Valid(void)
    {
        return isValid("BDS_a8");

    }

    void setBDS_a7(bool value)
    {
        write("BDS_a7",value);
    }

    bool getBDS_a7(void)

    {
        return getBool("BDS_a7");
    }

    bool isBDS_a7Valid(void)
    {
        return isValid("BDS_a7");

    }

    void setBDS_a6(bool value)
    {
        write("BDS_a6",value);
    }

    bool getBDS_a6(void)

    {
        return getBool("BDS_a6");
    }

    bool isBDS_a6Valid(void)
    {
        return isValid("BDS_a6");

    }

    void setBDS_a5(bool value)
    {
        write("BDS_a5",value);
    }

    bool getBDS_a5(void)

    {
        return getBool("BDS_a5");
    }

    bool isBDS_a5Valid(void)
    {
        return isValid("BDS_a5");

    }

    void setBDS_a4(bool value)
    {
        write("BDS_a4",value);
    }

    bool getBDS_a4(void)

    {
        return getBool("BDS_a4");
    }

    bool isBDS_a4Valid(void)
    {
        return isValid("BDS_a4");

    }

    void setBDS_a3(bool value)
    {
        write("BDS_a3",value);
    }

    bool getBDS_a3(void)

    {
        return getBool("BDS_a3");
    }

    bool isBDS_a3Valid(void)
    {
        return isValid("BDS_a3");

    }

    void setBDS_a2(bool value)
    {
        write("BDS_a2",value);
    }

    bool getBDS_a2(void)

    {
        return getBool("BDS_a2");
    }

    bool isBDS_a2Valid(void)
    {
        return isValid("BDS_a2");

    }

    void setBDS_a1(bool value)
    {
        write("BDS_a1",value);
    }

    bool getBDS_a1(void)

    {
        return getBool("BDS_a1");
    }

    bool isBDS_a1Valid(void)
    {
        return isValid("BDS_a1");

    }

    void setBDS_a0(bool value)
    {
        write("BDS_a0",value);
    }

    bool getBDS_a0(void)

    {
        return getBool("BDS_a0");
    }

    bool isBDS_a0Valid(void)
    {
        return isValid("BDS_a0");

    }

    void setBDS_9f(bool value)
    {
        write("BDS_9f",value);
    }

    bool getBDS_9f(void)

    {
        return getBool("BDS_9f");
    }

    bool isBDS_9fValid(void)
    {
        return isValid("BDS_9f");

    }

    void setBDS_9e(bool value)
    {
        write("BDS_9e",value);
    }

    bool getBDS_9e(void)

    {
        return getBool("BDS_9e");
    }

    bool isBDS_9eValid(void)
    {
        return isValid("BDS_9e");

    }

    void setBDS_9d(bool value)
    {
        write("BDS_9d",value);
    }

    bool getBDS_9d(void)

    {
        return getBool("BDS_9d");
    }

    bool isBDS_9dValid(void)
    {
        return isValid("BDS_9d");

    }

    void setBDS_9c(bool value)
    {
        write("BDS_9c",value);
    }

    bool getBDS_9c(void)

    {
        return getBool("BDS_9c");
    }

    bool isBDS_9cValid(void)
    {
        return isValid("BDS_9c");

    }

    void setBDS_9b(bool value)
    {
        write("BDS_9b",value);
    }

    bool getBDS_9b(void)

    {
        return getBool("BDS_9b");
    }

    bool isBDS_9bValid(void)
    {
        return isValid("BDS_9b");

    }

    void setBDS_9a(bool value)
    {
        write("BDS_9a",value);
    }

    bool getBDS_9a(void)

    {
        return getBool("BDS_9a");
    }

    bool isBDS_9aValid(void)
    {
        return isValid("BDS_9a");

    }

    void setBDS_99(bool value)
    {
        write("BDS_99",value);
    }

    bool getBDS_99(void)

    {
        return getBool("BDS_99");
    }

    bool isBDS_99Valid(void)
    {
        return isValid("BDS_99");

    }

    void setBDS_98(bool value)
    {
        write("BDS_98",value);
    }

    bool getBDS_98(void)

    {
        return getBool("BDS_98");
    }

    bool isBDS_98Valid(void)
    {
        return isValid("BDS_98");

    }

    void setBDS_97(bool value)
    {
        write("BDS_97",value);
    }

    bool getBDS_97(void)

    {
        return getBool("BDS_97");
    }

    bool isBDS_97Valid(void)
    {
        return isValid("BDS_97");

    }

    void setBDS_96(bool value)
    {
        write("BDS_96",value);
    }

    bool getBDS_96(void)

    {
        return getBool("BDS_96");
    }

    bool isBDS_96Valid(void)
    {
        return isValid("BDS_96");

    }

    void setBDS_95(bool value)
    {
        write("BDS_95",value);
    }

    bool getBDS_95(void)

    {
        return getBool("BDS_95");
    }

    bool isBDS_95Valid(void)
    {
        return isValid("BDS_95");

    }

    void setBDS_94(bool value)
    {
        write("BDS_94",value);
    }

    bool getBDS_94(void)

    {
        return getBool("BDS_94");
    }

    bool isBDS_94Valid(void)
    {
        return isValid("BDS_94");

    }

    void setBDS_93(bool value)
    {
        write("BDS_93",value);
    }

    bool getBDS_93(void)

    {
        return getBool("BDS_93");
    }

    bool isBDS_93Valid(void)
    {
        return isValid("BDS_93");

    }

    void setBDS_92(bool value)
    {
        write("BDS_92",value);
    }

    bool getBDS_92(void)

    {
        return getBool("BDS_92");
    }

    bool isBDS_92Valid(void)
    {
        return isValid("BDS_92");

    }

    void setBDS_91(bool value)
    {
        write("BDS_91",value);
    }

    bool getBDS_91(void)

    {
        return getBool("BDS_91");
    }

    bool isBDS_91Valid(void)
    {
        return isValid("BDS_91");

    }

    void setBDS_90(bool value)
    {
        write("BDS_90",value);
    }

    bool getBDS_90(void)

    {
        return getBool("BDS_90");
    }

    bool isBDS_90Valid(void)
    {
        return isValid("BDS_90");

    }

    void setBDS_8f(bool value)
    {
        write("BDS_8f",value);
    }

    bool getBDS_8f(void)

    {
        return getBool("BDS_8f");
    }

    bool isBDS_8fValid(void)
    {
        return isValid("BDS_8f");

    }

    void setBDS_8e(bool value)
    {
        write("BDS_8e",value);
    }

    bool getBDS_8e(void)

    {
        return getBool("BDS_8e");
    }

    bool isBDS_8eValid(void)
    {
        return isValid("BDS_8e");

    }

    void setBDS_8d(bool value)
    {
        write("BDS_8d",value);
    }

    bool getBDS_8d(void)

    {
        return getBool("BDS_8d");
    }

    bool isBDS_8dValid(void)
    {
        return isValid("BDS_8d");

    }

    void setBDS_8c(bool value)
    {
        write("BDS_8c",value);
    }

    bool getBDS_8c(void)

    {
        return getBool("BDS_8c");
    }

    bool isBDS_8cValid(void)
    {
        return isValid("BDS_8c");

    }

    void setBDS_8b(bool value)
    {
        write("BDS_8b",value);
    }

    bool getBDS_8b(void)

    {
        return getBool("BDS_8b");
    }

    bool isBDS_8bValid(void)
    {
        return isValid("BDS_8b");

    }

    void setBDS_8a(bool value)
    {
        write("BDS_8a",value);
    }

    bool getBDS_8a(void)

    {
        return getBool("BDS_8a");
    }

    bool isBDS_8aValid(void)
    {
        return isValid("BDS_8a");

    }

    void setBDS_89(bool value)
    {
        write("BDS_89",value);
    }

    bool getBDS_89(void)

    {
        return getBool("BDS_89");
    }

    bool isBDS_89Valid(void)
    {
        return isValid("BDS_89");

    }

    void setBDS_88(bool value)
    {
        write("BDS_88",value);
    }

    bool getBDS_88(void)

    {
        return getBool("BDS_88");
    }

    bool isBDS_88Valid(void)
    {
        return isValid("BDS_88");

    }

    void setBDS_87(bool value)
    {
        write("BDS_87",value);
    }

    bool getBDS_87(void)

    {
        return getBool("BDS_87");
    }

    bool isBDS_87Valid(void)
    {
        return isValid("BDS_87");

    }

    void setBDS_86(bool value)
    {
        write("BDS_86",value);
    }

    bool getBDS_86(void)

    {
        return getBool("BDS_86");
    }

    bool isBDS_86Valid(void)
    {
        return isValid("BDS_86");

    }

    void setBDS_85(bool value)
    {
        write("BDS_85",value);
    }

    bool getBDS_85(void)

    {
        return getBool("BDS_85");
    }

    bool isBDS_85Valid(void)
    {
        return isValid("BDS_85");

    }

    void setBDS_84(bool value)
    {
        write("BDS_84",value);
    }

    bool getBDS_84(void)

    {
        return getBool("BDS_84");
    }

    bool isBDS_84Valid(void)
    {
        return isValid("BDS_84");

    }

    void setBDS_83(bool value)
    {
        write("BDS_83",value);
    }

    bool getBDS_83(void)

    {
        return getBool("BDS_83");
    }

    bool isBDS_83Valid(void)
    {
        return isValid("BDS_83");

    }

    void setBDS_82(bool value)
    {
        write("BDS_82",value);
    }

    bool getBDS_82(void)

    {
        return getBool("BDS_82");
    }

    bool isBDS_82Valid(void)
    {
        return isValid("BDS_82");

    }

    void setBDS_81(bool value)
    {
        write("BDS_81",value);
    }

    bool getBDS_81(void)

    {
        return getBool("BDS_81");
    }

    bool isBDS_81Valid(void)
    {
        return isValid("BDS_81");

    }

    void setBDS_80(bool value)
    {
        write("BDS_80",value);
    }

    bool getBDS_80(void)

    {
        return getBool("BDS_80");
    }

    bool isBDS_80Valid(void)
    {
        return isValid("BDS_80");

    }

    void setBDS_7f(bool value)
    {
        write("BDS_7f",value);
    }

    bool getBDS_7f(void)

    {
        return getBool("BDS_7f");
    }

    bool isBDS_7fValid(void)
    {
        return isValid("BDS_7f");

    }

    void setBDS_7e(bool value)
    {
        write("BDS_7e",value);
    }

    bool getBDS_7e(void)

    {
        return getBool("BDS_7e");
    }

    bool isBDS_7eValid(void)
    {
        return isValid("BDS_7e");

    }

    void setBDS_7d(bool value)
    {
        write("BDS_7d",value);
    }

    bool getBDS_7d(void)

    {
        return getBool("BDS_7d");
    }

    bool isBDS_7dValid(void)
    {
        return isValid("BDS_7d");

    }

    void setBDS_7c(bool value)
    {
        write("BDS_7c",value);
    }

    bool getBDS_7c(void)

    {
        return getBool("BDS_7c");
    }

    bool isBDS_7cValid(void)
    {
        return isValid("BDS_7c");

    }

    void setBDS_7b(bool value)
    {
        write("BDS_7b",value);
    }

    bool getBDS_7b(void)

    {
        return getBool("BDS_7b");
    }

    bool isBDS_7bValid(void)
    {
        return isValid("BDS_7b");

    }

    void setBDS_7a(bool value)
    {
        write("BDS_7a",value);
    }

    bool getBDS_7a(void)

    {
        return getBool("BDS_7a");
    }

    bool isBDS_7aValid(void)
    {
        return isValid("BDS_7a");

    }

    void setBDS_79(bool value)
    {
        write("BDS_79",value);
    }

    bool getBDS_79(void)

    {
        return getBool("BDS_79");
    }

    bool isBDS_79Valid(void)
    {
        return isValid("BDS_79");

    }

    void setBDS_78(bool value)
    {
        write("BDS_78",value);
    }

    bool getBDS_78(void)

    {
        return getBool("BDS_78");
    }

    bool isBDS_78Valid(void)
    {
        return isValid("BDS_78");

    }

    void setBDS_77(bool value)
    {
        write("BDS_77",value);
    }

    bool getBDS_77(void)

    {
        return getBool("BDS_77");
    }

    bool isBDS_77Valid(void)
    {
        return isValid("BDS_77");

    }

    void setBDS_76(bool value)
    {
        write("BDS_76",value);
    }

    bool getBDS_76(void)

    {
        return getBool("BDS_76");
    }

    bool isBDS_76Valid(void)
    {
        return isValid("BDS_76");

    }

    void setBDS_75(bool value)
    {
        write("BDS_75",value);
    }

    bool getBDS_75(void)

    {
        return getBool("BDS_75");
    }

    bool isBDS_75Valid(void)
    {
        return isValid("BDS_75");

    }

    void setBDS_74(bool value)
    {
        write("BDS_74",value);
    }

    bool getBDS_74(void)

    {
        return getBool("BDS_74");
    }

    bool isBDS_74Valid(void)
    {
        return isValid("BDS_74");

    }

    void setBDS_73(bool value)
    {
        write("BDS_73",value);
    }

    bool getBDS_73(void)

    {
        return getBool("BDS_73");
    }

    bool isBDS_73Valid(void)
    {
        return isValid("BDS_73");

    }

    void setBDS_72(bool value)
    {
        write("BDS_72",value);
    }

    bool getBDS_72(void)

    {
        return getBool("BDS_72");
    }

    bool isBDS_72Valid(void)
    {
        return isValid("BDS_72");

    }

    void setBDS_71(bool value)
    {
        write("BDS_71",value);
    }

    bool getBDS_71(void)

    {
        return getBool("BDS_71");
    }

    bool isBDS_71Valid(void)
    {
        return isValid("BDS_71");

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