static const char *RcsId = "$Id $";
//+=============================================================================
//
// file :         LimaDetectorStateMachine.cpp
//
// description :  C++ source for the LimaDetector and its alowed 
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
#ifdef WIN32
#include <tango.h>
#endif

#include <LimaDetector.h>
#include <LimaDetectorClass.h>

#ifndef WIN32
#include <tango.h>
#endif


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

namespace LimaDetector_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================


//+----------------------------------------------------------------------------
//
// method : 		LimaDetector::is_detectorType_allowed
// 
// description : 	Read/Write allowed for detectorType attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_detectorType_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_detectorModel_allowed
// 
// description : 	Read/Write allowed for detectorModel attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_detectorModel_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_exposureTime_allowed
// 
// description : 	Read/Write allowed for exposureTime attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_exposureTime_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_nbFrames_allowed
// 
// description : 	Read/Write allowed for nbFrames attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_nbFrames_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_detectorDescription_allowed
// 
// description : 	Read/Write allowed for detectorDescription attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_detectorDescription_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_acquisitionMode_allowed
// 
// description : 	Read/Write allowed for acquisitionMode attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_acquisitionMode_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_triggerMode_allowed
// 
// description : 	Read/Write allowed for triggerMode attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_triggerMode_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_fileGeneration_allowed
// 
// description : 	Read/Write allowed for fileGeneration attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_fileGeneration_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_currentFrame_allowed
// 
// description : 	Read/Write allowed for currentFrame attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_currentFrame_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_binningH_allowed
// 
// description : 	Read/Write allowed for binningH attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_binningH_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_binningV_allowed
// 
// description : 	Read/Write allowed for binningV attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_binningV_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_roiX_allowed
// 
// description : 	Read/Write allowed for roiX attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_roiX_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_roiY_allowed
// 
// description : 	Read/Write allowed for roiY attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_roiY_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_roiWidth_allowed
// 
// description : 	Read/Write allowed for roiWidth attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_roiWidth_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_roiHeight_allowed
// 
// description : 	Read/Write allowed for roiHeight attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_roiHeight_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_detectorPixelDepth_allowed
// 
// description : 	Read/Write allowed for detectorPixelDepth attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_detectorPixelDepth_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_latencyTime_allowed
// 
// description : 	Read/Write allowed for latencyTime attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_latencyTime_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code
		
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
// method : 		LimaDetector::is_binnedWidthMax_allowed
// 
// description : 	Read/Write allowed for binnedWidthMax attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_binnedWidthMax_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_binnedHeightMax_allowed
// 
// description : 	Read/Write allowed for binnedHeightMax attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_binnedHeightMax_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_detectorWidthMax_allowed
// 
// description : 	Read/Write allowed for detectorWidthMax attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_detectorWidthMax_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_detectorHeightMax_allowed
// 
// description : 	Read/Write allowed for detectorHeightMax attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_detectorHeightMax_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_fileNbFrames_allowed
// 
// description : 	Read/Write allowed for fileNbFrames attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_fileNbFrames_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_filePrefix_allowed
// 
// description : 	Read/Write allowed for filePrefix attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_filePrefix_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_fileTargetPath_allowed
// 
// description : 	Read/Write allowed for fileTargetPath attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_fileTargetPath_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_fileFormat_allowed
// 
// description : 	Read/Write allowed for fileFormat attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_fileFormat_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::FAULT	||
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
// method : 		LimaDetector::is_frameRate_allowed
// 
// description : 	Read/Write allowed for frameRate attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_frameRate_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code

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
// method : 		LimaDetector::is_operationsList_allowed
// 
// description : 	Read/Write allowed for operationsList attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_operationsList_allowed(Tango::AttReqType type)
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
// method : 		LimaDetector::is_fileExtension_allowed
// 
// description : 	Read/Write allowed for fileExtension attribute.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_fileExtension_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_Snap_allowed
// 
// description : 	Execution allowed for Snap command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_Snap_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_Stop_allowed
// 
// description : 	Execution allowed for Stop command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_Stop_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_Start_allowed
// 
// description : 	Execution allowed for Start command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_Start_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_SetROI_allowed
// 
// description : 	Execution allowed for SetROI command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_SetROI_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_SetBinning_allowed
// 
// description : 	Execution allowed for SetBinning command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_SetBinning_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_ResetROI_allowed
// 
// description : 	Execution allowed for ResetROI command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_ResetROI_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_GetAttributeAvailableValues_allowed
// 
// description : 	Execution allowed for GetAttributeAvailableValues command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_GetAttributeAvailableValues_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_ResetBinning_allowed
// 
// description : 	Execution allowed for ResetBinning command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_ResetBinning_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_ResetFileIndex_allowed
// 
// description : 	Execution allowed for ResetFileIndex command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_ResetFileIndex_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
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
// method : 		LimaDetector::is_Prepare_allowed
// 
// description : 	Execution allowed for Prepare command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_Prepare_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_ReloadROI_allowed
// 
// description : 	Execution allowed for ReloadROI command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_ReloadROI_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_GetDataStreams_allowed
// 
// description : 	Execution allowed for GetDataStreams command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_GetDataStreams_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
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
// method : 		LimaDetector::is_GetAvailableCapabilities_allowed
// 
// description : 	Execution allowed for GetAvailableCapabilities command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_GetAvailableCapabilities_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
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
// method : 		LimaDetector::is_InitInterface_allowed
// 
// description : 	Execution allowed for InitInterface command.
//
//-----------------------------------------------------------------------------
bool LimaDetector::is_InitInterface_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}

}	// namespace LimaDetector_ns
