static const char *RcsId = "$Id $";
//+=============================================================================
//
// file :         EigerStateMachine.cpp
//
// description :  C++ source for the Eiger and its alowed 
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
#include <Eiger.h>
#include <EigerClass.h>

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

namespace Eiger_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		Eiger::is_countrateCorrection_allowed
// 
// description : 	Read/Write allowed for countrateCorrection attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_countrateCorrection_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_flatfieldCorrection_allowed
// 
// description : 	Read/Write allowed for flatfieldCorrection attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_flatfieldCorrection_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_pixelMask_allowed
// 
// description : 	Read/Write allowed for pixelMask attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_pixelMask_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_virtualPixelCorrection_allowed
// 
// description : 	Read/Write allowed for virtualPixelCorrection attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_virtualPixelCorrection_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_thresholdEnergy_allowed
// 
// description : 	Read/Write allowed for thresholdEnergy attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_thresholdEnergy_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_photonEnergy_allowed
// 
// description : 	Read/Write allowed for photonEnergy attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_photonEnergy_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_temperature_allowed
// 
// description : 	Read/Write allowed for temperature attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_temperature_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_humidity_allowed
// 
// description : 	Read/Write allowed for humidity attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_humidity_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_compression_allowed
// 
// description : 	Read/Write allowed for compression attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_compression_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_softwareVersion_allowed
// 
// description : 	Read/Write allowed for softwareVersion attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_softwareVersion_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_dataCollectionDate_allowed
// 
// description : 	Read/Write allowed for dataCollectionDate attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_dataCollectionDate_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_wavelength_allowed
// 
// description : 	Read/Write allowed for wavelength attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_wavelength_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_beamCenterX_allowed
// 
// description : 	Read/Write allowed for beamCenterX attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_beamCenterX_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_beamCenterY_allowed
// 
// description : 	Read/Write allowed for beamCenterY attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_beamCenterY_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_detectorDistance_allowed
// 
// description : 	Read/Write allowed for detectorDistance attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_detectorDistance_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_autoSummation_allowed
// 
// description : 	Read/Write allowed for autoSummation attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_autoSummation_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_chiIncrement_allowed
// 
// description : 	Read/Write allowed for chiIncrement attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_chiIncrement_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_chiStart_allowed
// 
// description : 	Read/Write allowed for chiStart attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_chiStart_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_kappaIncrement_allowed
// 
// description : 	Read/Write allowed for kappaIncrement attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_kappaIncrement_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_kappaStart_allowed
// 
// description : 	Read/Write allowed for kappaStart attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_kappaStart_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_omegaIncrement_allowed
// 
// description : 	Read/Write allowed for omegaIncrement attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_omegaIncrement_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_omegaStart_allowed
// 
// description : 	Read/Write allowed for omegaStart attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_omegaStart_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_phiIncrement_allowed
// 
// description : 	Read/Write allowed for phiIncrement attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_phiIncrement_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_phiStart_allowed
// 
// description : 	Read/Write allowed for phiStart attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_phiStart_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_compressionType_allowed
// 
// description : 	Read/Write allowed for compressionType attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_compressionType_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_detectorReadoutTime_allowed
// 
// description : 	Read/Write allowed for detectorReadoutTime attribute.
//
//-----------------------------------------------------------------------------
bool Eiger::is_detectorReadoutTime_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::DISABLE	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
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
// method : 		Eiger::is_Abort_allowed
// 
// description : 	Execution allowed for Abort command.
//
//-----------------------------------------------------------------------------
bool Eiger::is_Abort_allowed(const CORBA::Any &any)
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
// method : 		Eiger::is_Initialize_allowed
// 
// description : 	Execution allowed for Initialize command.
//
//-----------------------------------------------------------------------------
bool Eiger::is_Initialize_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}

}	// namespace Eiger_ns
