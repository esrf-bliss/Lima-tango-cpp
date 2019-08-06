/*----- PROTECTED REGION ID(LambdaClass.cpp) ENABLED START -----*/
static const char *RcsId      = "$Id:  $";
static const char *TagName    = "$Name:  $";
static const char *CvsPath    = "$Source:  $";
static const char *SvnPath    = "$HeadURL:  $";
static const char *HttpServer = "http://www.esrf.eu/computing/cs/tango/tango_doc/ds_doc/";
//=============================================================================
//
// file :        LambdaClass.cpp
//
// description : C++ source for the LambdaClass.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the Lambda once per process.
//
// project :     Sls dectector TANGO specific device.
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


#include <LambdaClass.h>

/*----- PROTECTED REGION END -----*/	//	LambdaClass.cpp

//-------------------------------------------------------------------
/**
 *	Create LambdaClass singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_Lambda_class(const char *name) {
		return Lambda_ns::LambdaClass::init(name);
	}
}

namespace Lambda_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
LambdaClass *LambdaClass::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		LambdaClass::LambdaClass(string &s)
 * description : 	constructor for the LambdaClass
 *
 * @param s	The class name
 */
//--------------------------------------------------------
LambdaClass::LambdaClass(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering LambdaClass constructor" << endl;
	set_default_property();
	write_class_property();

	/*----- PROTECTED REGION ID(LambdaClass::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::constructor

	cout2 << "Leaving LambdaClass constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		LambdaClass::~LambdaClass()
 * description : 	destructor for the LambdaClass
 */
//--------------------------------------------------------
LambdaClass::~LambdaClass()
{
	/*----- PROTECTED REGION ID(LambdaClass::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		LambdaClass::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
LambdaClass *LambdaClass::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new LambdaClass(s);
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
 * method : 		LambdaClass::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
LambdaClass *LambdaClass::instance()
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

//===================================================================
//	Properties management
//===================================================================
//--------------------------------------------------------
/**
 *	Method      : LambdaClass::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum LambdaClass::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : LambdaClass::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum LambdaClass::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : LambdaClass::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum LambdaClass::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : LambdaClass::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void LambdaClass::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties

	//	Set Default device Properties
	prop_name = "ConfigFilesPath";
	prop_desc = "Configuration files path used during the camera instanciation.";
	prop_def  = "";
	vect_data.clear();
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "DistortionCorrection";
	prop_desc = "set distortion correction.<br>\nWhen distortion correction is enabled :<br>\n- Large pixels are divided according to predefined denominator. <br>\n- The values of the pixels are rounded during division. <br>\n- If pixel value is saturated, the division is not applied.<br>";
	prop_def  = "True";
	vect_data.clear();
	vect_data.push_back("True");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "MemorizedEnergyThreshold1";
	prop_desc = "Only the device could modify this property <br>\nThe User should never change this property<br>";
	prop_def  = "7000.0";
	vect_data.clear();
	vect_data.push_back("7000.0");
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
 *	Method      : LambdaClass::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void LambdaClass::write_class_property()
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
	string	str_title("XSpectrum Lambda detector TANGO specific device.");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("Device for Lambda detectors from XSpectrum.");
	description << str_desc;
	data.push_back(description);

	//	put cvs or svn location
	string	filename("Lambda");
	filename += "Class.cpp";

	// check for cvs information
	string	src_path(CvsPath);
	start = src_path.find("/");
	if (start!=string::npos)
	{
		end   = src_path.find(filename);
		if (end>start)
		{
			string	strloc = src_path.substr(start, end-start);
			//	Check if specific repository
			start = strloc.find("/cvsroot/");
			if (start!=string::npos && start>0)
			{
				string	repository = strloc.substr(0, start);
				if (repository.find("/segfs/")!=string::npos)
					strloc = "ESRF:" + strloc.substr(start, strloc.length()-start);
			}
			Tango::DbDatum	cvs_loc("cvs_location");
			cvs_loc << strloc;
			data.push_back(cvs_loc);
		}
	}

	// check for svn information
	else
	{
		string	src_path(SvnPath);
		start = src_path.find("://");
		if (start!=string::npos)
		{
			end = src_path.find(filename);
			if (end>start)
			{
				header = "$HeadURL: ";
				start = header.length();
				string	strloc = src_path.substr(start, (end-start));
				
				Tango::DbDatum	svn_loc("svn_location");
				svn_loc << strloc;
				data.push_back(svn_loc);
			}
		}
	}

	//	Get CVS or SVN revision tag
	
	// CVS tag
	string	tagname(TagName);
	header = "$Name: ";
	start = header.length();
	string	endstr(" $");
	
	end   = tagname.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strtag = tagname.substr(start, end-start);
		Tango::DbDatum	cvs_tag("cvs_tag");
		cvs_tag << strtag;
		data.push_back(cvs_tag);
	}
	
	// SVN tag
	string	svnpath(SvnPath);
	header = "$HeadURL: ";
	start = header.length();
	
	end   = svnpath.find(endstr);
	if (end!=string::npos && end>start)
	{
		string	strloc = svnpath.substr(start, end-start);
		
		string tagstr ("/tags/");
		start = strloc.find(tagstr);
		if ( start!=string::npos )
		{
			start = start + tagstr.length();
			end   = strloc.find(filename);
			string	strtag = strloc.substr(start, end-start-1);
			
			Tango::DbDatum	svn_tag("svn_tag");
			svn_tag << strtag;
			data.push_back(svn_tag);
		}
	}

	//	Get URL location
	string	httpServ(HttpServer);
	if (httpServ.length()>0)
	{
		Tango::DbDatum	db_doc_url("doc_url");
		db_doc_url << httpServ;
		data.push_back(db_doc_url);
	}

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
 *	Method      : LambdaClass::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void LambdaClass::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(LambdaClass::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new Lambda(this, (*devlist_ptr)[i]));							 
	}

	//	Manage dynamic attributes if any
	//erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		Lambda *dev = static_cast<Lambda *>(device_list[device_list.size()-i]);
		//dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(LambdaClass::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : LambdaClass::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void LambdaClass::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(LambdaClass::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::attribute_factory_before
	//	Attribute : configFilesPath
	configFilesPathAttrib	*configfilespath = new configFilesPathAttrib();
	Tango::UserDefaultAttrProp	configfilespath_prop;
	configfilespath_prop.set_description("Path of configuration file.");
	//	label	not set for configFilesPath
	//	unit	not set for configFilesPath
	//	standard_unit	not set for configFilesPath
	//	display_unit	not set for configFilesPath
	//	format	not set for configFilesPath
	//	max_value	not set for configFilesPath
	//	min_value	not set for configFilesPath
	//	max_alarm	not set for configFilesPath
	//	min_alarm	not set for configFilesPath
	//	max_warning	not set for configFilesPath
	//	min_warning	not set for configFilesPath
	//	delta_t	not set for configFilesPath
	//	delta_val	not set for configFilesPath
	
	configfilespath->set_default_properties(configfilespath_prop);
	//	Not Polled
	configfilespath->set_disp_level(Tango::EXPERT);
	//	Not Memorized
	att_list.push_back(configfilespath);

	//	Attribute : readoutTime
	readoutTimeAttrib	*readouttime = new readoutTimeAttrib();
	Tango::UserDefaultAttrProp	readouttime_prop;
	readouttime_prop.set_description("get readout time during image acquisition.<br>\nDepends of the operating mode.<br>");
	//	label	not set for readoutTime
	readouttime_prop.set_unit("ms");
	readouttime_prop.set_standard_unit("ms");
	readouttime_prop.set_display_unit("ms");
	readouttime_prop.set_format("%1.0f");
	//	max_value	not set for readoutTime
	//	min_value	not set for readoutTime
	//	max_alarm	not set for readoutTime
	//	min_alarm	not set for readoutTime
	//	max_warning	not set for readoutTime
	//	min_warning	not set for readoutTime
	//	delta_t	not set for readoutTime
	//	delta_val	not set for readoutTime
	
	readouttime->set_default_properties(readouttime_prop);
	//	Not Polled
	readouttime->set_disp_level(Tango::EXPERT);
	//	Not Memorized
	att_list.push_back(readouttime);

	//	Attribute : distortionCorrection
	distortionCorrectionAttrib	*distortioncorrection = new distortionCorrectionAttrib();
	Tango::UserDefaultAttrProp	distortioncorrection_prop;
	distortioncorrection_prop.set_description("get distortion correction.<br>\nWhen distortion correction is enabled :<br>\n- Large pixels are divided according to predefined denominator. <br>\n- The values of the pixels are rounded during division. <br>\n- If pixel value is saturated, the division is not applied.<br>");
	//	label	not set for distortionCorrection
	//	unit	not set for distortionCorrection
	//	standard_unit	not set for distortionCorrection
	//	display_unit	not set for distortionCorrection
	//	format	not set for distortionCorrection
	//	max_value	not set for distortionCorrection
	//	min_value	not set for distortionCorrection
	//	max_alarm	not set for distortionCorrection
	//	min_alarm	not set for distortionCorrection
	//	max_warning	not set for distortionCorrection
	//	min_warning	not set for distortionCorrection
	//	delta_t	not set for distortionCorrection
	//	delta_val	not set for distortionCorrection
	
	distortioncorrection->set_default_properties(distortioncorrection_prop);
	//	Not Polled
	distortioncorrection->set_disp_level(Tango::EXPERT);
	//	Not Memorized
	att_list.push_back(distortioncorrection);

	//	Attribute : energyThreshold1
	energyThreshold1Attrib	*energythreshold1 = new energyThreshold1Attrib();
	Tango::UserDefaultAttrProp	energythreshold1_prop;
	energythreshold1_prop.set_description("set/get first energy threshold in eV.<br>\nThe photon is counted If the energy is above this threshold.<br>");
	//	label	not set for energyThreshold1
	energythreshold1_prop.set_unit("eV");
	energythreshold1_prop.set_standard_unit("eV");
	energythreshold1_prop.set_display_unit("eV");
	energythreshold1_prop.set_format("%6.2f");
	energythreshold1_prop.set_max_value("300000");
	energythreshold1_prop.set_min_value("0");
	//	max_alarm	not set for energyThreshold1
	//	min_alarm	not set for energyThreshold1
	//	max_warning	not set for energyThreshold1
	//	min_warning	not set for energyThreshold1
	//	delta_t	not set for energyThreshold1
	//	delta_val	not set for energyThreshold1
	
	energythreshold1->set_default_properties(energythreshold1_prop);
	//	Not Polled
	energythreshold1->set_disp_level(Tango::OPERATOR);
	energythreshold1->set_memorized();
	energythreshold1->set_memorized_init(false);
	att_list.push_back(energythreshold1);

	//	Attribute : operatingMode
	operatingModeAttrib	*operatingmode = new operatingModeAttrib();
	Tango::UserDefaultAttrProp	operatingmode_prop;
	operatingmode_prop.set_description("get operating mode of the detector:<br>\n24bit mode : TwentyFourBit<br>\n12bit mode :  ContinuousReadWrite<br>");
	operatingmode_prop.set_label("operatingMode");
	//	unit	not set for operatingMode
	//	standard_unit	not set for operatingMode
	//	display_unit	not set for operatingMode
	//	format	not set for operatingMode
	//	max_value	not set for operatingMode
	//	min_value	not set for operatingMode
	//	max_alarm	not set for operatingMode
	//	min_alarm	not set for operatingMode
	//	max_warning	not set for operatingMode
	//	min_warning	not set for operatingMode
	//	delta_t	not set for operatingMode
	//	delta_val	not set for operatingMode
	
	operatingmode->set_default_properties(operatingmode_prop);
	//	Not Polled
	operatingmode->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(operatingmode);

	//	Attribute : burstMode
	burstModeAttrib	*burstmode = new burstModeAttrib();
	Tango::UserDefaultAttrProp	burstmode_prop;
	burstmode_prop.set_description("get the value of burst mode.<br>\ntrue: 10GE link.<br>\nfalse: 1GE link<br>");
	//	label	not set for burstMode
	//	unit	not set for burstMode
	//	standard_unit	not set for burstMode
	//	display_unit	not set for burstMode
	//	format	not set for burstMode
	//	max_value	not set for burstMode
	//	min_value	not set for burstMode
	//	max_alarm	not set for burstMode
	//	min_alarm	not set for burstMode
	//	max_warning	not set for burstMode
	//	min_warning	not set for burstMode
	//	delta_t	not set for burstMode
	//	delta_val	not set for burstMode
	
	burstmode->set_default_properties(burstmode_prop);
	//	Not Polled
	burstmode->set_disp_level(Tango::EXPERT);
	//	Not Memorized
	att_list.push_back(burstmode);

	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(LambdaClass::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : LambdaClass::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void LambdaClass::command_factory()
{
	/*----- PROTECTED REGION ID(LambdaClass::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::command_factory_before


	/*----- PROTECTED REGION ID(LambdaClass::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		LambdaClass::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list 
 */
//--------------------------------------------------------
void LambdaClass::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(LambdaClass::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		LambdaClass::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void LambdaClass::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{	
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		Lambda *dev = static_cast<Lambda *> (dev_impl);
		
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
	/*----- PROTECTED REGION ID(LambdaClass::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	LambdaClass::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : LambdaClass::get_attr_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *LambdaClass::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; it++)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(LambdaClass::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	LambdaClass::Additional Methods
} //	namespace
