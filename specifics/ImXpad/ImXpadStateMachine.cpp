static const char *RcsId = "$Id $";
//+=============================================================================
//
// file :         ImXpadStateMachine.cpp
//
// description :  C++ source for the ImXpad and its alowed 
//                methods for commands and attributes
//
// project :      TANGO Device Server
//
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// SVN only:
// $HeadURL: $
//
// CVS only:
// $Source:  $
// $Log:  $
//
// copyleft :     European Synchrotron Radiation Facility
//                BP 220, Grenoble 38043
//                FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================

#include <tango.h>
#include <ImXpad.h>
#include <ImXpadClass.h>

/*====================================================================
 *	This file contains the methods to allow commands and attributes
 * read or write execution.
 *
 * If you wand to add your own code, add it between 
 * the "End/Re-Start of Generated Code" comments.
 *
 * If you want, you can also add your own methods.
 *====================================================================
 */

namespace ImXpad_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_acquisitionMode_allowed
// 
// description : 	Read/Write allowed for acquisitionMode attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_acquisitionMode_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
        if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
        //	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_outputSignal_allowed
// 
// description : 	Read/Write allowed for outputSignal attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_outputSignal_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
        if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
        //	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_calibrationMode_allowed
// 
// description : 	Read/Write allowed for calibrationMode attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_calibrationMode_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
        if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
        //	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_serverVersion_allowed
// 
// description : 	Read/Write allowed for serverVersion attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_serverVersion_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
        if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
        //	Re-Start of Generated Code
		return false;
	}
	return true;
}

//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_geometricalCorrectionFlag_allowed
// 
// description : 	Read/Write allowed for geometricalCorrectionFlag attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_geometricalCorrectionFlag_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
        if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
        //	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_flatFieldCorrectionFlag_allowed
// 
// description : 	Read/Write allowed for flatFieldCorrectionFlag attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_flatFieldCorrectionFlag_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
        if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
        //	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_calibrationFileName_allowed
// 
// description : 	Read/Write allowed for calibrationFileName attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_calibrationFileName_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
        if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
        //	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_nbStackingImages_allowed
// 
// description : 	Read/Write allowed for nbStackingImages attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_nbStackingImages_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_calibrationPath_allowed
// 
// description : 	Read/Write allowed for calibrationPath attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_calibrationPath_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
        if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
        //	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_calibrationExposureTime_allowed
// 
// description : 	Read/Write allowed for calibrationExposureTime attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_calibrationExposureTime_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_CalibrationBeamITHL_allowed
// 
// description : 	Read/Write allowed for CalibrationBeamITHL attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_CalibrationBeamITHL_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
 		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_calibrationConfigMode_allowed
// 
// description : 	Read/Write allowed for calibrationConfigMode attribute.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_calibrationConfigMode_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
        {
           return true;
        }

        if ( get_state()==Tango::FAULT && is_device_initialized() )
        {
           return true;
        }
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_StartCalibration_allowed
// 
// description : 	Execution allowed for StartCalibration command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_StartCalibration_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_CreateWhiteImage_allowed
// 
// description : 	Execution allowed for CreateWhiteImage command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_CreateWhiteImage_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_ChooseWhiteImage_allowed
// 
// description : 	Execution allowed for ChooseWhiteImage command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_ChooseWhiteImage_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_GetWhiteImagesList_allowed
// 
// description : 	Execution allowed for GetWhiteImagesList command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_GetWhiteImagesList_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_DeleteWhiteImage_allowed
// 
// description : 	Execution allowed for DeleteWhiteImage command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_DeleteWhiteImage_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_Abort_allowed
// 
// description : 	Execution allowed for Abort command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_Abort_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_SaveCalibrationFile_allowed
// 
// description : 	Execution allowed for SaveCalibrationFile command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_SaveCalibrationFile_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_LoadCalibrationFile_allowed
// 
// description : 	Execution allowed for LoadCalibrationFile command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_LoadCalibrationFile_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_ITHLIncrease_allowed
// 
// description : 	Execution allowed for ITHLIncrease command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_ITHLIncrease_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		ImXpad::is_ITHLDecrease_allowed
// 
// description : 	Execution allowed for ITHLDecrease command.
//
//-----------------------------------------------------------------------------
bool ImXpad::is_ITHLDecrease_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::FAULT	||
		get_state() == Tango::INIT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}

}	// namespace ImXpad_ns
