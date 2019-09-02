#ifndef __BDSCode17_h
#define __BDSCode17_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCode17:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0xf;
    CBDSCode17(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCode17(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void set05_ExtendedSquitterAirbornePosition(bool value)
    {
        write("05_ExtendedSquitterAirbornePosition",value);
    }

    bool get05_ExtendedSquitterAirbornePosition(void)

    {
        return getBool("05_ExtendedSquitterAirbornePosition");
    }

    bool is05_ExtendedSquitterAirbornePositionValid(void)
    {
        return isValid("05_ExtendedSquitterAirbornePosition");

    }

    void set06_ExtendedSquitterSurfacePosition(bool value)
    {
        write("06_ExtendedSquitterSurfacePosition",value);
    }

    bool get06_ExtendedSquitterSurfacePosition(void)

    {
        return getBool("06_ExtendedSquitterSurfacePosition");
    }

    bool is06_ExtendedSquitterSurfacePositionValid(void)
    {
        return isValid("06_ExtendedSquitterSurfacePosition");

    }

    void set07_ExtendedSquitterStatus(bool value)
    {
        write("07_ExtendedSquitterStatus",value);
    }

    bool get07_ExtendedSquitterStatus(void)

    {
        return getBool("07_ExtendedSquitterStatus");
    }

    bool is07_ExtendedSquitterStatusValid(void)
    {
        return isValid("07_ExtendedSquitterStatus");

    }

    void set08_ExtendedSquitterIDnAndCategory(bool value)
    {
        write("08_ExtendedSquitterIDnAndCategory",value);
    }

    bool get08_ExtendedSquitterIDnAndCategory(void)

    {
        return getBool("08_ExtendedSquitterIDnAndCategory");
    }

    bool is08_ExtendedSquitterIDnAndCategoryValid(void)
    {
        return isValid("08_ExtendedSquitterIDnAndCategory");

    }

    void set09_ExtendedSquitterAirborneVelocityInfo(bool value)
    {
        write("09_ExtendedSquitterAirborneVelocityInfo",value);
    }

    bool get09_ExtendedSquitterAirborneVelocityInfo(void)

    {
        return getBool("09_ExtendedSquitterAirborneVelocityInfo");
    }

    bool is09_ExtendedSquitterAirborneVelocityInfoValid(void)
    {
        return isValid("09_ExtendedSquitterAirborneVelocityInfo");

    }

    void set0A_ExtendedSquitterEventDrivenInfo(bool value)
    {
        write("0A_ExtendedSquitterEventDrivenInfo",value);
    }

    bool get0A_ExtendedSquitterEventDrivenInfo(void)

    {
        return getBool("0A_ExtendedSquitterEventDrivenInfo");
    }

    bool is0A_ExtendedSquitterEventDrivenInfoValid(void)
    {
        return isValid("0A_ExtendedSquitterEventDrivenInfo");

    }

    void set20_AircraftID(bool value)
    {
        write("20_AircraftID",value);
    }

    bool get20_AircraftID(void)

    {
        return getBool("20_AircraftID");
    }

    bool is20_AircraftIDValid(void)
    {
        return isValid("20_AircraftID");

    }

    void set2l_AircraftRegistrationNumber(bool value)
    {
        write("2l_AircraftRegistrationNumber",value);
    }

    bool get2l_AircraftRegistrationNumber(void)

    {
        return getBool("2l_AircraftRegistrationNumber");
    }

    bool is2l_AircraftRegistrationNumberValid(void)
    {
        return isValid("2l_AircraftRegistrationNumber");

    }

    void set40_SelectedVerticalIntention(bool value)
    {
        write("40_SelectedVerticalIntention",value);
    }

    bool get40_SelectedVerticalIntention(void)

    {
        return getBool("40_SelectedVerticalIntention");
    }

    bool is40_SelectedVerticalIntentionValid(void)
    {
        return isValid("40_SelectedVerticalIntention");

    }

    void set4l_NextWaypointIdentifier(bool value)
    {
        write("4l_NextWaypointIdentifier",value);
    }

    bool get4l_NextWaypointIdentifier(void)

    {
        return getBool("4l_NextWaypointIdentifier");
    }

    bool is4l_NextWaypointIdentifierValid(void)
    {
        return isValid("4l_NextWaypointIdentifier");

    }

    void set42_NextWaypointPosition(bool value)
    {
        write("42_NextWaypointPosition",value);
    }

    bool get42_NextWaypointPosition(void)

    {
        return getBool("42_NextWaypointPosition");
    }

    bool is42_NextWaypointPositionValid(void)
    {
        return isValid("42_NextWaypointPosition");

    }

    void set43_NextWaypointInfo(bool value)
    {
        write("43_NextWaypointInfo",value);
    }

    bool get43_NextWaypointInfo(void)

    {
        return getBool("43_NextWaypointInfo");
    }

    bool is43_NextWaypointInfoValid(void)
    {
        return isValid("43_NextWaypointInfo");

    }

    void set44_MeteorologicalRoutineReport(bool value)
    {
        write("44_MeteorologicalRoutineReport",value);
    }

    bool get44_MeteorologicalRoutineReport(void)

    {
        return getBool("44_MeteorologicalRoutineReport");
    }

    bool is44_MeteorologicalRoutineReportValid(void)
    {
        return isValid("44_MeteorologicalRoutineReport");

    }

    void set45_MeteorologicalHazardReport(bool value)
    {
        write("45_MeteorologicalHazardReport",value);
    }

    bool get45_MeteorologicalHazardReport(void)

    {
        return getBool("45_MeteorologicalHazardReport");
    }

    bool is45_MeteorologicalHazardReportValid(void)
    {
        return isValid("45_MeteorologicalHazardReport");

    }

    void set48_VHFChannelReport(bool value)
    {
        write("48_VHFChannelReport",value);
    }

    bool get48_VHFChannelReport(void)

    {
        return getBool("48_VHFChannelReport");
    }

    bool is48_VHFChannelReportValid(void)
    {
        return isValid("48_VHFChannelReport");

    }

    void set50_TrackAndTurnReport(bool value)
    {
        write("50_TrackAndTurnReport",value);
    }

    bool get50_TrackAndTurnReport(void)

    {
        return getBool("50_TrackAndTurnReport");
    }

    bool is50_TrackAndTurnReportValid(void)
    {
        return isValid("50_TrackAndTurnReport");

    }

    void set51_PositionCoarse(bool value)
    {
        write("51_PositionCoarse",value);
    }

    bool get51_PositionCoarse(void)

    {
        return getBool("51_PositionCoarse");
    }

    bool is51_PositionCoarseValid(void)
    {
        return isValid("51_PositionCoarse");

    }

    void set52_PositionFine(bool value)
    {
        write("52_PositionFine",value);
    }

    bool get52_PositionFine(void)

    {
        return getBool("52_PositionFine");
    }

    bool is52_PositionFineValid(void)
    {
        return isValid("52_PositionFine");

    }

    void set53_AirReferencedStateVector(bool value)
    {
        write("53_AirReferencedStateVector",value);
    }

    bool get53_AirReferencedStateVector(void)

    {
        return getBool("53_AirReferencedStateVector");
    }

    bool is53_AirReferencedStateVectorValid(void)
    {
        return isValid("53_AirReferencedStateVector");

    }

    void set54_Waypoint1(bool value)
    {
        write("54_Waypoint1",value);
    }

    bool get54_Waypoint1(void)

    {
        return getBool("54_Waypoint1");
    }

    bool is54_Waypoint1Valid(void)
    {
        return isValid("54_Waypoint1");

    }

    void set55_Waypoint2(bool value)
    {
        write("55_Waypoint2",value);
    }

    bool get55_Waypoint2(void)

    {
        return getBool("55_Waypoint2");
    }

    bool is55_Waypoint2Valid(void)
    {
        return isValid("55_Waypoint2");

    }

    void set56_Waypoint3(bool value)
    {
        write("56_Waypoint3",value);
    }

    bool get56_Waypoint3(void)

    {
        return getBool("56_Waypoint3");
    }

    bool is56_Waypoint3Valid(void)
    {
        return isValid("56_Waypoint3");

    }

    void set5F_QuasiStaticParameterMonitoring(bool value)
    {
        write("5F_QuasiStaticParameterMonitoring",value);
    }

    bool get5F_QuasiStaticParameterMonitoring(void)

    {
        return getBool("5F_QuasiStaticParameterMonitoring");
    }

    bool is5F_QuasiStaticParameterMonitoringValid(void)
    {
        return isValid("5F_QuasiStaticParameterMonitoring");

    }

    void set60_HeadingAndSpeedReport(bool value)
    {
        write("60_HeadingAndSpeedReport",value);
    }

    bool get60_HeadingAndSpeedReport(void)

    {
        return getBool("60_HeadingAndSpeedReport");
    }

    bool is60_HeadingAndSpeedReportValid(void)
    {
        return isValid("60_HeadingAndSpeedReport");

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