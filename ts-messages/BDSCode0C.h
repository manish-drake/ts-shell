#ifndef __BDSCode0C_h
#define __BDSCode0C_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode0C:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xd;
    CBDSCode0C(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode0C(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setAltitudeLevelStatus(bool value)
    {
        write("AltitudeLevelStatus",value);
    }

    bool getAltitudeLevelStatus(void)

    {
        return getBool("AltitudeLevelStatus");
    }

    bool isAltitudeLevelStatusValid(void)
    {
        return isValid("AltitudeLevelStatus");

    }

    void setAltitudeLevel(unsigned int value)
    {
        write("AltitudeLevel",value);
    }

    unsigned int getAltitudeLevel(void)

    {
        return getUInt("AltitudeLevel");
    }

    bool isAltitudeLevelValid(void)
    {
        return isValid("AltitudeLevel");

    }

    void setNextCourseStatus(bool value)
    {
        write("NextCourseStatus",value);
    }

    bool getNextCourseStatus(void)

    {
        return getBool("NextCourseStatus");
    }

    bool isNextCourseStatusValid(void)
    {
        return isValid("NextCourseStatus");

    }

    void setNextCourseSign(bool value)
    {
        write("NextCourseSign",value);
    }

    bool getNextCourseSign(void)

    {
        return getBool("NextCourseSign");
    }

    bool isNextCourseSignValid(void)
    {
        return isValid("NextCourseSign");

    }

    void setNextCourse(float value)
    {
        write("NextCourse",value);
    }

    float getNextCourse(void)

    {
        return getFloat("NextCourse");
    }

    bool isNextCourseValid(void)
    {
        return isValid("NextCourse");

    }

    void setWaypointStatus(bool value)
    {
        write("WaypointStatus",value);
    }

    bool getWaypointStatus(void)

    {
        return getBool("WaypointStatus");
    }

    bool isWaypointStatusValid(void)
    {
        return isValid("WaypointStatus");

    }

    void setNextWaypointTime(unsigned int value)
    {
        write("NextWaypointTime",value);
    }

    unsigned int getNextWaypointTime(void)

    {
        return getUInt("NextWaypointTime");
    }

    bool isNextWaypointTimeValid(void)
    {
        return isValid("NextWaypointTime");

    }

    void setVerticalVelocityStatus(bool value)
    {
        write("VerticalVelocityStatus",value);
    }

    bool getVerticalVelocityStatus(void)

    {
        return getBool("VerticalVelocityStatus");
    }

    bool isVerticalVelocityStatusValid(void)
    {
        return isValid("VerticalVelocityStatus");

    }

    void setVerticalVelocitySign(bool value)
    {
        write("VerticalVelocitySign",value);
    }

    bool getVerticalVelocitySign(void)

    {
        return getBool("VerticalVelocitySign");
    }

    bool isVerticalVelocitySignValid(void)
    {
        return isValid("VerticalVelocitySign");

    }

    void setVerticalVelocity(int value)
    {
        write("VerticalVelocity",value);
    }

    int getVerticalVelocity(void)

    {
        return getInt("VerticalVelocity");
    }

    bool isVerticalVelocityValid(void)
    {
        return isValid("VerticalVelocity");

    }

    void setRollAngleStatus(bool value)
    {
        write("RollAngleStatus",value);
    }

    bool getRollAngleStatus(void)

    {
        return getBool("RollAngleStatus");
    }

    bool isRollAngleStatusValid(void)
    {
        return isValid("RollAngleStatus");

    }

    void setRollAngleSign(bool value)
    {
        write("RollAngleSign",value);
    }

    bool getRollAngleSign(void)

    {
        return getBool("RollAngleSign");
    }

    bool isRollAngleSignValid(void)
    {
        return isValid("RollAngleSign");

    }

    void setRollAngle(float value)
    {
        write("RollAngle",value);
    }

    float getRollAngle(void)

    {
        return getFloat("RollAngle");
    }

    bool isRollAngleValid(void)
    {
        return isValid("RollAngle");

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