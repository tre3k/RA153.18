/*----- PROTECTED REGION ID(RA153_18Class.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        RA153_18Class.cpp
//
// description : C++ source for the RA153_18Class.
//               A singleton class derived from DeviceClass.
//               It implements the command and attribute list
//               and all properties and methods required
//               by the RA153_18 once per process.
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


#include <RA153_18Class.h>

/*----- PROTECTED REGION END -----*/	//	RA153_18Class.cpp

//-------------------------------------------------------------------
/**
 *	Create RA153_18Class singleton and
 *	return it in a C function for Python usage
 */
//-------------------------------------------------------------------
extern "C" {
#ifdef _TG_WINDOWS_

__declspec(dllexport)

#endif

	Tango::DeviceClass *_create_RA153_18_class(const char *name) {
		return RA153_18_ns::RA153_18Class::init(name);
	}
}

namespace RA153_18_ns
{
//===================================================================
//	Initialize pointer for singleton pattern
//===================================================================
RA153_18Class *RA153_18Class::_instance = NULL;

//--------------------------------------------------------
/**
 * method : 		RA153_18Class::RA153_18Class(string &s)
 * description : 	constructor for the RA153_18Class
 *
 * @param s	The class name
 */
//--------------------------------------------------------
RA153_18Class::RA153_18Class(string &s):Tango::DeviceClass(s)
{
	cout2 << "Entering RA153_18Class constructor" << endl;
	set_default_property();
	write_class_property();

	/*----- PROTECTED REGION ID(RA153_18Class::constructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::constructor

	cout2 << "Leaving RA153_18Class constructor" << endl;
}

//--------------------------------------------------------
/**
 * method : 		RA153_18Class::~RA153_18Class()
 * description : 	destructor for the RA153_18Class
 */
//--------------------------------------------------------
RA153_18Class::~RA153_18Class()
{
	/*----- PROTECTED REGION ID(RA153_18Class::destructor) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::destructor

	_instance = NULL;
}


//--------------------------------------------------------
/**
 * method : 		RA153_18Class::init
 * description : 	Create the object if not already done.
 *                  Otherwise, just return a pointer to the object
 *
 * @param	name	The class name
 */
//--------------------------------------------------------
RA153_18Class *RA153_18Class::init(const char *name)
{
	if (_instance == NULL)
	{
		try
		{
			string s(name);
			_instance = new RA153_18Class(s);
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
 * method : 		RA153_18Class::instance
 * description : 	Check if object already created,
 *                  and return a pointer to the object
 */
//--------------------------------------------------------
RA153_18Class *RA153_18Class::instance()
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
 * method : 		StopClass::execute()
 * description : 	method to trigger the execution of the command.
 *
 * @param	device	The device on which the command must be executed
 * @param	in_any	The command input data
 *
 *	returns The command output data (packed in the Any object)
 */
//--------------------------------------------------------
CORBA::Any *StopClass::execute(Tango::DeviceImpl *device, TANGO_UNUSED(const CORBA::Any &in_any))
{
	cout2 << "StopClass::execute(): arrived" << endl;
	((static_cast<RA153_18 *>(device))->stop());
	return new CORBA::Any();
}


//===================================================================
//	Properties management
//===================================================================
//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::get_class_property()
 *	Description : Get the class property for specified name.
 */
//--------------------------------------------------------
Tango::DbDatum RA153_18Class::get_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_prop.size() ; i++)
		if (cl_prop[i].name == prop_name)
			return cl_prop[i];
	//	if not found, returns  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::get_default_device_property()
 *	Description : Return the default value for device property.
 */
//--------------------------------------------------------
Tango::DbDatum RA153_18Class::get_default_device_property(string &prop_name)
{
	for (unsigned int i=0 ; i<dev_def_prop.size() ; i++)
		if (dev_def_prop[i].name == prop_name)
			return dev_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}

//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::get_default_class_property()
 *	Description : Return the default value for class property.
 */
//--------------------------------------------------------
Tango::DbDatum RA153_18Class::get_default_class_property(string &prop_name)
{
	for (unsigned int i=0 ; i<cl_def_prop.size() ; i++)
		if (cl_def_prop[i].name == prop_name)
			return cl_def_prop[i];
	//	if not found, return  an empty DbDatum
	return Tango::DbDatum(prop_name);
}


//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::set_default_property()
 *	Description : Set default property (class and device) for wizard.
 *                For each property, add to wizard property name and description.
 *                If default value has been set, add it to wizard property and
 *                store it in a DbDatum.
 */
//--------------------------------------------------------
void RA153_18Class::set_default_property()
{
	string	prop_name;
	string	prop_desc;
	string	prop_def;
	vector<string>	vect_data;

	//	Set Default Class Properties

	//	Set Default device Properties
	prop_name = "Device";
	prop_desc = "path to device";
	prop_def  = "/dev/ttyMI0";
	vect_data.clear();
	vect_data.push_back("/dev/ttyMI0");
	if (prop_def.length()>0)
	{
		Tango::DbDatum	data(prop_name);
		data << vect_data ;
		dev_def_prop.push_back(data);
		add_wiz_dev_prop(prop_name, prop_desc,  prop_def);
	}
	else
		add_wiz_dev_prop(prop_name, prop_desc);
	prop_name = "Channel";
	prop_desc = "0..3 just channel number";
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
	prop_name = "Accelerate";
	prop_desc = "";
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
	prop_name = "Speed";
	prop_desc = "";
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
}

//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::write_class_property()
 *	Description : Set class description fields as property in database
 */
//--------------------------------------------------------
void RA153_18Class::write_class_property()
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
	string	str_title("");
	title << str_title;
	data.push_back(title);

	//	Put Description
	Tango::DbDatum	description("Description");
	vector<string>	str_desc;
	str_desc.push_back("");
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
 *	Method      : RA153_18Class::device_factory()
 *	Description : Create the device object(s)
 *                and store them in the device list
 */
//--------------------------------------------------------
void RA153_18Class::device_factory(const Tango::DevVarStringArray *devlist_ptr)
{
	/*----- PROTECTED REGION ID(RA153_18Class::device_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::device_factory_before

	//	Create devices and add it into the device list
	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		cout4 << "Device name : " << (*devlist_ptr)[i].in() << endl;
		device_list.push_back(new RA153_18(this, (*devlist_ptr)[i]));
	}

	//	Manage dynamic attributes if any
	erase_dynamic_attributes(devlist_ptr, get_class_attr()->get_attr_list());

	//	Export devices to the outside world
	for (unsigned long i=1 ; i<=devlist_ptr->length() ; i++)
	{
		//	Add dynamic attributes if any
		RA153_18 *dev = static_cast<RA153_18 *>(device_list[device_list.size()-i]);
		dev->add_dynamic_attributes();

		//	Check before if database used.
		if ((Tango::Util::_UseDb == true) && (Tango::Util::_FileDb == false))
			export_device(dev);
		else
			export_device(dev, dev->get_name().c_str());
	}

	/*----- PROTECTED REGION ID(RA153_18Class::device_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::device_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::attribute_factory()
 *	Description : Create the attribute object(s)
 *                and store them in the attribute list
 */
//--------------------------------------------------------
void RA153_18Class::attribute_factory(vector<Tango::Attr *> &att_list)
{
	/*----- PROTECTED REGION ID(RA153_18Class::attribute_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::attribute_factory_before
	//	Attribute : rPosition
	rPositionAttrib	*rposition = new rPositionAttrib();
	Tango::UserDefaultAttrProp	rposition_prop;
	//	description	not set for rPosition
	//	label	not set for rPosition
	//	unit	not set for rPosition
	//	standard_unit	not set for rPosition
	//	display_unit	not set for rPosition
	//	format	not set for rPosition
	//	max_value	not set for rPosition
	//	min_value	not set for rPosition
	//	max_alarm	not set for rPosition
	//	min_alarm	not set for rPosition
	//	max_warning	not set for rPosition
	//	min_warning	not set for rPosition
	//	delta_t	not set for rPosition
	//	delta_val	not set for rPosition
	
	rposition->set_default_properties(rposition_prop);
	//	Not Polled
	rposition->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(rposition);

	//	Attribute : aPosition
	aPositionAttrib	*aposition = new aPositionAttrib();
	Tango::UserDefaultAttrProp	aposition_prop;
	//	description	not set for aPosition
	//	label	not set for aPosition
	//	unit	not set for aPosition
	//	standard_unit	not set for aPosition
	//	display_unit	not set for aPosition
	//	format	not set for aPosition
	//	max_value	not set for aPosition
	//	min_value	not set for aPosition
	//	max_alarm	not set for aPosition
	//	min_alarm	not set for aPosition
	//	max_warning	not set for aPosition
	//	min_warning	not set for aPosition
	//	delta_t	not set for aPosition
	//	delta_val	not set for aPosition
	
	aposition->set_default_properties(aposition_prop);
	//	Not Polled
	aposition->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(aposition);

	//	Attribute : LeftEnd
	LeftEndAttrib	*leftend = new LeftEndAttrib();
	Tango::UserDefaultAttrProp	leftend_prop;
	//	description	not set for LeftEnd
	//	label	not set for LeftEnd
	//	unit	not set for LeftEnd
	//	standard_unit	not set for LeftEnd
	//	display_unit	not set for LeftEnd
	//	format	not set for LeftEnd
	//	max_value	not set for LeftEnd
	//	min_value	not set for LeftEnd
	//	max_alarm	not set for LeftEnd
	//	min_alarm	not set for LeftEnd
	//	max_warning	not set for LeftEnd
	//	min_warning	not set for LeftEnd
	//	delta_t	not set for LeftEnd
	//	delta_val	not set for LeftEnd
	
	leftend->set_default_properties(leftend_prop);
	//	Not Polled
	leftend->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(leftend);

	//	Attribute : RightEnd
	RightEndAttrib	*rightend = new RightEndAttrib();
	Tango::UserDefaultAttrProp	rightend_prop;
	//	description	not set for RightEnd
	//	label	not set for RightEnd
	//	unit	not set for RightEnd
	//	standard_unit	not set for RightEnd
	//	display_unit	not set for RightEnd
	//	format	not set for RightEnd
	//	max_value	not set for RightEnd
	//	min_value	not set for RightEnd
	//	max_alarm	not set for RightEnd
	//	min_alarm	not set for RightEnd
	//	max_warning	not set for RightEnd
	//	min_warning	not set for RightEnd
	//	delta_t	not set for RightEnd
	//	delta_val	not set for RightEnd
	
	rightend->set_default_properties(rightend_prop);
	//	Not Polled
	rightend->set_disp_level(Tango::OPERATOR);
	//	Not Memorized
	att_list.push_back(rightend);


	//	Create a list of static attributes
	create_static_attribute_list(get_class_attr()->get_attr_list());
	/*----- PROTECTED REGION ID(RA153_18Class::attribute_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::attribute_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::pipe_factory()
 *	Description : Create the pipe object(s)
 *                and store them in the pipe list
 */
//--------------------------------------------------------
void RA153_18Class::pipe_factory()
{
	/*----- PROTECTED REGION ID(RA153_18Class::pipe_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::pipe_factory_before
	/*----- PROTECTED REGION ID(RA153_18Class::pipe_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::pipe_factory_after
}
//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::command_factory()
 *	Description : Create the command object(s)
 *                and store them in the command list
 */
//--------------------------------------------------------
void RA153_18Class::command_factory()
{
	/*----- PROTECTED REGION ID(RA153_18Class::command_factory_before) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::command_factory_before


	//	Command Stop
	StopClass	*pStopCmd =
		new StopClass("Stop",
			Tango::DEV_VOID, Tango::DEV_VOID,
			"",
			"",
			Tango::OPERATOR);
	command_list.push_back(pStopCmd);

	/*----- PROTECTED REGION ID(RA153_18Class::command_factory_after) ENABLED START -----*/
	
	//	Add your own code
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::command_factory_after
}

//===================================================================
//	Dynamic attributes related methods
//===================================================================

//--------------------------------------------------------
/**
 * method : 		RA153_18Class::create_static_attribute_list
 * description : 	Create the a list of static attributes
 *
 * @param	att_list	the ceated attribute list
 */
//--------------------------------------------------------
void RA153_18Class::create_static_attribute_list(vector<Tango::Attr *> &att_list)
{
	for (unsigned long i=0 ; i<att_list.size() ; i++)
	{
		string att_name(att_list[i]->get_name());
		transform(att_name.begin(), att_name.end(), att_name.begin(), ::tolower);
		defaultAttList.push_back(att_name);
	}

	cout2 << defaultAttList.size() << " attributes in default list" << endl;

	/*----- PROTECTED REGION ID(RA153_18Class::create_static_att_list) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::create_static_att_list
}


//--------------------------------------------------------
/**
 * method : 		RA153_18Class::erase_dynamic_attributes
 * description : 	delete the dynamic attributes if any.
 *
 * @param	devlist_ptr	the device list pointer
 * @param	list of all attributes
 */
//--------------------------------------------------------
void RA153_18Class::erase_dynamic_attributes(const Tango::DevVarStringArray *devlist_ptr, vector<Tango::Attr *> &att_list)
{
	Tango::Util *tg = Tango::Util::instance();

	for (unsigned long i=0 ; i<devlist_ptr->length() ; i++)
	{
		Tango::DeviceImpl *dev_impl = tg->get_device_by_name(((string)(*devlist_ptr)[i]).c_str());
		RA153_18 *dev = static_cast<RA153_18 *> (dev_impl);

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
	/*----- PROTECTED REGION ID(RA153_18Class::erase_dynamic_attributes) ENABLED START -----*/
	
	/*----- PROTECTED REGION END -----*/	//	RA153_18Class::erase_dynamic_attributes
}

//--------------------------------------------------------
/**
 *	Method      : RA153_18Class::get_attr_by_name()
 *	Description : returns Tango::Attr * object found by name
 */
//--------------------------------------------------------
Tango::Attr *RA153_18Class::get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname)
{
	vector<Tango::Attr *>::iterator it;
	for (it=att_list.begin() ; it<att_list.end() ; ++it)
		if ((*it)->get_name()==attname)
			return (*it);
	//	Attr does not exist
	return NULL;
}


/*----- PROTECTED REGION ID(RA153_18Class::Additional Methods) ENABLED START -----*/

/*----- PROTECTED REGION END -----*/	//	RA153_18Class::Additional Methods
} //	namespace