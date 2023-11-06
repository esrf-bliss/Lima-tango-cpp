//=============================================================================
//
// file :         ImXpadClass.h
//
// description :  Include for the ImXpadClass root class.
//                This class is the singleton class for
//                the ImXpad device class.
//                It contains all properties and methods which the 
//                ImXpad requires only once e.g. the commands.
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
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================

#ifndef _MAXIPIXCLASS_H
#define _MAXIPIXCLASS_H

#include <tango.h>
#include <ImXpad.h>


namespace ImXpad_ns
{//=====================================
//	Define classes for attributes
//=====================================
class calibrationPathAttrib: public Tango::Attr
{
public:
	calibrationPathAttrib():Attr("calibrationPath", Tango::DEV_STRING, Tango::READ) {};
	~calibrationPathAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_calibrationPath(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_calibrationPath_allowed(ty);}
};

class calibrationConfigModeAttrib: public Tango::Attr
{
public:
	calibrationConfigModeAttrib():Attr("calibrationConfigMode", Tango::DEV_STRING, Tango::WRITE) {};
	~calibrationConfigModeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_calibrationConfigMode(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_calibrationConfigMode(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_calibrationConfigMode_allowed(ty);}
};

class CalibrationBeamITHLAttrib: public Tango::Attr
{
public:
	CalibrationBeamITHLAttrib():Attr("CalibrationBeamITHL", Tango::DEV_ULONG, Tango::WRITE) {};
	~CalibrationBeamITHLAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_CalibrationBeamITHL(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_CalibrationBeamITHL(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_CalibrationBeamITHL_allowed(ty);}
};

class calibrationExposureTimeAttrib: public Tango::Attr
{
public:
	calibrationExposureTimeAttrib():Attr("calibrationExposureTime", Tango::DEV_ULONG, Tango::WRITE) {};
	~calibrationExposureTimeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_calibrationExposureTime(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_calibrationExposureTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_calibrationExposureTime_allowed(ty);}
};

class calibrationModeAttrib: public Tango::Attr
{
public:
	calibrationModeAttrib():Attr("calibrationMode", Tango::DEV_STRING, Tango::WRITE) {};
	~calibrationModeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_calibrationMode(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_calibrationMode(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_calibrationMode_allowed(ty);}
};

class outputSignalAttrib: public Tango::Attr
{
public:
	outputSignalAttrib():Attr("outputSignal", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~outputSignalAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_outputSignal(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_outputSignal(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_outputSignal_allowed(ty);}
};

class nbStackingImagesAttrib: public Tango::Attr
{
public:
	nbStackingImagesAttrib():Attr("nbStackingImages", Tango::DEV_ULONG, Tango::WRITE) {};
	~nbStackingImagesAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_nbStackingImages(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_nbStackingImages(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_nbStackingImages_allowed(ty);}
};

class acquisitionModeAttrib: public Tango::Attr
{
public:
	acquisitionModeAttrib():Attr("acquisitionMode", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~acquisitionModeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_acquisitionMode(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_acquisitionMode(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_acquisitionMode_allowed(ty);}
};

class calibrationFileNameAttrib: public Tango::Attr
{
public:
	calibrationFileNameAttrib():Attr("calibrationFileName", Tango::DEV_STRING, Tango::READ) {};
	~calibrationFileNameAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_calibrationFileName(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_calibrationFileName_allowed(ty);}
};

class flatFieldCorrectionFlagAttrib: public Tango::Attr
{
public:
	flatFieldCorrectionFlagAttrib():Attr("flatFieldCorrectionFlag", Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~flatFieldCorrectionFlagAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_flatFieldCorrectionFlag(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_flatFieldCorrectionFlag(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_flatFieldCorrectionFlag_allowed(ty);}
};

class geometricalCorrectionFlagAttrib: public Tango::Attr
{
public:
	geometricalCorrectionFlagAttrib():Attr("geometricalCorrectionFlag", Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~geometricalCorrectionFlagAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_geometricalCorrectionFlag(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<ImXpad *>(dev))->write_geometricalCorrectionFlag(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_geometricalCorrectionFlag_allowed(ty);}
};

class serverVersionAttrib: public Tango::Attr
{
public:
	serverVersionAttrib():Attr("serverVersion", Tango::DEV_STRING, Tango::READ) {};
	~serverVersionAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<ImXpad *>(dev))->read_serverVersion(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<ImXpad *>(dev))->is_serverVersion_allowed(ty);}
};

//=========================================
//	Define classes for commands
//=========================================
class ITHLDecreaseCmd : public Tango::Command
{
public:
	ITHLDecreaseCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ITHLDecreaseCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ITHLDecreaseCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_ITHLDecrease_allowed(any);}
};



class ITHLIncreaseCmd : public Tango::Command
{
public:
	ITHLIncreaseCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ITHLIncreaseCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ITHLIncreaseCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_ITHLIncrease_allowed(any);}
};



class AbortClass : public Tango::Command
{
public:
	AbortClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	AbortClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~AbortClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_Abort_allowed(any);}
};



class DeleteWhiteImageCmd : public Tango::Command
{
public:
	DeleteWhiteImageCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	DeleteWhiteImageCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~DeleteWhiteImageCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_DeleteWhiteImage_allowed(any);}
};



class GetWhiteImagesListCmd : public Tango::Command
{
public:
	GetWhiteImagesListCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetWhiteImagesListCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetWhiteImagesListCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_GetWhiteImagesList_allowed(any);}
};



class ChooseWhiteImageCmd : public Tango::Command
{
public:
	ChooseWhiteImageCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ChooseWhiteImageCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ChooseWhiteImageCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_ChooseWhiteImage_allowed(any);}
};



class CreateWhiteImageCmd : public Tango::Command
{
public:
	CreateWhiteImageCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	CreateWhiteImageCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~CreateWhiteImageCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_CreateWhiteImage_allowed(any);}
};



class LoadCalibrationFileCmd : public Tango::Command
{
public:
	LoadCalibrationFileCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	LoadCalibrationFileCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~LoadCalibrationFileCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_LoadCalibrationFile_allowed(any);}
};



class SaveCalibrationFileCmd : public Tango::Command
{
public:
	SaveCalibrationFileCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SaveCalibrationFileCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SaveCalibrationFileCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_SaveCalibrationFile_allowed(any);}
};



class StartCalibrationCmd : public Tango::Command
{
public:
	StartCalibrationCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StartCalibrationCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StartCalibrationCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<ImXpad *>(dev))->is_StartCalibration_allowed(any);}
};



//
// The ImXpadClass singleton definition
//

class
#ifdef WIN32
	__declspec(dllexport)
#endif
	ImXpadClass : public Tango::DeviceClass
{
public:
//	properties member data

//	add your own data members here
//------------------------------------

public:
	Tango::DbData	cl_prop;
	Tango::DbData	cl_def_prop;
	Tango::DbData	dev_def_prop;

//	Method prototypes
	static ImXpadClass *init(const char *);
	static ImXpadClass *instance();
	~ImXpadClass();
	Tango::DbDatum	get_class_property(string &);
	Tango::DbDatum	get_default_device_property(string &);
	Tango::DbDatum	get_default_class_property(string &);
	
protected:
	ImXpadClass(string &);
	static ImXpadClass *_instance;
	void command_factory();
	void get_class_property();
	void attribute_factory(vector<Tango::Attr *> &);
	void write_class_property();
	void set_default_property();
	string get_cvstag();
	string get_cvsroot();

private:
	void device_factory(const Tango::DevVarStringArray *);
};


}	//	namespace ImXpad_ns

#endif // _IMXPADCLASS_H
