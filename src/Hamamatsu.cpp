static const char *RcsId = "$Id:  $";
//+=============================================================================
//
// file :         Hamamatsu.cpp
//
// description :  C++ source for the Hamamatsu and its commands.
//                The class is derived from Device. It represents the
//                CORBA servant object which will be accessed from the
//                network. All commands which can be executed on the
//                Hamamatsu are implemented in this file.
//
// project :      TANGO Device Server
//
// $Author:  $
//
// $Revision:  $
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
//               BP48 - 91192 Gif sur Yvette
//               FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================



//===================================================================
//
//	The following table gives the correspondence
//	between commands and method name.
//
//  Command name|  Method name
//	----------------------------------------
//  State   |  dev_state()
//  Status  |  dev_status()
//
//===================================================================


#include "tango.h"
#include <PogoHelper.h>
#include <Hamamatsu.h>
#include <HamamatsuClass.h>

#define MAX_ATTRIBUTE_STRING_LENGTH 256
#define C_READOUTSPEED_NORMAL		2
#define C_READOUTSPEED_SLOW			1
#define C_STR_READOUTSPEED_NORMAL	"NORMAL"
#define C_STR_READOUTSPEED_SLOW		"SLOW"

namespace Hamamatsu_ns
{

//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::Hamamatsu(string &s)
//
// description : 	constructor for simulated Hamamatsu
//
// in : - cl : Pointer to the DeviceClass object
//      - s : Device name
//
//-----------------------------------------------------------------------------
Hamamatsu::Hamamatsu(Tango::DeviceClass *cl,string &s)
:Tango::Device_4Impl(cl,s.c_str())
{
	init_device();
}

Hamamatsu::Hamamatsu(Tango::DeviceClass *cl,const char *s)
:Tango::Device_4Impl(cl,s)
{
	init_device();
}

Hamamatsu::Hamamatsu(Tango::DeviceClass *cl,const char *s,const char *d)
:Tango::Device_4Impl(cl,s,d)
{
	init_device();
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::delete_device()
//
// description : 	will be called at device destruction or at init command.
//
//-----------------------------------------------------------------------------
void Hamamatsu::delete_device()
{
	//	Delete device allocated objects

	DELETE_DEVSTRING_ATTRIBUTE(attr_readoutSpeed_read);
	DELETE_SCALAR_ATTRIBUTE(attr_lostFrames_read);
	DELETE_SCALAR_ATTRIBUTE(attr_fps_read);
}

//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::init_device()
//
// description : 	will be called at device initialization.
//
//-----------------------------------------------------------------------------
void Hamamatsu::init_device()
{
	INFO_STREAM << "Hamamatsu::Hamamatsu() create device " << device_name << endl;

	// Initialise variables to default values
	//--------------------------------------------
	get_device_property();

	CREATE_DEVSTRING_ATTRIBUTE(attr_readoutSpeed_read, MAX_ATTRIBUTE_STRING_LENGTH);
	CREATE_SCALAR_ATTRIBUTE(attr_lostFrames_read);
	CREATE_SCALAR_ATTRIBUTE(attr_fps_read);

	m_is_device_initialized = false;
	set_state(Tango::INIT);
	m_status_message.str("");

	try
	{
		//- get the main object used to pilot the lima framework		
		m_ct = ControlFactory::instance().get_control("Hamamatsu");
		
		//- get interface to specific camera
		m_hw = dynamic_cast<lima::Hamamatsu::Interface*>(m_ct->hwInterface());
		
		//- get camera to specific detector
		m_camera = &(m_hw->getCamera());

	}
	catch(Exception& e)
	{
		INFO_STREAM << "Initialization Failed : " << e.getErrMsg() << endl;
		m_status_message << "Initialization Failed : " << e.getErrMsg( ) << endl;
		m_is_device_initialized = false;
		set_state(Tango::FAULT);
		return;
	}
	catch(...)
	{
		INFO_STREAM << "Initialization Failed : UNKNOWN" << endl;
		m_status_message << "Initialization Failed : UNKNOWN" << endl;
		set_state(Tango::FAULT);
		m_is_device_initialized = false;
		return;
	}
	
	//write at init
	try
	{      		
		//write Readout Speed
		INFO_STREAM << "Write tango hardware at Init - readoutSpeed." << endl;
		Tango::WAttribute &readoutSpeed = dev_attr->get_w_attr_by_name("readoutSpeed");
		m_readoutSpeed = memorizedReadoutSpeed;
		strcpy(*attr_readoutSpeed_read, memorizedReadoutSpeed.c_str());
		readoutSpeed.set_write_value(m_readoutSpeed);
		write_readoutSpeed(readoutSpeed);
	}
	catch(Exception& e)
	{
		INFO_STREAM << "Initialization Failed : " << e.getErrMsg() << endl;
		m_status_message << "Initialization Failed : " << e.getErrMsg( ) << endl;
		m_is_device_initialized = false;
		set_state(Tango::FAULT);
		return;
	}
	catch(...)
	{
		INFO_STREAM << "Initialization Failed : UNKNOWN" << endl;
		m_status_message << "Initialization Failed : UNKNOWN" << endl;
		set_state(Tango::FAULT);
		m_is_device_initialized = false;
		return;
	}

	m_is_device_initialized = true;
	set_state(Tango::STANDBY);
	dev_state();	
}


//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::get_device_property()
//
// description : 	Read the device properties from database.
//
//-----------------------------------------------------------------------------
void Hamamatsu::get_device_property()
{
	//	Initialize your default values here (if not done with  POGO).
	//------------------------------------------------------------------

	//	Read device properties from database.(Automatic code generation)
	//------------------------------------------------------------------
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("DetectorNum"));
	dev_prop.push_back(Tango::DbDatum("MemorizedReadoutSpeed"));

	//	Call database and extract values
	//--------------------------------------------
	if (Tango::Util::instance()->_UseDb==true)
		get_db_device()->get_property(dev_prop);
	Tango::DbDatum	def_prop, cl_prop;
	HamamatsuClass	*ds_class =
		(static_cast<HamamatsuClass *>(get_device_class()));
	int	i = -1;

	//	Try to initialize DetectorNum from class property
	cl_prop = ds_class->get_class_property(dev_prop[++i].name);
	if (cl_prop.is_empty()==false)	cl_prop  >>  detectorNum;
	else {
		//	Try to initialize DetectorNum from default device value
		def_prop = ds_class->get_default_device_property(dev_prop[i].name);
		if (def_prop.is_empty()==false)	def_prop  >>  detectorNum;
	}
	//	And try to extract DetectorNum value from database
	if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  detectorNum;

	//	Try to initialize MemorizedReadoutSpeed from class property
	cl_prop = ds_class->get_class_property(dev_prop[++i].name);
	if (cl_prop.is_empty()==false)	cl_prop  >>  memorizedReadoutSpeed;
	else {
		//	Try to initialize MemorizedReadoutSpeed from default device value
		def_prop = ds_class->get_default_device_property(dev_prop[i].name);
		if (def_prop.is_empty()==false)	def_prop  >>  memorizedReadoutSpeed;
	}
	//	And try to extract MemorizedReadoutSpeed value from database
	if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  memorizedReadoutSpeed;



	//	End of Automatic code generation
	//------------------------------------------------------------------
	yat4tango::PropertyHelper::create_property_if_empty(this, dev_prop, "0", "DetectorNum");
	yat4tango::PropertyHelper::create_property_if_empty(this, dev_prop, "2", "MemorizedReadoutSpeed");

}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::always_executed_hook()
//
// description : 	method always executed before any command is executed
//
//-----------------------------------------------------------------------------
void Hamamatsu::always_executed_hook()
{
    try
    {
        m_status_message.str("");
        //- get the singleton control objet used to pilot the lima framework
		m_ct = ControlFactory::instance().get_control("Hamamatsu");
		
		//- get interface to specific camera
		m_hw = dynamic_cast<lima::Hamamatsu::Interface*>(m_ct->hwInterface());
		
		//- get camera to specific detector
		m_camera = &(m_hw->getCamera());
		
		//update state
        dev_state();
	}
    catch (Exception& e)
    {
        ERROR_STREAM << e.getErrMsg() << endl;
        m_status_message << "Initialization Failed : " << e.getErrMsg() << endl;
        //- throw exception
        set_state(Tango::FAULT);
        m_is_device_initialized = false;
        return;
    }
    catch (...)
    {
        ERROR_STREAM << "Initialization Failed : UNKNOWN" << endl;
        m_status_message << "Initialization Failed : UNKNOWN" << endl;
        //- throw exception
        set_state(Tango::FAULT);
        m_is_device_initialized = false;
        return;
    }
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::read_attr_hardware
//
// description : 	Hardware acquisition for attributes.
//
//-----------------------------------------------------------------------------
void Hamamatsu::read_attr_hardware(vector<long> &attr_list)
{
	DEBUG_STREAM << "Hamamatsu::read_attr_hardware(vector<long> &attr_list) entering... "<< endl;
	//	Add your own code here
}
//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::read_fps
// 
// description : 	Extract real attribute values for fps acquisition result.
//
//-----------------------------------------------------------------------------
void Hamamatsu::read_fps(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Hamamatsu::read_fps(Tango::Attribute &attr) entering... "<< endl;

	try
	{
		double fps = 0.0;
		m_camera->getFPS(fps);
		*attr_fps_read = fps;
		attr.set_value(attr_fps_read);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("Hamamatsu::read_fps"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("Hamamatsu::read_fps"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::read_lostFrames
// 
// description : 	Extract real attribute values for lostFrames acquisition result.
//
//-----------------------------------------------------------------------------
void Hamamatsu::read_lostFrames(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Hamamatsu::read_lostFrames(Tango::Attribute &attr) entering... "<< endl;
	
	try
	{
		unsigned long int lostFrames = 0;
		m_camera->getLostFrames(lostFrames);
		*attr_lostFrames_read = lostFrames;
		attr.set_value(attr_lostFrames_read);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("Hamamatsu::read_lostFrames"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("Hamamatsu::read_lostFrames"));
	}	
}


//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::read_readoutSpeed
//
// description : 	Extract real attribute values for readoutSpeed acquisition result.
//
//-----------------------------------------------------------------------------
void Hamamatsu::read_readoutSpeed(Tango::Attribute &attr)
{
	DEBUG_STREAM << "Hamamatsu::read_readoutSpeed(Tango::Attribute &attr) entering... "<< endl;

	try
	{
		short int readoutSpeed = 0;
		m_camera->getReadoutSpeed(readoutSpeed);

		std::string readoutSpeedName = "";
		switch (readoutSpeed)
		{
			case C_READOUTSPEED_SLOW:	readoutSpeedName = C_STR_READOUTSPEED_SLOW;
				break;
			case C_READOUTSPEED_NORMAL:	readoutSpeedName = C_STR_READOUTSPEED_NORMAL;
				break;
			default:	readoutSpeedName = "ERROR";
				break;
		}

		strcpy(*attr_readoutSpeed_read, readoutSpeedName.c_str());
		attr.set_value(attr_readoutSpeed_read);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("Hamamatsu::read_readoutSpeed"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("Hamamatsu::read_readoutSpeed"));
	}	
}

//+----------------------------------------------------------------------------
//
// method : 		Hamamatsu::write_readoutSpeed
//
// description : 	Write readoutSpeed attribute values to hardware.
//
//-----------------------------------------------------------------------------
void Hamamatsu::write_readoutSpeed(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "Hamamatsu::write_readoutSpeed(Tango::WAttribute &attr) entering... "<< endl;
	
	try
	{
		m_readoutSpeed = *attr_readoutSpeed_read;
		attr.get_write_value(attr_readoutSpeed_write);
		string current = attr_readoutSpeed_write;
		transform(current.begin(), current.end(), current.begin(), ::toupper);
		if (current != C_STR_READOUTSPEED_NORMAL &&
			current != C_STR_READOUTSPEED_SLOW)
		{			
			strcpy(attr_readoutSpeed_write, m_readoutSpeed.c_str());
			
			string userMsg;
			userMsg = string("Available Readout speeds are:\n- ") + string(C_STR_READOUTSPEED_NORMAL) + string("\n- ") + string(C_STR_READOUTSPEED_SLOW);

			Tango::Except::throw_exception(	(const char*) ("CONFIGURATION_ERROR"),
											(const char*) (userMsg.c_str()),
											(const char*) ("LimaDetector::write_readoutSpeed"));
		}

		short int readoutSpeed = C_READOUTSPEED_NORMAL;
		if (current == C_STR_READOUTSPEED_SLOW)
			readoutSpeed = C_READOUTSPEED_SLOW;
		else if (current == C_STR_READOUTSPEED_NORMAL)
			readoutSpeed = C_READOUTSPEED_NORMAL;
		
		//- THIS IS AN AVAILABLE READOUT SPEED
		m_readoutSpeed = current;
		m_camera->setReadoutSpeed(readoutSpeed);
		PropertyHelper::set_property(this, "MemorizedReadoutSpeed", m_readoutSpeed);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("Hamamatsu::write_readoutSpeed"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("Hamamatsu::write_readoutSpeed"));
	}	
}






//+------------------------------------------------------------------
/**
 *	method:	Hamamatsu::dev_state
 *
 *	description:	method to execute "State"
 *	This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *
 * @return	State Code
 *
 */
//+------------------------------------------------------------------
Tango::DevState Hamamatsu::dev_state()
{
	Tango::DevState	argout = DeviceImpl::dev_state();
	DEBUG_STREAM << "Hamamatsu::dev_state(): entering... !" << endl;

	//	Add your own code to control device here
	stringstream    DeviceStatus;
	DeviceStatus     << "";
	Tango::DevState DeviceState    = Tango::STANDBY;
	if(!m_is_device_initialized )
	{
		DeviceState            = Tango::FAULT;
		DeviceStatus        << m_status_message.str();
	}
	else
	{
		// state & status are retrieved from Factory, Factory is updated by Generic device
		DeviceState = ControlFactory::instance().get_state();
		DeviceStatus << ControlFactory::instance().get_status();
	}

	set_state(DeviceState);
	set_status(DeviceStatus.str());

	return DeviceState;
}




}	//	namespace