//=============================================================================
//
// file :        Dhyana.h
//
// description : Include for the Dhyana class.
//
// project :	Device specific for Dhyana detector
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
// copyleft :    Synchrotron SOLEIL 
//               L'Orme des merisiers - Saint Aubin
//		 BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#ifndef _DHYANA_H
#define _DHYANA_H

#include <tango.h>
//using namespace Tango;

/**
 * @author	$Author:  $
 * @version	$Revision:  $
 */

 //	Add your own constant definitions here.
 //-----------------------------------------------

#include "Factory.h"

#include "lima/HwInterface.h"
#include "lima/CtControl.h"
#include "lima/CtAcquisition.h"
#include "lima/CtImage.h"

#include <yat4tango/PropertyHelper.h>
#include "DhyanaInterface.h"
#include "DhyanaCamera.h"

#define MAX_ATTRIBUTE_STRING_LENGTH     256
#define TUCAM_VERSION  "1.0.0"


using namespace lima;
using namespace std;
using namespace yat4tango;

namespace Dhyana_ns
{

/**
 * Class Description:
 * 
 */

/*
 *	Device States Description:
*  Tango::FAULT :
*  Tango::INIT :
*  Tango::RUNNING :
*  Tango::STANDBY :
 */


class Dhyana: public Tango::Device_4Impl
{
public :
	//	Add your own data members here
	//-----------------------------------------


	//	Here is the Start of the automatic code generation part
	//-------------------------------------------------------------	
/**
 *	@name attributes
 *	Attribute member data.
 */
//@{
		Tango::DevString	*attr_tucamVersion_read;
		Tango::DevDouble	*attr_temperature_read;
		Tango::DevDouble	*attr_temperatureTarget_read;
		Tango::DevDouble	attr_temperatureTarget_write;
		Tango::DevUShort	*attr_fanSpeed_read;
		Tango::DevUShort	attr_fanSpeed_write;
		Tango::DevString	*attr_globalGain_read;
		Tango::DevString	attr_globalGain_write;
//@}

/**
 * @name Device properties
 * Device properties member data.
 */
//@{
/**
 *	Memorize/Define the temperatureTarget  attribute  at Init device<br>
 */
	Tango::DevDouble	memorizedTemperatureTarget;
/**
 *	Memorize/Define the fanSpeed  attribute  at Init device<br>
 */
	Tango::DevUShort	memorizedFanSpeed;
/**
 *	Memorize/Define the globalGain  attribute  at Init device<br>
 */
	string	memorizedGlobalGain;
//@}

/**
 *	@name Device properties
 *	Device property member data.
 */
//@{
//@}

/**@name Constructors
 * Miscellaneous constructors */
//@{
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	Dhyana(Tango::DeviceClass *cl,string &s);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	Dhyana(Tango::DeviceClass *cl,const char *s);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device name
 *	@param d	Device description.
 */
	Dhyana(Tango::DeviceClass *cl,const char *s,const char *d);
//@}

/**@name Destructor
 * Only one destructor is defined for this class */
//@{
/**
 * The object destructor.
 */	
	~Dhyana() {delete_device();};
/**
 *	will be called at device destruction or at init command.
 */
	void delete_device();
//@}

	
/**@name Miscellaneous methods */
//@{
/**
 *	Initialize the device
 */
	virtual void init_device();
/**
 *	Always executed method before execution command method.
 */
	virtual void always_executed_hook();

//@}

/**
 * @name Dhyana methods prototypes
 */

//@{
/**
 *	Hardware acquisition for attributes.
 */
	virtual void read_attr_hardware(vector<long> &attr_list);
/**
 *	Extract real attribute values for tucamVersion acquisition result.
 */
	virtual void read_tucamVersion(Tango::Attribute &attr);
/**
 *	Extract real attribute values for temperature acquisition result.
 */
	virtual void read_temperature(Tango::Attribute &attr);
/**
 *	Extract real attribute values for temperatureTarget acquisition result.
 */
	virtual void read_temperatureTarget(Tango::Attribute &attr);
/**
 *	Write temperatureTarget attribute values to hardware.
 */
	virtual void write_temperatureTarget(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for fanSpeed acquisition result.
 */
	virtual void read_fanSpeed(Tango::Attribute &attr);
/**
 *	Write fanSpeed attribute values to hardware.
 */
	virtual void write_fanSpeed(Tango::WAttribute &attr);
/**
 *	Extract real attribute values for globalGain acquisition result.
 */
	virtual void read_globalGain(Tango::Attribute &attr);
/**
 *	Write globalGain attribute values to hardware.
 */
	virtual void write_globalGain(Tango::WAttribute &attr);
/**
 *	Read/Write allowed for tucamVersion attribute.
 */
	virtual bool is_tucamVersion_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for temperature attribute.
 */
	virtual bool is_temperature_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for temperatureTarget attribute.
 */
	virtual bool is_temperatureTarget_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for fanSpeed attribute.
 */
	virtual bool is_fanSpeed_allowed(Tango::AttReqType type);
/**
 *	Read/Write allowed for globalGain attribute.
 */
	virtual bool is_globalGain_allowed(Tango::AttReqType type);
/**
 * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *	@return	State Code
 *	@exception DevFailed
 */
	virtual Tango::DevState	dev_state();

/**
 *	Read the device properties from database
 */
	 void get_device_property();
//@}

	//	Here is the end of the automatic code generation part
	//-------------------------------------------------------------	

	// return true if the device is correctly initialized in init_device
	bool is_device_initialized(){return m_is_device_initialized;};

protected :	
	//	Add your own data members here
	//-----------------------------------------
    //state & status stuff
    bool                      m_is_device_initialized ;
    stringstream              m_status_message;
    std::string               m_global_gain;
    
    //lima OBJECTS
    lima::Dhyana::Interface*  m_hw;
    lima::CtControl*          m_ct;
    lima::Dhyana::Camera*     m_camera;	    
	
};

}	// namespace_ns

#endif	// _DHYANA_H