//=============================================================================
//
// file :         LimaDetectorClass.h
//
// description :  Include for the LimaDetectorClass root class.
//                This class is the singleton class for
//                the LimaDetector device class.
//                It contains all properties and methods which the 
//                LimaDetector requires only once e.g. the commands.
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

#ifndef _LimaDetectorCLASS_H
#define _LimaDetectorCLASS_H
#ifdef WIN32
#include <tango.h>
#endif
#include <LimaDetector.h>

#ifndef WIN32
#include <tango.h>
#endif

namespace LimaDetector_ns
{//=====================================
//	Define classes for attributes
//=====================================
class operationsListAttrib: public Tango::SpectrumAttr
{
public:
	operationsListAttrib():SpectrumAttr("operationsList", Tango::DEV_STRING, Tango::READ, 1024) {};
	~operationsListAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_operationsList(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_operationsList_allowed(ty);}
};

class fileNbFramesAttrib: public Tango::Attr
{
public:
	fileNbFramesAttrib():Attr("fileNbFrames", Tango::DEV_LONG, Tango::READ_WRITE) {};
	~fileNbFramesAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_fileNbFrames(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_fileNbFrames(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_fileNbFrames_allowed(ty);}
};

class fileTargetPathAttrib: public Tango::Attr
{
public:
	fileTargetPathAttrib():Attr("fileTargetPath", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~fileTargetPathAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_fileTargetPath(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_fileTargetPath(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_fileTargetPath_allowed(ty);}
};

class filePrefixAttrib: public Tango::Attr
{
public:
	filePrefixAttrib():Attr("filePrefix", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~filePrefixAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_filePrefix(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_filePrefix(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_filePrefix_allowed(ty);}
};

class fileFormatAttrib: public Tango::Attr
{
public:
	fileFormatAttrib():Attr("fileFormat", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~fileFormatAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_fileFormat(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_fileFormat(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_fileFormat_allowed(ty);}
};

class fileGenerationAttrib: public Tango::Attr
{
public:
	fileGenerationAttrib():Attr("fileGeneration", Tango::DEV_BOOLEAN, Tango::READ_WRITE) {};
	~fileGenerationAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_fileGeneration(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_fileGeneration(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_fileGeneration_allowed(ty);}
};

class currentFrameAttrib: public Tango::Attr
{
public:
	currentFrameAttrib():Attr("currentFrame", Tango::DEV_ULONG, Tango::READ) {};
	~currentFrameAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_currentFrame(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_currentFrame_allowed(ty);}
};

class nbFramesAttrib: public Tango::Attr
{
public:
	nbFramesAttrib():Attr("nbFrames", Tango::DEV_LONG, Tango::READ_WRITE) {};
	~nbFramesAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_nbFrames(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_nbFrames(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_nbFrames_allowed(ty);}
};

class binningVAttrib: public Tango::Attr
{
public:
	binningVAttrib():Attr("binningV", Tango::DEV_USHORT, Tango::READ) {};
	~binningVAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_binningV(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_binningV_allowed(ty);}
};

class binningHAttrib: public Tango::Attr
{
public:
	binningHAttrib():Attr("binningH", Tango::DEV_USHORT, Tango::READ) {};
	~binningHAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_binningH(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_binningH_allowed(ty);}
};

class roiHeightAttrib: public Tango::Attr
{
public:
	roiHeightAttrib():Attr("roiHeight", Tango::DEV_USHORT, Tango::READ) {};
	~roiHeightAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_roiHeight(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_roiHeight_allowed(ty);}
};

class roiWidthAttrib: public Tango::Attr
{
public:
	roiWidthAttrib():Attr("roiWidth", Tango::DEV_USHORT, Tango::READ) {};
	~roiWidthAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_roiWidth(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_roiWidth_allowed(ty);}
};

class roiYAttrib: public Tango::Attr
{
public:
	roiYAttrib():Attr("roiY", Tango::DEV_USHORT, Tango::READ) {};
	~roiYAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_roiY(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_roiY_allowed(ty);}
};

class roiXAttrib: public Tango::Attr
{
public:
	roiXAttrib():Attr("roiX", Tango::DEV_USHORT, Tango::READ) {};
	~roiXAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_roiX(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_roiX_allowed(ty);}
};

class frameRateAttrib: public Tango::Attr
{
public:
	frameRateAttrib():Attr("frameRate", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~frameRateAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_frameRate(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_frameRate(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_frameRate_allowed(ty);}
};

class latencyTimeAttrib: public Tango::Attr
{
public:
	latencyTimeAttrib():Attr("latencyTime", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~latencyTimeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_latencyTime(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_latencyTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_latencyTime_allowed(ty);}
};

class exposureTimeAttrib: public Tango::Attr
{
public:
	exposureTimeAttrib():Attr("exposureTime", Tango::DEV_DOUBLE, Tango::READ_WRITE) {};
	~exposureTimeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_exposureTime(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_exposureTime(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_exposureTime_allowed(ty);}
};

class acquisitionModeAttrib: public Tango::Attr
{
public:
	acquisitionModeAttrib():Attr("acquisitionMode", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~acquisitionModeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_acquisitionMode(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_acquisitionMode(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_acquisitionMode_allowed(ty);}
};

class triggerModeAttrib: public Tango::Attr
{
public:
	triggerModeAttrib():Attr("triggerMode", Tango::DEV_STRING, Tango::READ_WRITE) {};
	~triggerModeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_triggerMode(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
	{(static_cast<LimaDetector *>(dev))->write_triggerMode(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_triggerMode_allowed(ty);}
};

class binnedHeightMaxAttrib: public Tango::Attr
{
public:
	binnedHeightMaxAttrib():Attr("binnedHeightMax", Tango::DEV_USHORT, Tango::READ) {};
	~binnedHeightMaxAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_binnedHeightMax(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_binnedHeightMax_allowed(ty);}
};

class binnedWidthMaxAttrib: public Tango::Attr
{
public:
	binnedWidthMaxAttrib():Attr("binnedWidthMax", Tango::DEV_USHORT, Tango::READ) {};
	~binnedWidthMaxAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_binnedWidthMax(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_binnedWidthMax_allowed(ty);}
};

class detectorPixelDepthAttrib: public Tango::Attr
{
public:
	detectorPixelDepthAttrib():Attr("detectorPixelDepth", Tango::DEV_USHORT, Tango::READ) {};
	~detectorPixelDepthAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_detectorPixelDepth(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_detectorPixelDepth_allowed(ty);}
};

class detectorHeightMaxAttrib: public Tango::Attr
{
public:
	detectorHeightMaxAttrib():Attr("detectorHeightMax", Tango::DEV_USHORT, Tango::READ) {};
	~detectorHeightMaxAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_detectorHeightMax(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_detectorHeightMax_allowed(ty);}
};

class detectorWidthMaxAttrib: public Tango::Attr
{
public:
	detectorWidthMaxAttrib():Attr("detectorWidthMax", Tango::DEV_USHORT, Tango::READ) {};
	~detectorWidthMaxAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_detectorWidthMax(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_detectorWidthMax_allowed(ty);}
};

class detectorModelAttrib: public Tango::Attr
{
public:
	detectorModelAttrib():Attr("detectorModel", Tango::DEV_STRING, Tango::READ) {};
	~detectorModelAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_detectorModel(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_detectorModel_allowed(ty);}
};

class detectorTypeAttrib: public Tango::Attr
{
public:
	detectorTypeAttrib():Attr("detectorType", Tango::DEV_STRING, Tango::READ) {};
	~detectorTypeAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_detectorType(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_detectorType_allowed(ty);}
};

class detectorDescriptionAttrib: public Tango::Attr
{
public:
	detectorDescriptionAttrib():Attr("detectorDescription", Tango::DEV_STRING, Tango::READ) {};
	~detectorDescriptionAttrib() {};
	
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
	{(static_cast<LimaDetector *>(dev))->read_detectorDescription(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
	{return (static_cast<LimaDetector *>(dev))->is_detectorDescription_allowed(ty);}
};

//=========================================
//	Define classes for commands
//=========================================
class GetDataStreamsCmd : public Tango::Command
{
public:
	GetDataStreamsCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetDataStreamsCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetDataStreamsCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_GetDataStreams_allowed(any);}
};



class ReloadROICmd : public Tango::Command
{
public:
	ReloadROICmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ReloadROICmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ReloadROICmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_ReloadROI_allowed(any);}
};



class ResetFileIndexClass : public Tango::Command
{
public:
	ResetFileIndexClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetFileIndexClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetFileIndexClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_ResetFileIndex_allowed(any);}
};



class GetAvailableCapabilitiesCmd : public Tango::Command
{
public:
	GetAvailableCapabilitiesCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetAvailableCapabilitiesCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetAvailableCapabilitiesCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_GetAvailableCapabilities_allowed(any);}
};



class GetAttributeAvailableValuesCmd : public Tango::Command
{
public:
	GetAttributeAvailableValuesCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	GetAttributeAvailableValuesCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~GetAttributeAvailableValuesCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_GetAttributeAvailableValues_allowed(any);}
};



class ResetROICmd : public Tango::Command
{
public:
	ResetROICmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetROICmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetROICmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_ResetROI_allowed(any);}
};



class ResetBinningCmd : public Tango::Command
{
public:
	ResetBinningCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ResetBinningCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ResetBinningCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_ResetBinning_allowed(any);}
};



class SetBinningCmd : public Tango::Command
{
public:
	SetBinningCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetBinningCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetBinningCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_SetBinning_allowed(any);}
};



class SetROICmd : public Tango::Command
{
public:
	SetROICmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SetROICmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SetROICmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_SetROI_allowed(any);}
};



class StopCmd : public Tango::Command
{
public:
	StopCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StopCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StopCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_Stop_allowed(any);}
};



class StartCmd : public Tango::Command
{
public:
	StartCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	StartCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~StartCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_Start_allowed(any);}
};



class SnapCmd : public Tango::Command
{
public:
	SnapCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	SnapCmd(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~SnapCmd() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_Snap_allowed(any);}
};



class PrepareClass : public Tango::Command
{
public:
	PrepareClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	PrepareClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~PrepareClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<LimaDetector *>(dev))->is_Prepare_allowed(any);}
};



//
// The LimaDetectorClass singleton definition
//

class
#ifdef WIN32
	__declspec(dllexport)
#endif
	LimaDetectorClass : public Tango::DeviceClass
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
	static LimaDetectorClass *init(const char *);
	static LimaDetectorClass *instance();
	~LimaDetectorClass();
	Tango::DbDatum	get_class_property(string &);
	Tango::DbDatum	get_default_device_property(string &);
	Tango::DbDatum	get_default_class_property(string &);
	
protected:
	LimaDetectorClass(string &);
	static LimaDetectorClass *_instance;
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


}	//	namespace LimaDetector_ns

#endif // _LIMADETECTORCLASS_H
