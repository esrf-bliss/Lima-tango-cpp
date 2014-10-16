static const char *RcsId = "$Id:  $";
//+=============================================================================
//
// file :         AndorCCD.cpp
//
// description :  C++ source for the AndorCCD and its commands.
//                The class is derived from Device. It represents the
//                CORBA servant object which will be accessed from the
//                network. All commands which can be executed on the
//                AndorCCD are implemented in this file.
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
//          This file is generated by POGO
//    (Program Obviously used to Generate tango Object)
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
#ifdef WIN32
#include "tango.h"
#include <PogoHelper.h>
#endif
#include <AndorCCD.h>
#include <AndorCCDClass.h>

#ifndef WIN32
#include "tango.h"
#include <PogoHelper.h>
#endif

namespace AndorCCD_ns
{

//+----------------------------------------------------------------------------
//
// method :         AndorCCD::AndorCCD(string &s)
//
// description :     constructor for simulated AndorCCD
//
// in : - cl : Pointer to the DeviceClass object
//      - s : Device name
//
//-----------------------------------------------------------------------------
AndorCCD::AndorCCD(Tango::DeviceClass *cl,string &s)
:Tango::Device_4Impl(cl,s.c_str())
{
	init_device();
}
AndorCCD::AndorCCD(Tango::DeviceClass *cl,const char *s)
:Tango::Device_4Impl(cl,s)
{
	init_device();
}
AndorCCD::AndorCCD(Tango::DeviceClass *cl,const char *s,const char *d)
:Tango::Device_4Impl(cl,s,d)
{
	init_device();
}
//+----------------------------------------------------------------------------
//
// method :         AndorCCD::delete_device()
//
// description :     will be called at device destruction or at init command.
//
//-----------------------------------------------------------------------------
void AndorCCD::delete_device()
{
	INFO_STREAM << "AndorCCD::AndorCCD() delete device " << device_name << endl;

	DELETE_SCALAR_ATTRIBUTE(attr_temperature_read);
	DELETE_SCALAR_ATTRIBUTE(attr_temperatureTarget_read);
	DELETE_SCALAR_ATTRIBUTE(attr_enabledCooler_read);
	DELETE_SCALAR_ATTRIBUTE(attr_adcMode_read);
	DELETE_DEVSTRING_ATTRIBUTE(attr_currentRate_read);
	DELETE_DEVSTRING_ATTRIBUTE(attr_currentCoolingStatus_read);

	// Delete device allocated objects
	// ...
}

//+----------------------------------------------------------------------------
//
// method :         AndorCCD::init_device()
//
// description :     will be called at device initialization.
//
//-----------------------------------------------------------------------------
void AndorCCD::init_device()
{
	INFO_STREAM << "AndorCCD::AndorCCD() create device " << device_name << endl;

	// Initialise variables to default values
	//--------------------------------------------
	get_device_property();

	CREATE_SCALAR_ATTRIBUTE(attr_temperature_read);
	CREATE_SCALAR_ATTRIBUTE(attr_temperatureTarget_read);
	CREATE_SCALAR_ATTRIBUTE(attr_enabledCooler_read);
	CREATE_SCALAR_ATTRIBUTE(attr_adcMode_read);
	CREATE_DEVSTRING_ATTRIBUTE(attr_currentRate_read,MAX_ATTRIBUTE_STRING_LENGTH);
	CREATE_DEVSTRING_ATTRIBUTE(attr_currentCoolingStatus_read,MAX_ATTRIBUTE_STRING_LENGTH);

	m_is_device_initialized = false;
	set_state(Tango::INIT);
	m_status_message.str("");

	try
	{
		//- get the main object used to pilot the lima framework
		//- in fact LimaDetector is create the singleton control objet
		m_ct = ControlFactory::instance().get_control("AndorCCD");

		//- get interface to specific camera
		m_hw = dynamic_cast<Andor::Interface*>(m_ct->hwInterface());

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
		//write enabledCooler At Init - user is responsible of this
		INFO_STREAM << "Write tango hardware at Init - enabledCooler." << endl;
		transform(coolingStatusAtStartUp.begin(), coolingStatusAtStartUp.end(), coolingStatusAtStartUp.begin(), ::toupper);
		*attr_enabledCooler_read = attr_enabledCooler_write = ("ON" == coolingStatusAtStartUp) ? true : false;
		Tango::WAttribute &enabledCooler = dev_attr->get_w_attr_by_name("enabledCooler");
		enabledCooler.set_write_value(attr_enabledCooler_write);
		write_enabledCooler(enabledCooler);

		//write temperatureTarget
		INFO_STREAM << "Write tango hardware at Init - temperatureTarget." << endl;
		*attr_temperatureTarget_read = attr_temperatureTarget_write = memorizedTemperatureTarget;
		Tango::WAttribute &temperatureTarget = dev_attr->get_w_attr_by_name("temperatureTarget");
		temperatureTarget.set_write_value(attr_temperatureTarget_write);
		write_temperatureTarget(temperatureTarget);         
        
		//write ADC Speed
		INFO_STREAM << "Write tango hardware at Init - adcMode." << endl;
		Tango::WAttribute &adcMode = dev_attr->get_w_attr_by_name("adcMode");
		*attr_adcMode_read = attr_adcMode_write = memorizedADCMode;        
		adcMode.set_write_value(*attr_adcMode_read);
		write_adcMode(adcMode);
       
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
	this->dev_state();
}


//+----------------------------------------------------------------------------
//
// method :         AndorCCD::get_device_property()
//
// description :     Read the device properties from database.
//
//-----------------------------------------------------------------------------
void AndorCCD::get_device_property()
{
	//    Initialize your default values here (if not done with  POGO).
	//------------------------------------------------------------------

	//    Read device properties from database.(Automatic code generation)
	//------------------------------------------------------------------
	Tango::DbData	dev_prop;
	dev_prop.push_back(Tango::DbDatum("DetectorNum"));
	dev_prop.push_back(Tango::DbDatum("CoolingStatusAtStartUp"));
	dev_prop.push_back(Tango::DbDatum("MemorizedADCMode"));
	dev_prop.push_back(Tango::DbDatum("MemorizedTemperatureTarget"));

	//	Call database and extract values
	//--------------------------------------------
	if (Tango::Util::instance()->_UseDb==true)
		get_db_device()->get_property(dev_prop);
	Tango::DbDatum	def_prop, cl_prop;
	AndorCCDClass	*ds_class =
		(static_cast<AndorCCDClass *>(get_device_class()));
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

	//	Try to initialize CoolingStatusAtStartUp from class property
	cl_prop = ds_class->get_class_property(dev_prop[++i].name);
	if (cl_prop.is_empty()==false)	cl_prop  >>  coolingStatusAtStartUp;
	else {
		//	Try to initialize CoolingStatusAtStartUp from default device value
		def_prop = ds_class->get_default_device_property(dev_prop[i].name);
		if (def_prop.is_empty()==false)	def_prop  >>  coolingStatusAtStartUp;
	}
	//	And try to extract CoolingStatusAtStartUp value from database
	if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  coolingStatusAtStartUp;

	//	Try to initialize MemorizedADCMode from class property
	cl_prop = ds_class->get_class_property(dev_prop[++i].name);
	if (cl_prop.is_empty()==false)	cl_prop  >>  memorizedADCMode;
	else {
		//	Try to initialize MemorizedADCMode from default device value
		def_prop = ds_class->get_default_device_property(dev_prop[i].name);
		if (def_prop.is_empty()==false)	def_prop  >>  memorizedADCMode;
	}
	//	And try to extract MemorizedADCMode value from database
	if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  memorizedADCMode;

	//	Try to initialize MemorizedTemperatureTarget from class property
	cl_prop = ds_class->get_class_property(dev_prop[++i].name);
	if (cl_prop.is_empty()==false)	cl_prop  >>  memorizedTemperatureTarget;
	else {
		//	Try to initialize MemorizedTemperatureTarget from default device value
		def_prop = ds_class->get_default_device_property(dev_prop[i].name);
		if (def_prop.is_empty()==false)	def_prop  >>  memorizedTemperatureTarget;
	}
	//	And try to extract MemorizedTemperatureTarget value from database
	if (dev_prop[i].is_empty()==false)	dev_prop[i]  >>  memorizedTemperatureTarget;



	//    End of Automatic code generation
	//------------------------------------------------------------------
	PropertyHelper::create_property_if_empty(this, dev_prop,"-1","DetectorNum");
	PropertyHelper::create_property_if_empty(this, dev_prop,"OFF","CoolingStatusAtStartUp");
	PropertyHelper::create_property_if_empty(this, dev_prop,"2","MemorizedADCMode");
	PropertyHelper::create_property_if_empty(this, dev_prop,"-10","MemorizedTemperatureTarget");
}
//+----------------------------------------------------------------------------
//
// method :         AndorCCD::always_executed_hook()
//
// description :     method always executed before any command is executed
//
//-----------------------------------------------------------------------------
void AndorCCD::always_executed_hook()
{
	DEBUG_STREAM << "AndorCCD::always_executed_hook() entering... " << endl;

    try
    {
		yat::AutoMutex<> _lock(ControlFactory::instance().get_global_mutex());		
        m_status_message.str("");
        //- get the singleton control objet used to pilot the lima framework
		m_ct = ControlFactory::instance().get_control("AndorCCD");

		//- get interface to specific camera
		m_hw = dynamic_cast<Andor::Interface*>(m_ct->hwInterface());

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
// method :         AndorCCD::read_attr_hardware
//
// description :     Hardware acquisition for attributes.
//
//-----------------------------------------------------------------------------
void AndorCCD::read_attr_hardware(vector<long> &attr_list)
{
	DEBUG_STREAM << "AndorCCD::read_attr_hardware(vector<long> &attr_list) entering... " << endl;
	//    Add your own code here
}


//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::read_enabledCooler
// 
// description : 	Extract real attribute values for enabledCooler acquisition result.
//
//-----------------------------------------------------------------------------
void AndorCCD::read_enabledCooler(Tango::Attribute &attr)
{
	DEBUG_STREAM << "AndorCCD::read_enabledCooler(Tango::Attribute &attr) entering... " << endl;
	try
	{
		bool coolerflag = false;
		m_camera->getCooler(coolerflag);
		*attr_enabledCooler_read = coolerflag;
		attr.set_value(attr_enabledCooler_read);
	}
	catch (Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										static_cast<const char*> (string(df.errors[0].desc).c_str()),
										static_cast<const char*> ("AndorCCD::read_enabledCooler"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::read_enabledCooler"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::write_enabledCooler
// 
// description : 	Write enabledCooler attribute values to hardware.
//
//-----------------------------------------------------------------------------
void AndorCCD::write_enabledCooler(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "AndorCCD::write_enabledCooler(Tango::WAttribute &attr) entering... " << endl;
	try
	{
		attr.get_write_value(attr_enabledCooler_write);
		m_camera->setCooler(attr_enabledCooler_write);
	}
	catch (Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										static_cast<const char*> (string(df.errors[0].desc).c_str()),
										static_cast<const char*> ("AndorCCD::write_enabledCooler"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::write_enabledCooler"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::read_currentCoolingStatus
// 
// description : 	Extract real attribute values for currentCoolingStatus acquisition result.
//
//-----------------------------------------------------------------------------
void AndorCCD::read_currentCoolingStatus(Tango::Attribute &attr)
{
	DEBUG_STREAM << "AndorCCD::read_currentCoolingStatus(Tango::Attribute &attr) entering... " << endl;
	try
	{

		std::string cooling_status = "???";
		m_camera->getCoolingStatus(cooling_status);
		strcpy(*attr_currentCoolingStatus_read, cooling_status.c_str());

		attr.set_value(attr_currentCoolingStatus_read);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("AndorCCD::read_currentCoolingStatus"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::read_currentCoolingStatus"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::read_temperatureTarget
// 
// description : 	Extract real attribute values for temperatureTarget acquisition result.
//
//-----------------------------------------------------------------------------
void AndorCCD::read_temperatureTarget(Tango::Attribute &attr)
{
	DEBUG_STREAM << "AndorCCD::read_temperatureTarget(Tango::Attribute &attr) entering... " << endl;
	try
	{
		int temperatureTarget = 0;
		m_camera->getTemperatureSP(temperatureTarget);
		*attr_temperatureTarget_read = temperatureTarget;
		attr.set_value(attr_temperatureTarget_read);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("AndorCCD::read_temperatureTarget"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::read_temperatureTarget"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::write_temperatureTarget
// 
// description : 	Write temperatureTarget attribute values to hardware.
//
//-----------------------------------------------------------------------------
void AndorCCD::write_temperatureTarget(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "AndorCCD::write_temperatureTarget(Tango::WAttribute &attr) entering... " << endl;
	try
	{
		attr.get_write_value(attr_temperatureTarget_write);
		m_camera->setTemperatureSP(attr_temperatureTarget_write);
		PropertyHelper::set_property(this, "MemorizedTemperatureTarget", attr_temperatureTarget_write);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("AndorCCD::write_temperatureTarget"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::write_temperatureTarget"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::read_temperature
// 
// description : 	Extract real attribute values for temperature acquisition result.
//
//-----------------------------------------------------------------------------
void AndorCCD::read_temperature(Tango::Attribute &attr)
{
	DEBUG_STREAM << "AndorCCD::read_temperature(Tango::Attribute &attr) entering... " << endl;
	try
	{
		int temperature = 0;
		m_camera->getTemperature(temperature);
		*attr_temperature_read = (long)temperature;
		attr.set_value(attr_temperature_read);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("AndorCCD::read_temperature"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::read_temperature"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::read_adcMode
// 
// description : 	Extract real attribute values for adcMode acquisition result.
//
//-----------------------------------------------------------------------------
void AndorCCD::read_adcMode(Tango::Attribute &attr)
{
	DEBUG_STREAM << "AndorCCD::read_adcMode(Tango::Attribute &attr) entering... " << endl;
	try
	{
		int adcMode = 0;
		m_camera->getAdcSpeed(adcMode);
		*attr_adcMode_read = adcMode;
		attr.set_value(attr_adcMode_read);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("AndorCCD::read_adcMode"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::read_adcMode"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::write_adcMode
// 
// description : 	Write adcMode attribute values to hardware.
//
//-----------------------------------------------------------------------------
void AndorCCD::write_adcMode(Tango::WAttribute &attr)
{
	DEBUG_STREAM << "AndorCCD::write_adcMode(Tango::WAttribute &attr) entering... " << endl;
	try
	{

		Tango::DevULong newAdcMode;
		attr.get_write_value(newAdcMode);
		if (newAdcMode > 3)
		{
			Tango::Except::throw_exception("DEVICE_ERROR",
										"Wrong Adc Mode:\n"
										"Possibles values are:\n"
										"0 -> 5 MHz\n"
										"1 -> 3 MHz\n"
										"2 -> 1 MHz\n"
										"3 -> 0.05 MHz",
										"AndorCCD::write_adcMode()");
		}

		// Check newAdcMode is OK, then Apply the newAdcMode
		attr_adcMode_write = newAdcMode;
		m_camera->setAdcSpeed(attr_adcMode_write);
		PropertyHelper::set_property(this, "MemorizedADCMode", attr_adcMode_write);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("AndorCCD::write_adcMode"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::write_adcMode"));
	}
}

//+----------------------------------------------------------------------------
//
// method : 		AndorCCD::read_currentRate
// 
// description : 	Extract real attribute values for currentRate acquisition result.
//
//-----------------------------------------------------------------------------
void AndorCCD::read_currentRate(Tango::Attribute &attr)
{
	DEBUG_STREAM << "AndorCCD::read_currentRate(Tango::Attribute &attr) entering... " << endl;
	try
	{
		std::stringstream strRate("");
		float adcmhz = 0;
		m_camera->getAdcSpeedInMhz(adcmhz);
		strRate << adcmhz << " Mhz";
		strcpy(*attr_currentRate_read, (strRate.str()).c_str());

		attr.set_value(attr_currentRate_read);
	}
	catch(Tango::DevFailed& df)
	{
		ERROR_STREAM << df << endl;
		//- rethrow exception
		Tango::Except::re_throw_exception(df,
										  static_cast<const char*> ("TANGO_DEVICE_ERROR"),
										  static_cast<const char*> (string(df.errors[0].desc).c_str()),
										  static_cast<const char*> ("AndorCCD::read_currentRate"));
	}
	catch(Exception& e)
	{
		ERROR_STREAM << e.getErrMsg() << endl;
		//- throw exception
		Tango::Except::throw_exception(
									   static_cast<const char*> ("TANGO_DEVICE_ERROR"),
									   static_cast<const char*> (e.getErrMsg().c_str()),
									   static_cast<const char*> ("AndorCCD::read_currentRate"));
	}
}

//+------------------------------------------------------------------
/**
 *    method:    AndorCCD::dev_state
 *
 *    description:    method to execute "State"
 *    This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *
 * @return    State Code
 *
 */
//+------------------------------------------------------------------
Tango::DevState AndorCCD::dev_state()
{
	Tango::DevState    argout = DeviceImpl::dev_state();
	DEBUG_STREAM << "AndorCCD::dev_state(): entering... !" << endl;


	//    Add your own code to control device here

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

	argout = DeviceState;

	return argout;
}








}	//	namespace