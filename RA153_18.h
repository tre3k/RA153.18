/*----- PROTECTED REGION ID(RA153_18.h) ENABLED START -----*/
//=============================================================================
//
// file :        RA153_18.h
//
// description : Include file for the RA153_18 class
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
// PNPI Kirill Pshenichny (c) 2019
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef RA153_18_H
#define RA153_18_H

#include <tango.h>
#include "SerialPort.h"
#include "MotorClass.h"

/*----- PROTECTED REGION END -----*/	//	RA153_18.h

/**
 *  RA153_18 class description:
 *    
 */

namespace RA153_18_ns
{
/*----- PROTECTED REGION ID(RA153_18::Additional Class Declarations) ENABLED START -----*/

//	Additional Class Declarations

/*----- PROTECTED REGION END -----*/	//	RA153_18::Additional Class Declarations

class RA153_18 : public TANGO_BASE_CLASS
{

/*----- PROTECTED REGION ID(RA153_18::Data Members) ENABLED START -----*/

public:
	SP::SerialPort *sp = NULL;
	Motor::MotorClass *mc = NULL;

/*----- PROTECTED REGION END -----*/	//	RA153_18::Data Members

//	Device property data members
public:
	//	Device:	path to device
	string	device;
	//	Channel:	0..3 just channel number
	Tango::DevUShort	channel;
	//	Accelerate:	
	Tango::DevUShort	accelerate;
	//	Speed:	
	Tango::DevUShort	speed;
	//	ControllerNumber:	Aka address of controller
	Tango::DevShort	controllerNumber;

//	Attribute data members
public:
	Tango::DevDouble	*attr_rPosition_read;
	Tango::DevDouble	*attr_aPosition_read;
	Tango::DevBoolean	*attr_LeftEnd_read;
	Tango::DevBoolean	*attr_RightEnd_read;

//	Constructors and destructors
public:
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	RA153_18(Tango::DeviceClass *cl,string &s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device Name
	 */
	RA153_18(Tango::DeviceClass *cl,const char *s);
	/**
	 * Constructs a newly device object.
	 *
	 *	@param cl	Class.
	 *	@param s 	Device name
	 *	@param d	Device description.
	 */
	RA153_18(Tango::DeviceClass *cl,const char *s,const char *d);
	/**
	 * The device object destructor.
	 */
	~RA153_18() {delete_device();};


//	Miscellaneous methods
public:
	/*
	 *	will be called at device destruction or at init command.
	 */
	void delete_device();
	/*
	 *	Initialize the device
	 */
	virtual void init_device();
	/*
	 *	Read the device properties from database
	 */
	void get_device_property();
	/*
	 *	Always executed method before execution command method.
	 */
	virtual void always_executed_hook();


//	Attribute methods
public:
	//--------------------------------------------------------
	/*
	 *	Method      : RA153_18::read_attr_hardware()
	 *	Description : Hardware acquisition for attributes.
	 */
	//--------------------------------------------------------
	virtual void read_attr_hardware(vector<long> &attr_list);
	//--------------------------------------------------------
	/*
	 *	Method      : RA153_18::write_attr_hardware()
	 *	Description : Hardware writing for attributes.
	 */
	//--------------------------------------------------------
	virtual void write_attr_hardware(vector<long> &attr_list);

/**
 *	Attribute rPosition related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_rPosition(Tango::Attribute &attr);
	virtual void write_rPosition(Tango::WAttribute &attr);
	virtual bool is_rPosition_allowed(Tango::AttReqType type);
/**
 *	Attribute aPosition related methods
 *	Description: 
 *
 *	Data type:	Tango::DevDouble
 *	Attr type:	Scalar
 */
	virtual void read_aPosition(Tango::Attribute &attr);
	virtual void write_aPosition(Tango::WAttribute &attr);
	virtual bool is_aPosition_allowed(Tango::AttReqType type);
/**
 *	Attribute LeftEnd related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_LeftEnd(Tango::Attribute &attr);
	virtual bool is_LeftEnd_allowed(Tango::AttReqType type);
/**
 *	Attribute RightEnd related methods
 *	Description: 
 *
 *	Data type:	Tango::DevBoolean
 *	Attr type:	Scalar
 */
	virtual void read_RightEnd(Tango::Attribute &attr);
	virtual bool is_RightEnd_allowed(Tango::AttReqType type);


	//--------------------------------------------------------
	/**
	 *	Method      : RA153_18::add_dynamic_attributes()
	 *	Description : Add dynamic attributes if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_attributes();




//	Command related methods
public:
	/**
	 *	Command Stop related method
	 *	Description: 
	 *
	 */
	virtual void stop();
	virtual bool is_Stop_allowed(const CORBA::Any &any);


	//--------------------------------------------------------
	/**
	 *	Method      : RA153_18::add_dynamic_commands()
	 *	Description : Add dynamic commands if any.
	 */
	//--------------------------------------------------------
	void add_dynamic_commands();

/*----- PROTECTED REGION ID(RA153_18::Additional Method prototypes) ENABLED START -----*/

//	Additional Method prototypes

/*----- PROTECTED REGION END -----*/	//	RA153_18::Additional Method prototypes
};

/*----- PROTECTED REGION ID(RA153_18::Additional Classes Definitions) ENABLED START -----*/

//	Additional Classes Definitions

/*----- PROTECTED REGION END -----*/	//	RA153_18::Additional Classes Definitions

}	//	End of namespace

#endif   //	RA153_18_H
