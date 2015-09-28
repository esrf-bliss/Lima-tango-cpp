/*----- PROTECTED REGION ID(MerlinStateMachine.cpp) ENABLED START -----*/
static const char *RcsId = "$Id:  $";
//=============================================================================
//
// file :        MerlinStateMachine.cpp
//
// description : State machine file for the Merlin class
//
// project :     Merlin: A Medipix3RX Quad readout
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================

#include <Merlin.h>

/*----- PROTECTED REGION END -----*/	//	Merlin::MerlinStateMachine.cpp

//================================================================
//  States  |  Description
//================================================================


namespace Merlin_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_softwareVersion_allowed()
 *	Description : Execution allowed for softwareVersion attribute
 */
//--------------------------------------------------------
bool Merlin::is_softwareVersion_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for softwareVersion attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::softwareVersionStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::softwareVersionStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_chargeSumming_allowed()
 *	Description : Execution allowed for chargeSumming attribute
 */
//--------------------------------------------------------
bool Merlin::is_chargeSumming_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for chargeSumming attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::chargeSummingStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::chargeSummingStateAllowed_WRITE

	//	Not any excluded states for chargeSumming attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::chargeSummingStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::chargeSummingStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_colourMode_allowed()
 *	Description : Execution allowed for colourMode attribute
 */
//--------------------------------------------------------
bool Merlin::is_colourMode_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for colourMode attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::colourModeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::colourModeStateAllowed_WRITE

	//	Not any excluded states for colourMode attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::colourModeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::colourModeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_continuousRW_allowed()
 *	Description : Execution allowed for continuousRW attribute
 */
//--------------------------------------------------------
bool Merlin::is_continuousRW_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for continuousRW attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::continuousRWStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::continuousRWStateAllowed_WRITE

	//	Not any excluded states for continuousRW attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::continuousRWStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::continuousRWStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_counter_allowed()
 *	Description : Execution allowed for counter attribute
 */
//--------------------------------------------------------
bool Merlin::is_counter_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for counter attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::counterStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::counterStateAllowed_WRITE

	//	Not any excluded states for counter attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::counterStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::counterStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_gain_allowed()
 *	Description : Execution allowed for gain attribute
 */
//--------------------------------------------------------
bool Merlin::is_gain_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for gain attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::gainStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::gainStateAllowed_WRITE

	//	Not any excluded states for gain attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::gainStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::gainStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_operatingEnergy_allowed()
 *	Description : Execution allowed for operatingEnergy attribute
 */
//--------------------------------------------------------
bool Merlin::is_operatingEnergy_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for operatingEnergy attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::operatingEnergyStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::operatingEnergyStateAllowed_WRITE

	//	Not any excluded states for operatingEnergy attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::operatingEnergyStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::operatingEnergyStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_temperature_allowed()
 *	Description : Execution allowed for temperature attribute
 */
//--------------------------------------------------------
bool Merlin::is_temperature_allowed(TANGO_UNUSED(Tango::AttReqType type))
{

	//	Not any excluded states for temperature attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::temperatureStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::temperatureStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_threshold0_allowed()
 *	Description : Execution allowed for threshold0 attribute
 */
//--------------------------------------------------------
bool Merlin::is_threshold0_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for threshold0 attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::threshold0StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold0StateAllowed_WRITE

	//	Not any excluded states for threshold0 attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::threshold0StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold0StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_threshold1_allowed()
 *	Description : Execution allowed for threshold1 attribute
 */
//--------------------------------------------------------
bool Merlin::is_threshold1_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for threshold1 attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::threshold1StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold1StateAllowed_WRITE

	//	Not any excluded states for threshold1 attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::threshold1StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold1StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_threshold2_allowed()
 *	Description : Execution allowed for threshold2 attribute
 */
//--------------------------------------------------------
bool Merlin::is_threshold2_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for threshold2 attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::threshold2StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold2StateAllowed_WRITE

	//	Not any excluded states for threshold2 attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::threshold2StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold2StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_threshold3_allowed()
 *	Description : Execution allowed for threshold3 attribute
 */
//--------------------------------------------------------
bool Merlin::is_threshold3_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for threshold3 attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::threshold3StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold3StateAllowed_WRITE

	//	Not any excluded states for threshold3 attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::threshold3StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold3StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_threshold4_allowed()
 *	Description : Execution allowed for threshold4 attribute
 */
//--------------------------------------------------------
bool Merlin::is_threshold4_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for threshold4 attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::threshold4StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold4StateAllowed_WRITE

	//	Not any excluded states for threshold4 attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::threshold4StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold4StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_threshold5_allowed()
 *	Description : Execution allowed for threshold5 attribute
 */
//--------------------------------------------------------
bool Merlin::is_threshold5_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for threshold5 attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::threshold5StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold5StateAllowed_WRITE

	//	Not any excluded states for threshold5 attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::threshold5StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold5StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_threshold6_allowed()
 *	Description : Execution allowed for threshold6 attribute
 */
//--------------------------------------------------------
bool Merlin::is_threshold6_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for threshold6 attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::threshold6StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold6StateAllowed_WRITE

	//	Not any excluded states for threshold6 attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::threshold6StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold6StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_threshold7_allowed()
 *	Description : Execution allowed for threshold7 attribute
 */
//--------------------------------------------------------
bool Merlin::is_threshold7_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for threshold7 attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::threshold7StateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold7StateAllowed_WRITE

	//	Not any excluded states for threshold7 attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::threshold7StateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::threshold7StateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerStartType_allowed()
 *	Description : Execution allowed for triggerStartType attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerStartType_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerStartType attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerStartTypeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerStartTypeStateAllowed_WRITE

	//	Not any excluded states for triggerStartType attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerStartTypeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerStartTypeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerStopType_allowed()
 *	Description : Execution allowed for triggerStopType attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerStopType_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerStopType attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerStopTypeStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerStopTypeStateAllowed_WRITE

	//	Not any excluded states for triggerStopType attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerStopTypeStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerStopTypeStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerOutTTL_allowed()
 *	Description : Execution allowed for triggerOutTTL attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerOutTTL_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerOutTTL attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutTTLStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutTTLStateAllowed_WRITE

	//	Not any excluded states for triggerOutTTL attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutTTLStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutTTLStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerOutLVDS_allowed()
 *	Description : Execution allowed for triggerOutLVDS attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerOutLVDS_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerOutLVDS attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutLVDSStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutLVDSStateAllowed_WRITE

	//	Not any excluded states for triggerOutLVDS attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutLVDSStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutLVDSStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerOutTTLInvert_allowed()
 *	Description : Execution allowed for triggerOutTTLInvert attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerOutTTLInvert_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerOutTTLInvert attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutTTLInvertStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutTTLInvertStateAllowed_WRITE

	//	Not any excluded states for triggerOutTTLInvert attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutTTLInvertStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutTTLInvertStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerOutLVDSInvert_allowed()
 *	Description : Execution allowed for triggerOutLVDSInvert attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerOutLVDSInvert_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerOutLVDSInvert attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutLVDSInvertStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutLVDSInvertStateAllowed_WRITE

	//	Not any excluded states for triggerOutLVDSInvert attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutLVDSInvertStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutLVDSInvertStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerOutTTLDelay_allowed()
 *	Description : Execution allowed for triggerOutTTLDelay attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerOutTTLDelay_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerOutTTLDelay attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutTTLDelayStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutTTLDelayStateAllowed_WRITE

	//	Not any excluded states for triggerOutTTLDelay attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutTTLDelayStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutTTLDelayStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerOutLVDSDelay_allowed()
 *	Description : Execution allowed for triggerOutLVDSDelay attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerOutLVDSDelay_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerOutLVDSDelay attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutLVDSDelayStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutLVDSDelayStateAllowed_WRITE

	//	Not any excluded states for triggerOutLVDSDelay attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerOutLVDSDelayStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerOutLVDSDelayStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_triggerUseDelay_allowed()
 *	Description : Execution allowed for triggerUseDelay attribute
 */
//--------------------------------------------------------
bool Merlin::is_triggerUseDelay_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for triggerUseDelay attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::triggerUseDelayStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerUseDelayStateAllowed_WRITE

	//	Not any excluded states for triggerUseDelay attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::triggerUseDelayStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::triggerUseDelayStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_thScanNum_allowed()
 *	Description : Execution allowed for thScanNum attribute
 */
//--------------------------------------------------------
bool Merlin::is_thScanNum_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for thScanNum attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::thScanNumStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::thScanNumStateAllowed_WRITE

	//	Not any excluded states for thScanNum attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::thScanNumStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::thScanNumStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_thStart_allowed()
 *	Description : Execution allowed for thStart attribute
 */
//--------------------------------------------------------
bool Merlin::is_thStart_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for thStart attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::thStartStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::thStartStateAllowed_WRITE

	//	Not any excluded states for thStart attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::thStartStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::thStartStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_thStop_allowed()
 *	Description : Execution allowed for thStop attribute
 */
//--------------------------------------------------------
bool Merlin::is_thStop_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for thStop attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::thStopStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::thStopStateAllowed_WRITE

	//	Not any excluded states for thStop attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::thStopStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::thStopStateAllowed_READ
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_thStep_allowed()
 *	Description : Execution allowed for thStep attribute
 */
//--------------------------------------------------------
bool Merlin::is_thStep_allowed(TANGO_UNUSED(Tango::AttReqType type))
{
	//	Not any excluded states for thStep attribute in Write access.
	/*----- PROTECTED REGION ID(Merlin::thStepStateAllowed_WRITE) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::thStepStateAllowed_WRITE

	//	Not any excluded states for thStep attribute in read access.
	/*----- PROTECTED REGION ID(Merlin::thStepStateAllowed_READ) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::thStepStateAllowed_READ
	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_DevState_allowed()
 *	Description : Execution allowed for DevState attribute
 */
//--------------------------------------------------------
bool Merlin::is_DevState_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for DevState command.
	/*----- PROTECTED REGION ID(Merlin::DevStateStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::DevStateStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_SoftTrigger_allowed()
 *	Description : Execution allowed for SoftTrigger attribute
 */
//--------------------------------------------------------
bool Merlin::is_SoftTrigger_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SoftTrigger command.
	/*----- PROTECTED REGION ID(Merlin::SoftTriggerStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::SoftTriggerStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_Abort_allowed()
 *	Description : Execution allowed for Abort attribute
 */
//--------------------------------------------------------
bool Merlin::is_Abort_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for Abort command.
	/*----- PROTECTED REGION ID(Merlin::AbortStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::AbortStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_THScan_allowed()
 *	Description : Execution allowed for THScan attribute
 */
//--------------------------------------------------------
bool Merlin::is_THScan_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for THScan command.
	/*----- PROTECTED REGION ID(Merlin::THScanStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::THScanStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Merlin::is_ResetHW_allowed()
 *	Description : Execution allowed for ResetHW attribute
 */
//--------------------------------------------------------
bool Merlin::is_ResetHW_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for ResetHW command.
	/*----- PROTECTED REGION ID(Merlin::ResetHWStateAllowed) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	Merlin::ResetHWStateAllowed
	return true;
}

}	//	End of namespace