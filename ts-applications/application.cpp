#include "application.h"
#include "ts-messages/RouterRegister.h"
#include "ts-messages/RouterRegisterReply.h"
#include "ts-messages/SIFQueryGICB.h"
#include "ts-messages/header.h"

#include "ts-messages/BDSCode05.h"
#include "ts-messages/BDSCode06.h"
#include "ts-messages/BDSCode07.h"
#include "ts-messages/BDSCode08.h"
#include "ts-messages/BDSCode09Subtypes1n2.h"
#include "ts-messages/BDSCode09Subtypes3n4.h"
#include "ts-messages/BDSCode0A.h"
#include "ts-messages/BDSCode0B.h"
#include "ts-messages/BDSCode0C.h"
#include "ts-messages/BDSCode10.h"
#include "ts-messages/BDSCode17.h"
#include "ts-messages/BDSCode18.h"
#include "ts-messages/BDSCode19.h"
#include "ts-messages/BDSCode1A.h"
#include "ts-messages/BDSCode1B.h"
#include "ts-messages/BDSCode1C.h"
#include "ts-messages/BDSCode1D.h"
#include "ts-messages/BDSCode1E.h"
#include "ts-messages/BDSCode1F.h"
#include "ts-messages/BDSCode20.h"
#include "ts-messages/BDSCode21.h"
#include "ts-messages/BDSCode22.h"
#include "ts-messages/BDSCode25.h"
#include "ts-messages/BDSCode30.h"
#include "ts-messages/BDSCode40.h"
#include "ts-messages/BDSCode41.h"
#include "ts-messages/BDSCode42.h"
#include "ts-messages/BDSCode43.h"
#include "ts-messages/BDSCode44.h"
#include "ts-messages/BDSCode45.h"
#include "ts-messages/BDSCode48.h"
#include "ts-messages/BDSCode50.h"
#include "ts-messages/BDSCode51.h"
#include "ts-messages/BDSCode52.h"
#include "ts-messages/BDSCode53.h"
#include "ts-messages/BDSCode54.h"
#include "ts-messages/BDSCode55.h"
#include "ts-messages/BDSCode56.h"
#include "ts-messages/BDSCode5F.h"
#include "ts-messages/BDSCode60.h"
#include "ts-messages/BDSCode61.h"
#include "ts-messages/BDSCode65.h"
#include "ts-messages/BDSCodeE3.h"
#include "ts-messages/BDSCodeE4.h"
#include "ts-messages/BDSCodeE5.h"
#include "ts-messages/BDSCodeE6.h"
#include "ts-messages/BDSCodeE7.h"
#include "ts-messages/BDSCodeEA.h"

Application::Application()
{
    m_sockService.OnReceive([&](std::vector<std::string>& messages) -> std::string {
        return this->Receive(messages);
    });
}

Application::~Application()
{
}
string Application::Receive(std::vector<std::string>& messages)
{
    Header hdr;
    hdr.setMessage(messages[0]);
    if (hdr.getType() == "CRouterRegisterReply") {
        CRouterRegisterReply msg;
        msg.setMessage(messages[1]);
        std::cout << msg.getToken() << std::endl;
        return "";
    } else {
        CSIFQueryGICB req;
        req.setMessage(messages[1]);
        string msgType = queryMessage(req.getBDSRegister());

        std::string dest = hdr.getDestination();
        Header dstHdr;
        dstHdr.setDestination(dest);
        dstHdr.setSource(hdr.getSource());
        dstHdr.setType(msgType);
        return m_sockService.Send(dest, { dstHdr.getMessage(), m_msg });
    }
}
string Application::Receive(const string& strMsg)
{
}
void Application::Register(const char* routerEp)
{
    CRouterRegister message;
    Header hdr;

    hdr.setDestination("router");
    hdr.setSource(0);
    hdr.setType("CRouterRegister");

    message.setAddressUri("inproc://gicb");
    message.setName("gicb");

    string header = hdr.getMessage();
    string req = message.getMessage();

    auto reply = m_sockService.Send(routerEp, { header, req });
    std::cout << "App register: " << reply << std::endl;
}

string Application::queryMessage(const int& index)
{
    switch (index) {
    case 0:
        return messageBDS05Data();
    case 1:
        return messageBDS06Data();
    case 2:
        return messageBDS07Data();
    case 3:
        return messageBDS08Data();
    case 4:
        return messageBDSCode09Subtypes1n2Data();
    case 5:
        return messageBDSCode09Subtypes3n4Data();
    case 6:
        return messageBDSCode0AData();
    case 7:
        return messageBDSCode0BData();
    case 8:
        return messageBDSCode0CData();
    case 9:
        return messageBDSCode10Data();
    case 10:
        return messageBDSCode17Data();
    case 11:
        return messageBDSCode18Data();
    case 12:
        return messageBDSCode19Data();
    case 13:
        return messageBDSCode1AData();
    case 14:
        return messageBDSCode1BData();
    case 15:
        return messageBDSCode1CData();
    case 16:
        return messageBDSCode1DData();
    case 17:
        return messageBDSCode1EData();
    case 18:
        return messageBDSCode1FData();
    case 19:
        return messageBDSCode20Data();
    case 20:
        return messageBDSCode21Data();
    case 21:
        return messageBDSCode22Data();
    case 22:
        return messageBDSCode25Data();
    case 23:
        return messageBDSCode30Data();
    case 24:
        return messageBDSCode40Data();
    case 25:
        return messageBDSCode41Data();
    case 26:
        return messageBDSCode42Data();
    case 27:
        return messageBDSCode43Data();
    case 28:
        return messageBDSCode44Data();
    case 29:
        return messageBDSCode45Data();
    case 30:
        return messageBDSCode48Data();
    case 31:
        return messageBDSCode50Data();
    case 32:
        return messageBDSCode51Data();
    case 33:
        return messageBDSCode52Data();
    case 34:
        return messageBDSCode53Data();
    case 35:
        return messageBDSCode54Data();
    case 36:
        return messageBDSCode55Data();
    case 37:
        return messageBDSCode56Data();
    case 38:
        return messageBDSCode5FData();
    case 39:
        return messageBDSCode60Data();
    case 40:
        return messageBDSCode61Data();
    case 41:
        return messageBDSCode65Data();
    case 42:
        return messageBDSCodeE3Data();
    case 43:
        return messageBDSCodeE4Data();
    case 44:
        return messageBDSCodeE5Data();
    case 45:
        return messageBDSCodeE6Data();
    case 46:
        return messageBDSCodeE7Data();
    case 47:
        return messageBDSCodeEAData();
    default:
        return "";
    }
}

string Application::messageBDS05Data()
{
    CBDSCode05 bdsCode;
    bdsCode.setFormatTypeCode(0);
    bdsCode.setSurveillanceStatus(0);
    bdsCode.setsingleAntennaFlag(1);
    bdsCode.setUTCTimeSync(1);
    bdsCode.setAltitude(10000);
    bdsCode.setCPRFormat(1);
    bdsCode.setEncodedLatitude(-73.8765);
    bdsCode.setEncodedLongitude(81.4567);
    m_msg = bdsCode.getMessage();
    return "CBDSCode05";
}

string Application::messageBDS06Data()
{
    CBDSCode06 bdsCode;
    bdsCode.setFormatTypeCode(0);
    bdsCode.setMovement(40);
    bdsCode.setGroundTrackStatus(1);
    bdsCode.setGroundTrack(10);
    bdsCode.setUTCTimeSync(1);
    bdsCode.setCPRFormat(1);
    bdsCode.setEncodedLatitude(-73.8765);
    bdsCode.setEncodedLongitude(81.4567);
    m_msg = bdsCode.getMessage();
    return "CBDSCode06";
}

string Application::messageBDS07Data()
{
    CBDSCode07 bdsCode;
    bdsCode.setTransmissionRateSubfield(0);
    bdsCode.setAltitudeTypeSubfield(0);
    m_msg = bdsCode.getMessage();
    return "CBDSCode07";
}

string Application::messageBDS08Data()
{
    CBDSCode08 bdsCode;
    bdsCode.setFormatTypeCode(0);
    bdsCode.setAircraftCategory(0);
    bdsCode.setAircraftID("01234ABC");
    m_msg = bdsCode.getMessage();
    return "CBDSCode08";
}

string Application::messageBDSCode09Subtypes1n2Data()
{
    CBDSCode09Subtypes1n2 bdsCode;
    bdsCode.setFormatTypeCode(19);
    bdsCode.setSubtype(1);
    bdsCode.setintentChangeFlag(0);
    bdsCode.setiFRCapabilityFlag(0);
    bdsCode.setNavigationUncertaintyCategoryForVelocity(1);
    bdsCode.setEastWestVelocityDirection(0);
    bdsCode.setEastWestVelocity(7);
    bdsCode.setNorthSouthVelocityDirection(0);
    bdsCode.setNorthSouthVelocity(5);
    bdsCode.setVerticalRateSource(0);
    bdsCode.setVerticalRateSign(0);
    bdsCode.setVerticalRate(0);
    bdsCode.setGNSSAltSign(0);
    bdsCode.setGNSSAltDifferenceFromBaroAlt(0);
    m_msg = bdsCode.getMessage();
    return "CBDSCode09Subtypes1n2";
}

string Application::messageBDSCode09Subtypes3n4Data()
{
    CBDSCode09Subtypes3n4 bdsCode;
    bdsCode.setFormatTypeCode(19);
    bdsCode.setSubtype(3);
    bdsCode.setintentChangeFlag(0);
    bdsCode.setiFRCapabilityFlag(0);
    bdsCode.setNavigationUncertaintyCategoryForVelocity(1);
    bdsCode.setMagneticHeadingStatus(1);
    bdsCode.setMagneticHeading(95);
    bdsCode.setAirspeedType(0);
    bdsCode.setAirspeed(1021);
    bdsCode.setVerticalRateSource(0);
    bdsCode.setVerticalRateSign(0);
    bdsCode.setVerticalRate(64);
    bdsCode.setGeometricHeightDifferenceSign(0);
    bdsCode.setGeometricHeightDifferenceFromBaroAlt(25);
    m_msg = bdsCode.getMessage();
    return "CBDSCode09Subtypes3n4";
}

std::string Application::messageBDSCode0AData()
{
    CBDSCode0A bdsCode;
    bdsCode.setRawData1_8("0 1 0 1 0 1 0 1");
    bdsCode.setRawData9_16("0 1 0 1 0 1 0 1");
    bdsCode.setRawData17_24("0 1 0 1 0 1 0 1");
    bdsCode.setRawData25_32("0 1 0 1 0 1 0 1");
    bdsCode.setRawData33_40("0 1 0 1 0 1 0 1");
    bdsCode.setRawData41_48("0 1 0 1 0 1 0 1");
    bdsCode.setRawData49_56("0 1 0 1 0 1 0 1");
    m_msg = bdsCode.getMessage();
    return "CBDSCode0A";
}

string Application::messageBDSCode0BData()
{
    CBDSCode0B bdsCode;
    bdsCode.setTrueAirspeedStatus(1);
    bdsCode.setTrueAirspeed(800);
    bdsCode.setHeadingSwitch(0);
    bdsCode.setHeadingStatus(1);
    bdsCode.setHeadingSign(1);
    bdsCode.setHeading(120);
    bdsCode.setTrueTrackAngleStatus(1);
    bdsCode.setTrueTrackAngleSign(0);
    bdsCode.setTrueTrackAngle(82);
    bdsCode.setGroundSpeedStatus(1);
    bdsCode.setGroundSpeed(900);
    m_msg = bdsCode.getMessage();
    return "CBDSCode0B";
}

string Application::messageBDSCode0CData()
{
    CBDSCode0C bdsCode;
    bdsCode.setAltitudeLevelStatus(1);
    bdsCode.setAltitudeLevel(31000);
    bdsCode.setNextCourseStatus(1);
    bdsCode.setNextCourseSign(0);
    bdsCode.setNextCourse(130);
    bdsCode.setWaypointStatus(1);
    bdsCode.setNextWaypointTime(64);
    bdsCode.setVerticalVelocityStatus(1);
    bdsCode.setVerticalVelocitySign(0);
    bdsCode.setVerticalVelocity(12000);
    bdsCode.setRollAngleStatus(1);
    bdsCode.setRollAngleSign(0);
    bdsCode.setRollAngle(72);
    m_msg = bdsCode.getMessage();
    return "CBDSCode0C";
}

string Application::messageBDSCode10Data()
{
    CBDSCode10 bdsCode;
    bdsCode.setBDSCode("10");
    bdsCode.setcontinuationFlag(1);
    bdsCode.setOverlayCommandCapability(0);
    bdsCode.setACASStatus(1);
    bdsCode.setModeSSubnetworkVersion(4);
    bdsCode.setTransponderEnhancedProtocolIndicator(1);
    bdsCode.setModeSSpecificServicesCapability(1);
    bdsCode.setUplinkELM(0);
    bdsCode.setDownlinkELM(1);
    bdsCode.setAircraftIDCapability(1);
    bdsCode.setSquitterCapabilitySubfield(1);
    bdsCode.setSurveillanceIdentifierCode(0);
    bdsCode.setCommonUsageGICBCapabilityReport(1);
    bdsCode.setHybridSurveillanceCapability(1);
    bdsCode.setACASTAsRAsGeneration(1);
    bdsCode.setMOPSDocument(2);
    bdsCode.setDTESubAddrStatus0(1);
    bdsCode.setDTESubAddrStatus1(1);
    bdsCode.setDTESubAddrStatus2(1);
    bdsCode.setDTESubAddrStatus3(1);
    bdsCode.setDTESubAddrStatus4(1);
    bdsCode.setDTESubAddrStatus5(1);
    bdsCode.setDTESubAddrStatus6(1);
    bdsCode.setDTESubAddrStatus7(1);
    bdsCode.setDTESubAddrStatus8(1);
    bdsCode.setDTESubAddrStatus9(1);
    bdsCode.setDTESubAddrStatus10(1);
    bdsCode.setDTESubAddrStatus11(1);
    bdsCode.setDTESubAddrStatus12(1);
    bdsCode.setDTESubAddrStatus13(1);
    bdsCode.setDTESubAddrStatus14(1);
    bdsCode.setDTESubAddrStatus15(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode10";
}

string Application::messageBDSCode17Data()
{
    CBDSCode17 bdsCode;
    bdsCode.set05_ExtendedSquitterAirbornePosition(1);
    bdsCode.set06_ExtendedSquitterSurfacePosition(1);
    bdsCode.set07_ExtendedSquitterStatus(1);
    bdsCode.set08_ExtendedSquitterIDnAndCategory(1);
    bdsCode.set09_ExtendedSquitterAirborneVelocityInfo(1);
    bdsCode.set0A_ExtendedSquitterEventDrivenInfo(1);
    bdsCode.set20_AircraftID(1);
    bdsCode.set2l_AircraftRegistrationNumber(1);
    bdsCode.set40_SelectedVerticalIntention(1);
    bdsCode.set4l_NextWaypointIdentifier(1);
    bdsCode.set42_NextWaypointPosition(1);
    bdsCode.set43_NextWaypointInfo(1);
    bdsCode.set44_MeteorologicalRoutineReport(1);
    bdsCode.set45_MeteorologicalHazardReport(1);
    bdsCode.set48_VHFChannelReport(1);
    bdsCode.set50_TrackAndTurnReport(1);
    bdsCode.set51_PositionCoarse(1);
    bdsCode.set52_PositionFine(1);
    bdsCode.set53_AirReferencedStateVector(1);
    bdsCode.set54_Waypoint1(1);
    bdsCode.set55_Waypoint2(1);
    bdsCode.set56_Waypoint3(1);
    bdsCode.set5F_QuasiStaticParameterMonitoring(1);
    bdsCode.set60_HeadingAndSpeedReport(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode17";
}

string Application::messageBDSCode18Data()
{
    CBDSCode18 bdsCode;
    bdsCode.setBDS_38(1);
    bdsCode.setBDS_37(1);
    bdsCode.setBDS_36(1);
    bdsCode.setBDS_35(1);
    bdsCode.setBDS_34(1);
    bdsCode.setBDS_33(1);
    bdsCode.setBDS_32(1);
    bdsCode.setBDS_31(1);
    bdsCode.setBDS_30(1);
    bdsCode.setBDS_2f(1);
    bdsCode.setBDS_2e(1);
    bdsCode.setBDS_2d(1);
    bdsCode.setBDS_2c(1);
    bdsCode.setBDS_2b(1);
    bdsCode.setBDS_2a(1);
    bdsCode.setBDS_29(1);
    bdsCode.setBDS_28(1);
    bdsCode.setBDS_27(1);
    bdsCode.setBDS_26(1);
    bdsCode.setBDS_25(1);
    bdsCode.setBDS_24(1);
    bdsCode.setBDS_23(1);
    bdsCode.setBDS_22(1);
    bdsCode.setBDS_21(1);
    bdsCode.setBDS_20(1);
    bdsCode.setBDS_1f(1);
    bdsCode.setBDS_1e(1);
    bdsCode.setBDS_1d(1);
    bdsCode.setBDS_1c(1);
    bdsCode.setBDS_1b(1);
    bdsCode.setBDS_1a(1);
    bdsCode.setBDS_19(1);
    bdsCode.setBDS_18(1);
    bdsCode.setBDS_17(1);
    bdsCode.setBDS_16(1);
    bdsCode.setBDS_15(1);
    bdsCode.setBDS_14(1);
    bdsCode.setBDS_13(1);
    bdsCode.setBDS_12(1);
    bdsCode.setBDS_11(1);
    bdsCode.setBDS_10(1);
    bdsCode.setBDS_f(1);
    bdsCode.setBDS_e(1);
    bdsCode.setBDS_d(1);
    bdsCode.setBDS_c(1);
    bdsCode.setBDS_b(1);
    bdsCode.setBDS_a(1);
    bdsCode.setBDS_9(1);
    bdsCode.setBDS_8(1);
    bdsCode.setBDS_7(1);
    bdsCode.setBDS_6(1);
    bdsCode.setBDS_5(1);
    bdsCode.setBDS_4(1);
    bdsCode.setBDS_3(1);
    bdsCode.setBDS_2(1);
    bdsCode.setBDS_1(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode18";
}

string Application::messageBDSCode19Data()
{
    CBDSCode19 bdsCode;
    bdsCode.setBDS_70(1);
    bdsCode.setBDS_6f(1);
    bdsCode.setBDS_6e(1);
    bdsCode.setBDS_6d(1);
    bdsCode.setBDS_6c(1);
    bdsCode.setBDS_6b(1);
    bdsCode.setBDS_6a(1);
    bdsCode.setBDS_69(1);
    bdsCode.setBDS_68(1);
    bdsCode.setBDS_67(1);
    bdsCode.setBDS_66(1);
    bdsCode.setBDS_65(1);
    bdsCode.setBDS_64(1);
    bdsCode.setBDS_63(1);
    bdsCode.setBDS_62(1);
    bdsCode.setBDS_61(1);
    bdsCode.setBDS_60(1);
    bdsCode.setBDS_5f(1);
    bdsCode.setBDS_5e(1);
    bdsCode.setBDS_5d(1);
    bdsCode.setBDS_5c(1);
    bdsCode.setBDS_5b(1);
    bdsCode.setBDS_5a(1);
    bdsCode.setBDS_59(1);
    bdsCode.setBDS_58(1);
    bdsCode.setBDS_57(1);
    bdsCode.setBDS_56(1);
    bdsCode.setBDS_55(1);
    bdsCode.setBDS_54(1);
    bdsCode.setBDS_53(1);
    bdsCode.setBDS_52(1);
    bdsCode.setBDS_51(1);
    bdsCode.setBDS_50(1);
    bdsCode.setBDS_4f(1);
    bdsCode.setBDS_4e(1);
    bdsCode.setBDS_4d(1);
    bdsCode.setBDS_4c(1);
    bdsCode.setBDS_4b(1);
    bdsCode.setBDS_4a(1);
    bdsCode.setBDS_49(1);
    bdsCode.setBDS_48(1);
    bdsCode.setBDS_47(1);
    bdsCode.setBDS_46(1);
    bdsCode.setBDS_45(1);
    bdsCode.setBDS_44(1);
    bdsCode.setBDS_43(1);
    bdsCode.setBDS_42(1);
    bdsCode.setBDS_41(1);
    bdsCode.setBDS_40(1);
    bdsCode.setBDS_3f(1);
    bdsCode.setBDS_3e(1);
    bdsCode.setBDS_3d(1);
    bdsCode.setBDS_3c(1);
    bdsCode.setBDS_3b(1);
    bdsCode.setBDS_3a(1);
    bdsCode.setBDS_39(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode19";
}

string Application::messageBDSCode1AData()
{
    CBDSCode1A bdsCode;
    bdsCode.setBDS_a8(1);
    bdsCode.setBDS_a7(1);
    bdsCode.setBDS_a6(1);
    bdsCode.setBDS_a5(1);
    bdsCode.setBDS_a4(1);
    bdsCode.setBDS_a3(1);
    bdsCode.setBDS_a2(1);
    bdsCode.setBDS_a1(1);
    bdsCode.setBDS_a0(1);
    bdsCode.setBDS_9f(1);
    bdsCode.setBDS_9e(1);
    bdsCode.setBDS_9d(1);
    bdsCode.setBDS_9c(1);
    bdsCode.setBDS_9b(1);
    bdsCode.setBDS_9a(1);
    bdsCode.setBDS_99(1);
    bdsCode.setBDS_98(1);
    bdsCode.setBDS_97(1);
    bdsCode.setBDS_96(1);
    bdsCode.setBDS_95(1);
    bdsCode.setBDS_94(1);
    bdsCode.setBDS_93(1);
    bdsCode.setBDS_92(1);
    bdsCode.setBDS_91(1);
    bdsCode.setBDS_90(1);
    bdsCode.setBDS_8f(1);
    bdsCode.setBDS_8e(1);
    bdsCode.setBDS_8d(1);
    bdsCode.setBDS_8c(1);
    bdsCode.setBDS_8b(1);
    bdsCode.setBDS_8a(1);
    bdsCode.setBDS_89(1);
    bdsCode.setBDS_88(1);
    bdsCode.setBDS_87(1);
    bdsCode.setBDS_86(1);
    bdsCode.setBDS_85(1);
    bdsCode.setBDS_84(1);
    bdsCode.setBDS_83(1);
    bdsCode.setBDS_82(1);
    bdsCode.setBDS_81(1);
    bdsCode.setBDS_80(1);
    bdsCode.setBDS_7f(1);
    bdsCode.setBDS_7e(1);
    bdsCode.setBDS_7d(1);
    bdsCode.setBDS_7c(1);
    bdsCode.setBDS_7b(1);
    bdsCode.setBDS_7a(1);
    bdsCode.setBDS_79(1);
    bdsCode.setBDS_78(1);
    bdsCode.setBDS_77(1);
    bdsCode.setBDS_76(1);
    bdsCode.setBDS_75(1);
    bdsCode.setBDS_74(1);
    bdsCode.setBDS_73(1);
    bdsCode.setBDS_72(1);
    bdsCode.setBDS_71(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode1A";
}

string Application::messageBDSCode1BData()
{
    CBDSCode1B bdsCode;
    bdsCode.setBDS_e0(1);
    bdsCode.setBDS_df(1);
    bdsCode.setBDS_de(1);
    bdsCode.setBDS_dd(1);
    bdsCode.setBDS_dc(1);
    bdsCode.setBDS_db(1);
    bdsCode.setBDS_da(1);
    bdsCode.setBDS_d9(1);
    bdsCode.setBDS_d8(1);
    bdsCode.setBDS_d7(1);
    bdsCode.setBDS_d6(1);
    bdsCode.setBDS_d5(1);
    bdsCode.setBDS_d4(1);
    bdsCode.setBDS_d3(1);
    bdsCode.setBDS_d2(1);
    bdsCode.setBDS_d1(1);
    bdsCode.setBDS_d0(1);
    bdsCode.setBDS_cf(1);
    bdsCode.setBDS_ce(1);
    bdsCode.setBDS_cd(1);
    bdsCode.setBDS_cc(1);
    bdsCode.setBDS_cb(1);
    bdsCode.setBDS_ca(1);
    bdsCode.setBDS_c9(1);
    bdsCode.setBDS_c8(1);
    bdsCode.setBDS_c7(1);
    bdsCode.setBDS_c6(1);
    bdsCode.setBDS_c5(1);
    bdsCode.setBDS_c4(1);
    bdsCode.setBDS_c3(1);
    bdsCode.setBDS_c2(1);
    bdsCode.setBDS_c1(1);
    bdsCode.setBDS_c0(1);
    bdsCode.setBDS_bf(1);
    bdsCode.setBDS_be(1);
    bdsCode.setBDS_bd(1);
    bdsCode.setBDS_bc(1);
    bdsCode.setBDS_bb(1);
    bdsCode.setBDS_ba(1);
    bdsCode.setBDS_b9(1);
    bdsCode.setBDS_b8(1);
    bdsCode.setBDS_b7(1);
    bdsCode.setBDS_b6(1);
    bdsCode.setBDS_b5(1);
    bdsCode.setBDS_b4(1);
    bdsCode.setBDS_b3(1);
    bdsCode.setBDS_b2(1);
    bdsCode.setBDS_b1(1);
    bdsCode.setBDS_b0(1);
    bdsCode.setBDS_af(1);
    bdsCode.setBDS_ae(1);
    bdsCode.setBDS_ad(1);
    bdsCode.setBDS_ac(1);
    bdsCode.setBDS_ab(1);
    bdsCode.setBDS_aa(1);
    bdsCode.setBDS_a9(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode1B";
}

string Application::messageBDSCode1CData()
{
    CBDSCode1C bdsCode;
    bdsCode.setBDS_ff(1);
    bdsCode.setBDS_fe(1);
    bdsCode.setBDS_fd(1);
    bdsCode.setBDS_fc(1);
    bdsCode.setBDS_fb(1);
    bdsCode.setBDS_fa(1);
    bdsCode.setBDS_f9(1);
    bdsCode.setBDS_f8(1);
    bdsCode.setBDS_f7(1);
    bdsCode.setBDS_f6(1);
    bdsCode.setBDS_f5(1);
    bdsCode.setBDS_f4(1);
    bdsCode.setBDS_f3(1);
    bdsCode.setBDS_f2(1);
    bdsCode.setBDS_f1(1);
    bdsCode.setBDS_f0(1);
    bdsCode.setBDS_ef(1);
    bdsCode.setBDS_ee(1);
    bdsCode.setBDS_ed(1);
    bdsCode.setBDS_ec(1);
    bdsCode.setBDS_eb(1);
    bdsCode.setBDS_ea(1);
    bdsCode.setBDS_e9(1);
    bdsCode.setBDS_e8(1);
    bdsCode.setBDS_e7(1);
    bdsCode.setBDS_e6(1);
    bdsCode.setBDS_e5(1);
    bdsCode.setBDS_e4(1);
    bdsCode.setBDS_e3(1);
    bdsCode.setBDS_e2(1);
    bdsCode.setBDS_e1(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode1C";
}

string Application::messageBDSCode1DData()
{
    CBDSCode1D bdsCode;
    bdsCode.setUplinkMSPChannel1(1);
    bdsCode.setUplinkMSPChannel2(1);
    bdsCode.setUplinkMSPChannel3(1);
    bdsCode.setUplinkMSPChannel4(1);
    bdsCode.setUplinkMSPChannel5(1);
    bdsCode.setUplinkMSPChannel6(1);
    bdsCode.setUplinkMSPChannel7(1);
    bdsCode.setUplinkMSPChannel8(1);
    bdsCode.setUplinkMSPChannel9(1);
    bdsCode.setUplinkMSPChannel10(1);
    bdsCode.setUplinkMSPChannel11(1);
    bdsCode.setUplinkMSPChannel12(1);
    bdsCode.setUplinkMSPChannel13(1);
    bdsCode.setUplinkMSPChannel14(1);
    bdsCode.setUplinkMSPChannel15(1);
    bdsCode.setUplinkMSPChannel16(1);
    bdsCode.setUplinkMSPChannel17(1);
    bdsCode.setUplinkMSPChannel18(1);
    bdsCode.setUplinkMSPChannel19(1);
    bdsCode.setUplinkMSPChannel20(1);
    bdsCode.setUplinkMSPChannel21(1);
    bdsCode.setUplinkMSPChannel22(1);
    bdsCode.setUplinkMSPChannel23(1);
    bdsCode.setUplinkMSPChannel24(1);
    bdsCode.setUplinkMSPChannel25(1);
    bdsCode.setUplinkMSPChannel26(1);
    bdsCode.setUplinkMSPChannel27(1);
    bdsCode.setUplinkMSPChannel28(1);
    bdsCode.setDownlinkMSPChannel1(1);
    bdsCode.setDownlinkMSPChannel2(1);
    bdsCode.setDownlinkMSPChannel3(1);
    bdsCode.setDownlinkMSPChannel4(1);
    bdsCode.setDownlinkMSPChannel5(1);
    bdsCode.setDownlinkMSPChannel6(1);
    bdsCode.setDownlinkMSPChannel7(1);
    bdsCode.setDownlinkMSPChannel8(1);
    bdsCode.setDownlinkMSPChannel9(1);
    bdsCode.setDownlinkMSPChannel10(1);
    bdsCode.setDownlinkMSPChannel11(1);
    bdsCode.setDownlinkMSPChannel12(1);
    bdsCode.setDownlinkMSPChannel13(1);
    bdsCode.setDownlinkMSPChannel14(1);
    bdsCode.setDownlinkMSPChannel15(1);
    bdsCode.setDownlinkMSPChannel16(1);
    bdsCode.setDownlinkMSPChannel17(1);
    bdsCode.setDownlinkMSPChannel18(1);
    bdsCode.setDownlinkMSPChannel19(1);
    bdsCode.setDownlinkMSPChannel20(1);
    bdsCode.setDownlinkMSPChannel21(1);
    bdsCode.setDownlinkMSPChannel22(1);
    bdsCode.setDownlinkMSPChannel23(1);
    bdsCode.setDownlinkMSPChannel24(1);
    bdsCode.setDownlinkMSPChannel25(1);
    bdsCode.setDownlinkMSPChannel26(1);
    bdsCode.setDownlinkMSPChannel27(1);
    bdsCode.setDownlinkMSPChannel28(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode1D";
}

string Application::messageBDSCode1EData()
{
    CBDSCode1E bdsCode;
    bdsCode.setUplinkMSPChannel29(1);
    bdsCode.setUplinkMSPChannel30(1);
    bdsCode.setUplinkMSPChannel31(1);
    bdsCode.setUplinkMSPChannel32(1);
    bdsCode.setUplinkMSPChannel33(1);
    bdsCode.setUplinkMSPChannel34(1);
    bdsCode.setUplinkMSPChannel35(1);
    bdsCode.setUplinkMSPChannel36(1);
    bdsCode.setUplinkMSPChannel37(1);
    bdsCode.setUplinkMSPChannel38(1);
    bdsCode.setUplinkMSPChannel39(1);
    bdsCode.setUplinkMSPChannel40(1);
    bdsCode.setUplinkMSPChannel41(1);
    bdsCode.setUplinkMSPChannel42(1);
    bdsCode.setUplinkMSPChannel43(1);
    bdsCode.setUplinkMSPChannel44(1);
    bdsCode.setUplinkMSPChannel45(1);
    bdsCode.setUplinkMSPChannel46(1);
    bdsCode.setUplinkMSPChannel47(1);
    bdsCode.setUplinkMSPChannel48(1);
    bdsCode.setUplinkMSPChannel49(1);
    bdsCode.setUplinkMSPChannel50(1);
    bdsCode.setUplinkMSPChannel51(1);
    bdsCode.setUplinkMSPChannel52(1);
    bdsCode.setUplinkMSPChannel53(1);
    bdsCode.setUplinkMSPChannel54(1);
    bdsCode.setUplinkMSPChannel55(1);
    bdsCode.setUplinkMSPChannel56(1);
    bdsCode.setDownlinkMSPChannel29(1);
    bdsCode.setDownlinkMSPChannel30(1);
    bdsCode.setDownlinkMSPChannel31(1);
    bdsCode.setDownlinkMSPChannel32(1);
    bdsCode.setDownlinkMSPChannel33(1);
    bdsCode.setDownlinkMSPChannel34(1);
    bdsCode.setDownlinkMSPChannel35(1);
    bdsCode.setDownlinkMSPChannel36(1);
    bdsCode.setDownlinkMSPChannel37(1);
    bdsCode.setDownlinkMSPChannel38(1);
    bdsCode.setDownlinkMSPChannel39(1);
    bdsCode.setDownlinkMSPChannel40(1);
    bdsCode.setDownlinkMSPChannel41(1);
    bdsCode.setDownlinkMSPChannel42(1);
    bdsCode.setDownlinkMSPChannel43(1);
    bdsCode.setDownlinkMSPChannel44(1);
    bdsCode.setDownlinkMSPChannel45(1);
    bdsCode.setDownlinkMSPChannel46(1);
    bdsCode.setDownlinkMSPChannel47(1);
    bdsCode.setDownlinkMSPChannel48(1);
    bdsCode.setDownlinkMSPChannel49(1);
    bdsCode.setDownlinkMSPChannel50(1);
    bdsCode.setDownlinkMSPChannel51(1);
    bdsCode.setDownlinkMSPChannel52(1);
    bdsCode.setDownlinkMSPChannel53(1);
    bdsCode.setDownlinkMSPChannel54(1);
    bdsCode.setDownlinkMSPChannel55(1);
    bdsCode.setDownlinkMSPChannel56(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode1E";
}

string Application::messageBDSCode1FData()
{
    CBDSCode1F bdsCode;
    bdsCode.setUplinkMSPChannel57(1);
    bdsCode.setUplinkMSPChannel58(1);
    bdsCode.setUplinkMSPChannel59(1);
    bdsCode.setUplinkMSPChannel60(1);
    bdsCode.setUplinkMSPChannel61(1);
    bdsCode.setUplinkMSPChannel62(1);
    bdsCode.setUplinkMSPChannel63(1);
    bdsCode.setDownlinkMSPChannel57(1);
    bdsCode.setDownlinkMSPChannel58(1);
    bdsCode.setDownlinkMSPChannel59(1);
    bdsCode.setDownlinkMSPChannel60(1);
    bdsCode.setDownlinkMSPChannel61(1);
    bdsCode.setDownlinkMSPChannel62(1);
    bdsCode.setDownlinkMSPChannel63(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode1F";
}

string Application::messageBDSCode20Data()
{
    CBDSCode20 bdsCode;
    bdsCode.setBDSCode("20");
    bdsCode.setAircraftID("01234ABC");
    m_msg = bdsCode.getMessage();
    return "CBDSCode20";
}

string Application::messageBDSCode21Data()
{
    CBDSCode21 bdsCode;
    bdsCode.setAircraftRegistrationStatus(1);
    bdsCode.setAircraftRegistrationNumber("0123456");
    bdsCode.setICAOAirlineRegistrationStatus(1);
    bdsCode.setICAOAirlineRegistrationMarking("01");
    m_msg = bdsCode.getMessage();
    return "CBDSCode21";
}

string Application::messageBDSCode22Data()
{
    CBDSCode22 bdsCode;
    bdsCode.setAntenna1AntennaType(1);
    bdsCode.setAntenna1XPostion(28);
    bdsCode.setAntenna1ZPostion(14);
    bdsCode.setAntenna2AntennaType(1);
    bdsCode.setAntenna2XPostion(27);
    bdsCode.setAntenna2ZPostion(15);
    bdsCode.setAntenna3AntennaType(1);
    bdsCode.setAntenna3XPostion(24);
    bdsCode.setAntenna3ZPostion(11);
    bdsCode.setAntenna4AntennaType(1);
    bdsCode.setAntenna4XPostion(25);
    bdsCode.setAntenna4ZPostion(14);
    m_msg = bdsCode.getMessage();
    return "CBDSCode22";
}

string Application::messageBDSCode25Data()
{
    CBDSCode25 bdsCode;
    bdsCode.setAircraftType("A");
    bdsCode.setEngines(2);
    bdsCode.setEngineType("B");
    bdsCode.setModelDesignation(10234);
    bdsCode.setWakeTurbulenceCategory("C");
    m_msg = bdsCode.getMessage();
    return "CBDSCode25";
}

string Application::messageBDSCode30Data()
{
    CBDSCode30 bdsCode;
    bdsCode.setBDSCode("30");
    bdsCode.setARABit41(0);
    bdsCode.setARABit42(0);
    bdsCode.setARABit43(0);
    bdsCode.setARABit44(0);
    bdsCode.setARABit45(0);
    bdsCode.setARABit46(0);
    bdsCode.setARABit47(0);
    bdsCode.setDoNotPassBelow(0);
    bdsCode.setDoNotPassAbove(0);
    bdsCode.setDoNotTurnLeft(0);
    bdsCode.setDoNotTurnRight(0);
    bdsCode.setRATerminated(0);
    bdsCode.setMultipleThreatEncouter(0);
    bdsCode.setThreatTypeIndicator(2);
    bdsCode.setTID("01234ABC");
    bdsCode.setTIDA("0123ABC");
    bdsCode.setTIDR(1);
    bdsCode.setTIDB(0);
    m_msg = bdsCode.getMessage();
    return "CBDSCode30";
}

string Application::messageBDSCode40Data()
{
    CBDSCode40 bdsCode;
    bdsCode.setMCPnFCUSelectedAltitudeStatus(1);
    bdsCode.setMCPnFCUSelectedAltitude(28000);
    bdsCode.setFMSSelectedAltitudeStatus(1);
    bdsCode.setFMSSelectedAltitude(27000);
    bdsCode.setBarometricPressureStatus(1);
    bdsCode.setBarometricPressureMinus800mb(135);
    bdsCode.setMCPnFCUModeStatus(1);
    bdsCode.setVNAVMode(1);
    bdsCode.setAltHoldMode(1);
    bdsCode.setApproachMode(1);
    bdsCode.setTargetAltSourceStatus(1);
    bdsCode.setTargetAltSource(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode40";
}

string Application::messageBDSCode41Data()
{
    CBDSCode41 bdsCode;
    bdsCode.setWaypointNameStatus(1);
    bdsCode.setWaypointName("01234ABCD");
    m_msg = bdsCode.getMessage();
    return "CBDSCode41";
}

string Application::messageBDSCode42Data()
{
    CBDSCode42 bdsCode;
    bdsCode.setWaypointLatitudeStatus(1);
    bdsCode.setWaypointLatitudeSign(0);
    bdsCode.setWaypointLatitude(71);
    bdsCode.setWaypointLongitudeStatus(1);
    bdsCode.setWaypointLongitudeSign(0);
    bdsCode.setWaypointLongitude(78);
    bdsCode.setWaypointCrossingAltitudeStatus(1);
    bdsCode.setWaypointCrossingAltitudeSign(1);
    bdsCode.setWaypointCrossingAltitude(28160);
    m_msg = bdsCode.getMessage();
    return "CBDSCode42";
}

string Application::messageBDSCode43Data()
{
    CBDSCode43 bdsCode;
    bdsCode.setBearingToWaypointStatus(1);
    bdsCode.setBearingToWaypointSign(0);
    bdsCode.setBearingToWaypoint(83);
    bdsCode.setTimeToGoStatus(1);
    bdsCode.setTimeToGo(176);
    bdsCode.setDistanceToGoStatus(1);
    bdsCode.setDistanceToGo(2698);
    m_msg = bdsCode.getMessage();
    return "CBDSCode43";
}

string Application::messageBDSCode44Data()
{
    CBDSCode44 bdsCode;
    bdsCode.setFOMSource(1);
    bdsCode.setWindSpeednDirectionStatus(1);
    bdsCode.setWindSpeed(218);
    bdsCode.setWindDirection(167);
    bdsCode.setStaticAirTemperatureSign(0);
    bdsCode.setStaticAirTemperature(63);
    bdsCode.setAverageStaticPressureStatus(1);
    bdsCode.setAverageStaticPressure(59);
    bdsCode.setTurbulenceStatus(1);
    bdsCode.setTurbulence(0);
    bdsCode.setHumidityStatus(1);
    bdsCode.setHumidity(62);
    m_msg = bdsCode.getMessage();
    return "CBDSCode44";
}

string Application::messageBDSCode45Data()
{
    CBDSCode45 bdsCode;
    bdsCode.setTurbulenceStatus(1);
    bdsCode.setTurbulence(0);
    bdsCode.setWindShearStatus(1);
    bdsCode.setWindShear(1);
    bdsCode.setMicroburstStatus(1);
    bdsCode.setMicroburst(0);
    bdsCode.setIcingStatus(1);
    bdsCode.setIcing(0);
    bdsCode.setWakeVortexStatus(1);
    bdsCode.setWakeVortex(1);
    bdsCode.setStaticAirTemperatureStatus(1);
    bdsCode.setStaticAirTemperatureSign(0);
    bdsCode.setStaticAirTemperature(58);
    bdsCode.setAverageStaticPressureStatus(1);
    bdsCode.setAverageStaticPressure(1027);
    bdsCode.setRadioHeightStatus(1);
    bdsCode.setRadioHeight(27680);
    m_msg = bdsCode.getMessage();
    return "CBDSCode45";
}

string Application::messageBDSCode48Data()
{
    CBDSCode48 bdsCode;
    bdsCode.setVHF1Freq(119.2);
    bdsCode.setVHF1Status(1);
    bdsCode.setVHF1AudioStatus(1);
    bdsCode.setVHF2Freq(121.6);
    bdsCode.setVHF2Status(1);
    bdsCode.setVHF2AudioStatus(1);
    bdsCode.setVHF3Freq(120.6);
    bdsCode.setVHF3Status(1);
    bdsCode.setVHF3AudioStatus(1);
    bdsCode.set121_5MHzAudioStatus(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode48";
}

string Application::messageBDSCode50Data()
{
    CBDSCode50 bdsCode;
    bdsCode.setRollAngleStatus(1);
    bdsCode.setRollAngleSign(0);
    bdsCode.setRollAngle(43);
    bdsCode.setTrueTrackAngleStatus(1);
    bdsCode.setTrueTrackAngleSign(0);
    bdsCode.setTrueTrackAngle(89);
    bdsCode.setGroundSpeedStatus(1);
    bdsCode.setGroundSpeed(1034);
    bdsCode.setTrackAngleRateStatus(1);
    bdsCode.setTrackAngleRateSign(0);
    bdsCode.setTrackAngleRate(7);
    bdsCode.setTrueAirspeedStatus(1);
    bdsCode.setTrueAirspeed(1015);
    m_msg = bdsCode.getMessage();
    return "CBDSCode50";
}

string Application::messageBDSCode51Data()
{
    CBDSCode51 bdsCode;
    bdsCode.setPositionStatus(1);
    bdsCode.setLatitudeSign(1);
    bdsCode.setLatitude(87);
    bdsCode.setLongitudeSign(1);
    bdsCode.setLongitude(88);
    bdsCode.setPressureAltitudeSign(1);
    bdsCode.setPressureAltitude(64300);
    m_msg = bdsCode.getMessage();
    return "CBDSCode51";
}

string Application::messageBDSCode52Data()
{
    CBDSCode52 bdsCode;
    bdsCode.setPositionStatus(1);
    bdsCode.setBDS52FOMSource(1);
    bdsCode.setLatitudeFine(79);
    bdsCode.setLongitudeFine(56);
    bdsCode.setPressureAltitudeSign(1);
    bdsCode.setPressureAltitude(61458);
    m_msg = bdsCode.getMessage();
    return "CBDSCode52";
}

string Application::messageBDSCode53Data()
{
    CBDSCode53 bdsCode;
    bdsCode.setMagneticHeadingStatus(1);
    bdsCode.setMagneticHeadingSign(0);
    bdsCode.setMagneticHeading(76);
    bdsCode.setIndicatedAirspeedStatus(1);
    bdsCode.setIndicatedAirspeed(486);
    bdsCode.setMachNumberStatus(1);
    bdsCode.setMachNumber(2018);
    bdsCode.setTrueAirspeedStatus(1);
    bdsCode.setTrueAirspeed(998);
    bdsCode.setAltitudeRateStatus(1);
    bdsCode.setAltitudeRateSign(0);
    bdsCode.setAltitudeRate(7896);
    m_msg = bdsCode.getMessage();
    return "CBDSCode53";
}

string Application::messageBDSCode54Data()
{
    CBDSCode54 bdsCode;
    bdsCode.setWaypointNameStatus(1);
    bdsCode.setWaypointName("01234");
    bdsCode.setEstimatedArrivalTime(28);
    bdsCode.setEstimatedFlightLevel(276);
    bdsCode.setTimeToGo(29);
    m_msg = bdsCode.getMessage();
    return "CBDSCode54";
}

string Application::messageBDSCode55Data()
{
    CBDSCode55 bdsCode;
    bdsCode.setWaypointNameStatus(1);
    bdsCode.setWaypointName("01234");
    bdsCode.setEstimatedArrivalTime(29);
    bdsCode.setEstimatedFlightLevel(272);
    bdsCode.setTimeToGo(27);
    m_msg = bdsCode.getMessage();
    return "CBDSCode55";
}

string Application::messageBDSCode56Data()
{
    CBDSCode56 bdsCode;
    bdsCode.setWaypointNameStatus(1);
    bdsCode.setWaypointName("01234");
    bdsCode.setEstimatedArrivalTime(26);
    bdsCode.setEstimatedFlightLevel(269);
    bdsCode.setTimeToGo(29);
    m_msg = bdsCode.getMessage();
    return "CBDSCode56";
}

string Application::messageBDSCode5FData()
{
    CBDSCode5F bdsCode;
    bdsCode.setMCPnFCUSeletedAltitude(1);
    bdsCode.setNextWaypoint(1);
    bdsCode.setFMSVerticalMode(1);
    bdsCode.setVHFChannelReport(1);
    bdsCode.setMeteorologicalHazards(1);
    bdsCode.setFMSSelectedAltitude(1);
    bdsCode.setBarometricPressureMinus800mb(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode5F";
}

string Application::messageBDSCode60Data()
{
    CBDSCode60 bdsCode;
    bdsCode.setMagneticHeadingStatus(1);
    bdsCode.setMagneticHeadingSign(0);
    bdsCode.setMagneticHeading(83);
    bdsCode.setIndicatedAirspeedStatus(1);
    bdsCode.setIndicatedAirspeed(457);
    bdsCode.setMachStatus(1);
    bdsCode.setMach(2);
    bdsCode.setBarometricAltitudeRateStatus(1);
    bdsCode.setBarometricAltitudeRateSign(0);
    bdsCode.setBarometricAltitudeRate(7368);
    bdsCode.setInertialVerticalVelocityStatus(1);
    bdsCode.setInertialVerticalVelocitySign(0);
    bdsCode.setInertialVerticalVelocity(7591);
    m_msg = bdsCode.getMessage();
    return "CBDSCode60";
}

string Application::messageBDSCode61Data()
{
    CBDSCode61 bdsCode;
    bdsCode.setFormatTypeCode(28);
    bdsCode.setSubtypeCode(1);
    bdsCode.setEmergencyState(0);
    m_msg = bdsCode.getMessage();
    return "CBDSCode61";
}

string Application::messageBDSCode65Data()
{
    CBDSCode65 bdsCode;
    bdsCode.setFormatTypeCode(31);
    bdsCode.setSubtypeCode(0);
    bdsCode.setEnRouteOperationalCapabilities(0);
    bdsCode.setTerminalAreaOpertionalCapabilities(0);
    bdsCode.setApproachLandingOperationalCapabilities(0);
    bdsCode.setSurfaceOperationalCapabilities(0);
    bdsCode.setEnRouteOperationalCapabilityStatus(1);
    bdsCode.setTerminalAreaOpertionalCapabilityStatus(1);
    bdsCode.setApproachLandingOperationalCapabilityStatus(1);
    bdsCode.setSurfaceOperationalCapabilityStatus(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCode65";
}

string Application::messageBDSCodeE3Data()
{
    CBDSCodeE3 bdsCode;
    bdsCode.setBDSE3Status(1);
    bdsCode.setBDSE3FormatType(0);
    bdsCode.setBDSE3PartNumber("102345678901");
    m_msg = bdsCode.getMessage();
    return "CBDSCodeE3";
}

string Application::messageBDSCodeE4Data()
{
    CBDSCodeE4 bdsCode;
    bdsCode.setBDSE4Status(1);
    bdsCode.setBDSE4FormatType(1);
    bdsCode.setBDSE4RevisionNumber("01234ABC");
    m_msg = bdsCode.getMessage();
    return "CBDSCodeE4";
}

string Application::messageBDSCodeE5Data()
{
    CBDSCodeE5 bdsCode;
    bdsCode.setBDSE5Status(1);
    bdsCode.setBDSE5FormatType(0);
    bdsCode.setBDSE5PartNumber("102345678901");
    m_msg = bdsCode.getMessage();
    return "CBDSCodeE5";
}

string Application::messageBDSCodeE6Data()
{
    CBDSCodeE6 bdsCode;
    bdsCode.setBDSE6Status(1);
    bdsCode.setBDSE6FormatType(1);
    bdsCode.setBDSE6RevisionNumber("01234ABC");
    m_msg = bdsCode.getMessage();
    return "CBDSCodeE6";
}

string Application::messageBDSCodeE7Data()
{
    CBDSCodeE7 bdsCode;
    bdsCode.setBDSRegisteNumber("E7");
    bdsCode.setSDICode(0);
    bdsCode.setNonDiversityTransponder(0);
    bdsCode.setDiversityFailure(0);
    bdsCode.setUpperReceiverFailure(0);
    bdsCode.setLowerReceiverFailure(0);
    bdsCode.setUpperSquitterFailure(0);
    bdsCode.setLowerSquitterFailure(0);
    bdsCode.setAirGround1InputStatus(1);
    bdsCode.setMSPnATSUnCMUIn2Status(1);
    bdsCode.setAirGround2InputStatus(1);
    bdsCode.setGPSTimeMark1Status(1);
    bdsCode.setGPSTimeMark2Status(1);
    bdsCode.setModeSLimitingDuringPowerOnCycle(0);
    bdsCode.setModeSLimiting(0);
    bdsCode.setExtendedSquitterDisableStatus(1);
    bdsCode.setACASInputInactive(0);
    bdsCode.setADSBOutStatus(1);
    bdsCode.setSelectedControlInactiveStatus(1);
    bdsCode.setControlInputSelection(0);
    bdsCode.setMultipleAirDataSourceReportingSelection(0);
    bdsCode.setAltitudeAlternatePortSelection(1);
    bdsCode.setAltitudePortAStatus(1);
    bdsCode.setAltitudePortBStatus(1);
    bdsCode.setFMCnGNSSSourceSelect(1);
    bdsCode.setFMCnGNSS1BusStatus(1);
    bdsCode.setFMCnGNSS2BusStatus(1);
    bdsCode.setMultipleIRSnAHRSDataSourceReportingSelection(0);
    bdsCode.setIRSnFMSSourceSelect(0);
    bdsCode.setIRSnFMSnDataConcentratorIn1(0);
    bdsCode.setIRSnFMSnDataConcentratorIn2(0);
    bdsCode.setFMCSelect(1);
    bdsCode.setFMC1nGenInBusStatus(1);
    bdsCode.setFMC2nGenInBusStatus(1);
    bdsCode.setMSPnATSUnCMUIn1Status(1);
    m_msg = bdsCode.getMessage();
    return "CBDSCodeE7";
}

string Application::messageBDSCodeEAData()
{
    CBDSCodeEA bdsCode;
    bdsCode.setBDSEARegisterNumber("EA");
    bdsCode.setManufacturerDefinedDiagnosticField9_16("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField17_24("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField25_32("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField33_40("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField41_48("0 1 0 1 0 1 0 1");
    bdsCode.setManufacturerDefinedDiagnosticField49_56("0 1 0 1 0 1 0 1");
    m_msg = bdsCode.getMessage();
    return "CBDSCodeEA";
}
