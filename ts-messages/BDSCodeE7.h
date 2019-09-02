#ifndef __BDSCodeE7_h
#define __BDSCodeE7_h

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "TServerMessage.h"



class CBDSCodeE7:public TServerMessage
{
    const int mFormatVersion = 2;
    char* json_string;
 
public:
    static const unsigned int mCmdID=0x33;
    CBDSCodeE7(void)
    {
        setCmdID(mCmdID);
    }
    CBDSCodeE7(Json::Value obj):TServerMessage(obj)
    {
        set(obj);
        setCmdID(mCmdID);
    }
    void setBDSRegisteNumber(std::string value)
    {
        write("BDSRegisteNumber",value);
    }

    std::string getBDSRegisteNumber(void)

    {
        return getString("BDSRegisteNumber");
    }

    bool isBDSRegisteNumberValid(void)
    {
        return isValid("BDSRegisteNumber");

    }

    void setSDICode(unsigned int value)
    {
        write("SDICode",value);
    }

    unsigned int getSDICode(void)

    {
        return getUInt("SDICode");
    }

    bool isSDICodeValid(void)
    {
        return isValid("SDICode");

    }

    void setNonDiversityTransponder(bool value)
    {
        write("NonDiversityTransponder",value);
    }

    bool getNonDiversityTransponder(void)

    {
        return getBool("NonDiversityTransponder");
    }

    bool isNonDiversityTransponderValid(void)
    {
        return isValid("NonDiversityTransponder");

    }

    void setDiversityFailure(bool value)
    {
        write("DiversityFailure",value);
    }

    bool getDiversityFailure(void)

    {
        return getBool("DiversityFailure");
    }

    bool isDiversityFailureValid(void)
    {
        return isValid("DiversityFailure");

    }

    void setUpperReceiverFailure(bool value)
    {
        write("UpperReceiverFailure",value);
    }

    bool getUpperReceiverFailure(void)

    {
        return getBool("UpperReceiverFailure");
    }

    bool isUpperReceiverFailureValid(void)
    {
        return isValid("UpperReceiverFailure");

    }

    void setLowerReceiverFailure(bool value)
    {
        write("LowerReceiverFailure",value);
    }

    bool getLowerReceiverFailure(void)

    {
        return getBool("LowerReceiverFailure");
    }

    bool isLowerReceiverFailureValid(void)
    {
        return isValid("LowerReceiverFailure");

    }

    void setUpperSquitterFailure(bool value)
    {
        write("UpperSquitterFailure",value);
    }

    bool getUpperSquitterFailure(void)

    {
        return getBool("UpperSquitterFailure");
    }

    bool isUpperSquitterFailureValid(void)
    {
        return isValid("UpperSquitterFailure");

    }

    void setLowerSquitterFailure(bool value)
    {
        write("LowerSquitterFailure",value);
    }

    bool getLowerSquitterFailure(void)

    {
        return getBool("LowerSquitterFailure");
    }

    bool isLowerSquitterFailureValid(void)
    {
        return isValid("LowerSquitterFailure");

    }

    void setAirGround1InputStatus(bool value)
    {
        write("AirGround1InputStatus",value);
    }

    bool getAirGround1InputStatus(void)

    {
        return getBool("AirGround1InputStatus");
    }

    bool isAirGround1InputStatusValid(void)
    {
        return isValid("AirGround1InputStatus");

    }

    void setAirGround2InputStatus(bool value)
    {
        write("AirGround2InputStatus",value);
    }

    bool getAirGround2InputStatus(void)

    {
        return getBool("AirGround2InputStatus");
    }

    bool isAirGround2InputStatusValid(void)
    {
        return isValid("AirGround2InputStatus");

    }

    void setGPSTimeMark1Status(bool value)
    {
        write("GPSTimeMark1Status",value);
    }

    bool getGPSTimeMark1Status(void)

    {
        return getBool("GPSTimeMark1Status");
    }

    bool isGPSTimeMark1StatusValid(void)
    {
        return isValid("GPSTimeMark1Status");

    }

    void setGPSTimeMark2Status(bool value)
    {
        write("GPSTimeMark2Status",value);
    }

    bool getGPSTimeMark2Status(void)

    {
        return getBool("GPSTimeMark2Status");
    }

    bool isGPSTimeMark2StatusValid(void)
    {
        return isValid("GPSTimeMark2Status");

    }

    void setModeSLimitingDuringPowerOnCycle(bool value)
    {
        write("ModeSLimitingDuringPowerOnCycle",value);
    }

    bool getModeSLimitingDuringPowerOnCycle(void)

    {
        return getBool("ModeSLimitingDuringPowerOnCycle");
    }

    bool isModeSLimitingDuringPowerOnCycleValid(void)
    {
        return isValid("ModeSLimitingDuringPowerOnCycle");

    }

    void setModeSLimiting(bool value)
    {
        write("ModeSLimiting",value);
    }

    bool getModeSLimiting(void)

    {
        return getBool("ModeSLimiting");
    }

    bool isModeSLimitingValid(void)
    {
        return isValid("ModeSLimiting");

    }

    void setExtendedSquitterDisableStatus(bool value)
    {
        write("ExtendedSquitterDisableStatus",value);
    }

    bool getExtendedSquitterDisableStatus(void)

    {
        return getBool("ExtendedSquitterDisableStatus");
    }

    bool isExtendedSquitterDisableStatusValid(void)
    {
        return isValid("ExtendedSquitterDisableStatus");

    }

    void setACASInputInactive(bool value)
    {
        write("ACASInputInactive",value);
    }

    bool getACASInputInactive(void)

    {
        return getBool("ACASInputInactive");
    }

    bool isACASInputInactiveValid(void)
    {
        return isValid("ACASInputInactive");

    }

    void setADSBOutStatus(bool value)
    {
        write("ADSBOutStatus",value);
    }

    bool getADSBOutStatus(void)

    {
        return getBool("ADSBOutStatus");
    }

    bool isADSBOutStatusValid(void)
    {
        return isValid("ADSBOutStatus");

    }

    void setSelectedControlInactiveStatus(unsigned int value)
    {
        write("SelectedControlInactiveStatus",value);
    }

    unsigned int getSelectedControlInactiveStatus(void)

    {
        return getUInt("SelectedControlInactiveStatus");
    }

    bool isSelectedControlInactiveStatusValid(void)
    {
        return isValid("SelectedControlInactiveStatus");

    }

    void setControlInputSelection(unsigned int value)
    {
        write("ControlInputSelection",value);
    }

    unsigned int getControlInputSelection(void)

    {
        return getUInt("ControlInputSelection");
    }

    bool isControlInputSelectionValid(void)
    {
        return isValid("ControlInputSelection");

    }

    void setMultipleAirDataSourceReportingSelection(unsigned int value)
    {
        write("MultipleAirDataSourceReportingSelection",value);
    }

    unsigned int getMultipleAirDataSourceReportingSelection(void)

    {
        return getUInt("MultipleAirDataSourceReportingSelection");
    }

    bool isMultipleAirDataSourceReportingSelectionValid(void)
    {
        return isValid("MultipleAirDataSourceReportingSelection");

    }

    void setAltitudeAlternatePortSelection(bool value)
    {
        write("AltitudeAlternatePortSelection",value);
    }

    bool getAltitudeAlternatePortSelection(void)

    {
        return getBool("AltitudeAlternatePortSelection");
    }

    bool isAltitudeAlternatePortSelectionValid(void)
    {
        return isValid("AltitudeAlternatePortSelection");

    }

    void setAltitudePortAStatus(unsigned int value)
    {
        write("AltitudePortAStatus",value);
    }

    unsigned int getAltitudePortAStatus(void)

    {
        return getUInt("AltitudePortAStatus");
    }

    bool isAltitudePortAStatusValid(void)
    {
        return isValid("AltitudePortAStatus");

    }

    void setAltitudePortBStatus(unsigned int value)
    {
        write("AltitudePortBStatus",value);
    }

    unsigned int getAltitudePortBStatus(void)

    {
        return getUInt("AltitudePortBStatus");
    }

    bool isAltitudePortBStatusValid(void)
    {
        return isValid("AltitudePortBStatus");

    }

    void setFMCnGNSSSourceSelect(bool value)
    {
        write("FMCnGNSSSourceSelect",value);
    }

    bool getFMCnGNSSSourceSelect(void)

    {
        return getBool("FMCnGNSSSourceSelect");
    }

    bool isFMCnGNSSSourceSelectValid(void)
    {
        return isValid("FMCnGNSSSourceSelect");

    }

    void setFMCnGNSS1BusStatus(unsigned int value)
    {
        write("FMCnGNSS1BusStatus",value);
    }

    unsigned int getFMCnGNSS1BusStatus(void)

    {
        return getUInt("FMCnGNSS1BusStatus");
    }

    bool isFMCnGNSS1BusStatusValid(void)
    {
        return isValid("FMCnGNSS1BusStatus");

    }

    void setFMCnGNSS2BusStatus(unsigned int value)
    {
        write("FMCnGNSS2BusStatus",value);
    }

    unsigned int getFMCnGNSS2BusStatus(void)

    {
        return getUInt("FMCnGNSS2BusStatus");
    }

    bool isFMCnGNSS2BusStatusValid(void)
    {
        return isValid("FMCnGNSS2BusStatus");

    }

    void setMultipleIRSnAHRSDataSourceReportingSelection(unsigned int value)
    {
        write("MultipleIRSnAHRSDataSourceReportingSelection",value);
    }

    unsigned int getMultipleIRSnAHRSDataSourceReportingSelection(void)

    {
        return getUInt("MultipleIRSnAHRSDataSourceReportingSelection");
    }

    bool isMultipleIRSnAHRSDataSourceReportingSelectionValid(void)
    {
        return isValid("MultipleIRSnAHRSDataSourceReportingSelection");

    }

    void setIRSnFMSSourceSelect(bool value)
    {
        write("IRSnFMSSourceSelect",value);
    }

    bool getIRSnFMSSourceSelect(void)

    {
        return getBool("IRSnFMSSourceSelect");
    }

    bool isIRSnFMSSourceSelectValid(void)
    {
        return isValid("IRSnFMSSourceSelect");

    }

    void setIRSnFMSnDataConcentratorIn1(unsigned int value)
    {
        write("IRSnFMSnDataConcentratorIn1",value);
    }

    unsigned int getIRSnFMSnDataConcentratorIn1(void)

    {
        return getUInt("IRSnFMSnDataConcentratorIn1");
    }

    bool isIRSnFMSnDataConcentratorIn1Valid(void)
    {
        return isValid("IRSnFMSnDataConcentratorIn1");

    }

    void setIRSnFMSnDataConcentratorIn2(unsigned int value)
    {
        write("IRSnFMSnDataConcentratorIn2",value);
    }

    unsigned int getIRSnFMSnDataConcentratorIn2(void)

    {
        return getUInt("IRSnFMSnDataConcentratorIn2");
    }

    bool isIRSnFMSnDataConcentratorIn2Valid(void)
    {
        return isValid("IRSnFMSnDataConcentratorIn2");

    }

    void setFMCSelect(bool value)
    {
        write("FMCSelect",value);
    }

    bool getFMCSelect(void)

    {
        return getBool("FMCSelect");
    }

    bool isFMCSelectValid(void)
    {
        return isValid("FMCSelect");

    }

    void setFMC1nGenInBusStatus(unsigned int value)
    {
        write("FMC1nGenInBusStatus",value);
    }

    unsigned int getFMC1nGenInBusStatus(void)

    {
        return getUInt("FMC1nGenInBusStatus");
    }

    bool isFMC1nGenInBusStatusValid(void)
    {
        return isValid("FMC1nGenInBusStatus");

    }

    void setFMC2nGenInBusStatus(unsigned int value)
    {
        write("FMC2nGenInBusStatus",value);
    }

    unsigned int getFMC2nGenInBusStatus(void)

    {
        return getUInt("FMC2nGenInBusStatus");
    }

    bool isFMC2nGenInBusStatusValid(void)
    {
        return isValid("FMC2nGenInBusStatus");

    }

    void setMSPnATSUnCMUIn1Status(unsigned int value)
    {
        write("MSPnATSUnCMUIn1Status",value);
    }

    unsigned int getMSPnATSUnCMUIn1Status(void)

    {
        return getUInt("MSPnATSUnCMUIn1Status");
    }

    bool isMSPnATSUnCMUIn1StatusValid(void)
    {
        return isValid("MSPnATSUnCMUIn1Status");

    }

    void setMSPnATSUnCMUIn2Status(unsigned int value)
    {
        write("MSPnATSUnCMUIn2Status",value);
    }

    unsigned int getMSPnATSUnCMUIn2Status(void)

    {
        return getUInt("MSPnATSUnCMUIn2Status");
    }

    bool isMSPnATSUnCMUIn2StatusValid(void)
    {
        return isValid("MSPnATSUnCMUIn2Status");

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