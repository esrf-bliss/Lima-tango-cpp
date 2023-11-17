/*----- PROTECTED REGION ID(SpectrumOneCCDClass.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        SpectrumOneCCDClass.cpp
//
// description : C++ source for the SpectrumOneCCDClass.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the SpectrumOneCCD once per process.
//
// project :     
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
//
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#include <SpectrumOneCCDClass.h>

/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass.cpp

//-------------------------------------------------------------------
/**
 *	Create SpectrumOneCCDClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_SpectrumOneCCD_class(const char *name) {
		return SpectrumOneCCD_ns::SpectrumOneCCDClass::init(name);
	}
}

namespace SpectrumOneCCD_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
SpectrumOneCCDClass *SpectrumOneCCDClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		SpectrumOneCCDClass::SpectrumOneCCDClass(string &s)
 * description : 	constructor for the SpectrumOneCCDClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
SpectrumOneCCDClass::SpectrumOneCCDClass(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering SpectrumOneCCDClass constructor" << endl;
	set_default_property();
	write_class_property();

	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::constructor

	cout2 << "Leaving SpectrumOneCCDClass constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		SpectrumOneCCDClass::~SpectrumOneCCDClass()
 * description : 	destructor for the SpectrumOneCCDClass
 */
//--------------------------------------------------------
SpectrumOneCCDClass::~SpectrumOneCCDClass()
{
	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		SpectrumOneCCDClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
SpectrumOneCCDClass *SpectrumOneCCDClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new SpectrumOneCCDClass(s);
		}
		catch (bad_alloc &)
		{
			throw;
		}
	}
	return _instance;
}

//--------------------------------------------------------
/**
 * method : 		SpectrumOneCCDClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
SpectrumOneCCDClass *SpectrumOneCCDClass::instance()
{
	if (_instance == NULL)
	{
		cerr << "Class is not initialised !!" << endl;
		exit(-1);
	}
	return _instance;
}



//===================================================================
//	Command execution method calls
//===================================================================
//--------------------------------------------------------
/**
 * method : 		GetTemperatureClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *GetTemperatureClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "GetTemperatureClass::execute(): arrived" << endl;
	((static_cast<SpectrumOneCCD *>(device))->get_temperature());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		ForceConfigClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *ForceConfigClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "ForceConfigClass::execute(): arrived" << endl;
	((static_cast<SpectrumOneCCD *>(device))->force_config());
	return new CORBA::Any();
}

//--------------------------------------------------------
/**
 * method : 		GetGainClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *GetGainClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "GetGainClass::execute(): arrived" << endl;
	((static_cast<SpectrumOneCCD *>(device))->get_gain());
	return new CORBA::Any();
}


//===================================================================
//	Properties management
//===================================================================
//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum SpectrumOneCCDClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum SpectrumOneCCDClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum SpectrumOneCCDClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void SpectrumOneCCDClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties

	//	Set Default device Properties
	prop_name = "CameraGpibAddress";
	prop_desc = "Address of the camera on the GPIB bus (from 0 to 30)";
	prop_def  = "0";
	vect_data.clear();
	vect_data.push_back("0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "GpibBoardIndex";
	prop_desc = "Index of the NI GPIB board";
	prop_def  = "0";
	vect_data.clear();
	vect_data.push_back("0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "TablesPath";
	prop_desc = "Path of the tables to be loaded in the camera for its initialization";
	prop_def  = "/usr/Local/configFiles/SpectrumOne";
	vect_data.clear();
	vect_data.push_back("/usr/Local/configFiles/SpectrumOne");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "ExpertConfig";
	prop_desc = "Advanced config for the camera";
	prop_def  = "[CCD_config]\nport=\ntotal_active_x_pixels=\ntotal_active_y_pixels=\nnum_serial_pixels_before_active=\nnum_serial_pixels_after_active=\nnum_parallel_rows_before_active=\nnum_parallel_rows_after_active=\nregister_loc_and_direction=\nmin_temperature=\nmax_temperature=\nmin_shutter_time=\nmax_shutter_time=\nmin_gain=\nmax_gain=\nh_pixel_spacing=\nv_pixel_spacing=\ntotal_parallel_pixels=\ntotal_serial_pixels=";
	vect_data.clear();
	vect_data.push_back("[CCD_config]");
	vect_data.push_back("port=");
	vect_data.push_back("total_active_x_pixels=");
	vect_data.push_back("total_active_y_pixels=");
	vect_data.push_back("num_serial_pixels_before_active=");
	vect_data.push_back("num_serial_pixels_after_active=");
	vect_data.push_back("num_parallel_rows_before_active=");
	vect_data.push_back("num_parallel_rows_after_active=");
	vect_data.push_back("register_loc_and_direction=");
	vect_data.push_back("min_temperature=");
	vect_data.push_back("max_temperature=");
	vect_data.push_back("min_shutter_time=");
	vect_data.push_back("max_shutter_time=");
	vect_data.push_back("min_gain=");
	vect_data.push_back("max_gain=");
	vect_data.push_back("h_pixel_spacing=");
	vect_data.push_back("v_pixel_spacing=");
	vect_data.push_back("total_parallel_pixels=");
	vect_data.push_back("total_serial_pixels=");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "InvertX";
	prop_desc = "Used to invert the X axis of the images";
	prop_def  = "true";
	vect_data.clear();
	vect_data.push_back("true");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "TablesMode";
	prop_desc = "Mode of the tables to send to the camera for its initialization.\nIs contained in the file names of the tables.\nFor example the mode of XXXX1401.TAB is 1401.";
	prop_def  = "1401";
	vect_data.clear();
	vect_data.push_back("1401");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "SimpleCommandTimeout";
	prop_desc = "Default timeout for commands:\nTNONE   Infinite timeout\nT10us   Timeout of 10 us\nT30us   Timeout of 30 us\nT100us  Timeout of 100 us\nT300us  Timeout of 300 us\nT1ms    Timeout of 1 ms\nT3ms    Timeout of 3 ms\nT10ms   Timeout of 10 ms\nT30ms   Timeout of 30 ms\nT100ms  Timeout of 100 ms\nT300ms  Timeout of 300 ms\nT1s     Timeout of 1 s\nT3s     Timeout of 3 s\nT10s    Timeout of 10 s\nT30s    Timeout of 30 s\nT100s   Timeout of 100 s\nT300s   Timeout of 300 s\nT1000s  Timeout of 1000 s";
	prop_def  = "T3s";
	vect_data.clear();
	vect_data.push_back("T3s");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "DataAcquisitionTimeout";
	prop_desc = "Timeout for data reception:\nTNONE   Infinite timeout\nT10us   Timeout of 10 us\nT30us   Timeout of 30 us\nT100us  Timeout of 100 us\nT300us  Timeout of 300 us\nT1ms    Timeout of 1 ms\nT3ms    Timeout of 3 ms\nT10ms   Timeout of 10 ms\nT30ms   Timeout of 30 ms\nT100ms  Timeout of 100 ms\nT300ms  Timeout of 300 ms\nT1s     Timeout of 1 s\nT3s     Timeout of 3 s\nT10s    Timeout of 10 s\nT30s    Timeout of 30 s\nT100s   Timeout of 100 s\nT300s   Timeout of 300 s\nT1000s  Timeout of 1000 s";
	prop_def  = "T100s";
	vect_data.clear();
	vect_data.push_back("T100s");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
}

//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void SpectrumOneCCDClass::write_class_property()
{
	//	First time, check if database used
	if (Tango::Util::_UseDb == false)
		return;

	Tango::DbData	data;
	string	classname = get_name();
	string	header;
	string::size_type	start, end;

	//	Put title
	Tango::DbDatum	title("ProjectTitle");
	string	str_title("SpectrumOne");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("Specific TANGO device for the LIMA plugin SpectrumOne.");
	description << str_desc;
	data.push_back(description);

	//  Put inheritance
	Tango::DbDatum	inher_datum("InheritedFrom");
	vector<string> inheritance;
	inheritance.push_back("TANGO_BASE_CLASS");
	inher_datum << inheritance;
	data.push_back(inher_datum);

	//	Call database and and values
	get_db_class()->put_property(data);
}

//===================================================================
//	Factory methods
//===================================================================

//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void SpectrumOneCCDClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
    //	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new SpectrumOneCCD(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	//erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		SpectrumOneCCD *dev = static_cast<SpectrumOneCCD *>(device_list[device_list.size()-i]);
		//dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

    // TO AVOID BUG WITH INNER APPENDER
    return;
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new SpectrumOneCCD(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		SpectrumOneCCD *dev = static_cast<SpectrumOneCCD *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void SpectrumOneCCDClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::attribute_factory_before
	//	Attribute : lastTemperature
	lastTemperatureAttrib	*lasttemperature = new lastTemperatureAttrib();
	Tango::UserDefaultAttrProp	lasttemperature_prop;
	lasttemperature_prop.set_description("Last temperature of the CCD");
	//	label	not set for lastTemperature
	lasttemperature_prop.set_unit("K");
	//	standard_unit	not set for lastTemperature
	//	display_unit	not set for lastTemperature
	//	format	not set for lastTemperature
	//	max_value	not set for lastTemperature
	//	min_value	not set for lastTemperature
	//	max_alarm	not set for lastTemperature
	//	min_alarm	not set for lastTemperature
	//	max_warning	not set for lastTemperature
	//	min_warning	not set for lastTemperature
	//	delta_t	not set for lastTemperature
	//	delta_val	not set for lastTemperature
	
	lasttemperature->set_default_properties(lasttemperature_prop);
	//	Not Polled
	lasttemperature->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(lasttemperature);

	//	Attribute : gain
	gainAttrib	*gain = new gainAttrib();
	Tango::UserDefaultAttrProp	gain_prop;
	gain_prop.set_description("Define CCD gain of the camera.");
	//	label	not set for gain
	//	unit	not set for gain
	//	standard_unit	not set for gain
	//	display_unit	not set for gain
	//	format	not set for gain
	//	max_value	not set for gain
	//	min_value	not set for gain
	//	max_alarm	not set for gain
	//	min_alarm	not set for gain
	//	max_warning	not set for gain
	//	min_warning	not set for gain
	//	delta_t	not set for gain
	//	delta_val	not set for gain
	
	gain->set_default_properties(gain_prop);
	//	Not Polled
	gain->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(gain);

	//	Attribute : numFlushes
	numFlushesAttrib	*numflushes = new numFlushesAttrib();
	Tango::UserDefaultAttrProp	numflushes_prop;
	numflushes_prop.set_description("Set number of flushes on the camera");
	//	label	not set for numFlushes
	//	unit	not set for numFlushes
	//	standard_unit	not set for numFlushes
	//	display_unit	not set for numFlushes
	//	format	not set for numFlushes
	//	max_value	not set for numFlushes
	//	min_value	not set for numFlushes
	//	max_alarm	not set for numFlushes
	//	min_alarm	not set for numFlushes
	//	max_warning	not set for numFlushes
	//	min_warning	not set for numFlushes
	//	delta_t	not set for numFlushes
	//	delta_val	not set for numFlushes
	
	numflushes->set_default_properties(numflushes_prop);
	//	Not Polled
	numflushes->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(numflushes);

	//	Attribute : openShutter
	openShutterAttrib	*openshutter = new openShutterAttrib();
	Tango::UserDefaultAttrProp	openshutter_prop;
	openshutter_prop.set_description("Open/close camera shutter.\nTrue = Opened\nFalse = Closed");
	//	label	not set for openShutter
	//	unit	not set for openShutter
	//	standard_unit	not set for openShutter
	//	display_unit	not set for openShutter
	//	format	not set for openShutter
	//	max_value	not set for openShutter
	//	min_value	not set for openShutter
	//	max_alarm	not set for openShutter
	//	min_alarm	not set for openShutter
	//	max_warning	not set for openShutter
	//	min_warning	not set for openShutter
	//	delta_t	not set for openShutter
	//	delta_val	not set for openShutter
	
	openshutter->set_default_properties(openshutter_prop);
	//	Not Polled
	openshutter->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(openshutter);


	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::pipe_factory()
 *	Description : Create the pipe object(s)
 *                and store them in the pipe list
 */
//--------------------------------------------------------
void SpectrumOneCCDClass::pipe_factory()
{
	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::pipe_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::pipe_factory_before
	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::pipe_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::pipe_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void SpectrumOneCCDClass::command_factory()
{
	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::command_factory_before


	//	Command GetTemperature
	GetTemperatureClass	*pGetTemperatureCmd =
		new GetTemperatureClass("GetTemperature",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pGetTemperatureCmd);

	//	Command ForceConfig
	ForceConfigClass	*pForceConfigCmd =
		new ForceConfigClass("ForceConfig",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pForceConfigCmd);

	//	Command GetGain
	GetGainClass	*pGetGainCmd =
		new GetGainClass("GetGain",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pGetGainCmd);

	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		SpectrumOneCCDClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list
 */
//--------------------------------------------------------
void SpectrumOneCCDClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		SpectrumOneCCDClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void SpectrumOneCCDClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		SpectrumOneCCD *dev = static_cast<SpectrumOneCCD *> (dev_impl);

		vector<Tango::Attribute *> &dev_att_list = dev->get_device_attr()->get_attribute_list();
		vector<Tango::Attribute *>::iterator ite_att;
		for (ite_att=dev_att_list.begin() ; ite_att != dev_att_list.end() ; ++ite_att)
		{
			string att_name((*ite_att)->get_name_lower());
			if ((att_name == "state") || (att_name == "status"))
				continue;
			vector<string>::iterator ite_str = find(defaultAttList.begin(), defaultAttList.end(), att_name);
			if (ite_str == defaultAttList.end())
			{
				cout2 << att_name << " is a UNWANTED dynamic attribute for device " << (*devlist_ptr)[i] << endl;
				Tango::Attribute &att = dev->get_device_attr()->get_attr_by_name(att_name.c_str());
				dev->remove_attribute(att_list[att.get_attr_idx()], true, false);
				--ite_att;
			}
		}
	}
	/*----- PROTECTED REGION ID(SpectrumOneCCDClass::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : SpectrumOneCCDClass::get_attr_object_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *SpectrumOneCCDClass::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; ++it)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(SpectrumOneCCDClass::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	SpectrumOneCCDClass::Additional Methods
} //	namespace
