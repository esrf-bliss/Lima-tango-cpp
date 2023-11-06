/*----- PROTECTED REGION ID(Dhyana6060StateMachine.cpp) ENABLED START -----*/
//=============================================================================
//
// file :        Dhyana6060StateMachine.cpp
//
// description : State machine file for the Dhyana6060 class
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

#include <Dhyana6060.h>

/*----- PROTECTED REGION END -----*/	//	Dhyana6060::Dhyana6060StateMachine.cpp

//================================================================
//  States  |  Description
//================================================================


namespace Dhyana6060_ns
{
//=================================================
//		Attributes Allowed Methods
//=================================================


//=================================================
//		Commands Allowed Methods
//=================================================

//--------------------------------------------------------
/**
 *	Method      : Dhyana6060::is_GetAllParameters_allowed()
 *	Description : Execution allowed for GetAllParameters attribute
 */
//--------------------------------------------------------
bool Dhyana6060::is_GetAllParameters_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetAllParameters command.
	/*----- PROTECTED REGION ID(Dhyana6060::GetAllParametersStateAllowed) ENABLED START -----*/
	if ((get_state() == Tango::FAULT && !is_device_initialized()) || 
		get_state()==Tango::INIT || 
		get_state()==Tango::RUNNING)
	{
		return false;
	}
	/*----- PROTECTED REGION END -----*/	//	Dhyana6060::GetAllParametersStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana6060::is_GetParameter_allowed()
 *	Description : Execution allowed for GetParameter attribute
 */
//--------------------------------------------------------
bool Dhyana6060::is_GetParameter_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for GetParameter command.
	/*----- PROTECTED REGION ID(Dhyana6060::GetParameterStateAllowed) ENABLED START -----*/
	if ((get_state() == Tango::FAULT && !is_device_initialized())|| 
		get_state()==Tango::INIT || 
		get_state()==Tango::RUNNING)
	{
		return false;
	}
	/*----- PROTECTED REGION END -----*/	//	Dhyana6060::GetParameterStateAllowed
	return true;
}

//--------------------------------------------------------
/**
 *	Method      : Dhyana6060::is_SetParameter_allowed()
 *	Description : Execution allowed for SetParameter attribute
 */
//--------------------------------------------------------
bool Dhyana6060::is_SetParameter_allowed(TANGO_UNUSED(const CORBA::Any &any))
{
	//	Not any excluded states for SetParameter command.
	/*----- PROTECTED REGION ID(Dhyana6060::SetParameterStateAllowed) ENABLED START -----*/
	if ((get_state() == Tango::FAULT && !is_device_initialized()) || 
		get_state()==Tango::INIT || 
		get_state()==Tango::RUNNING)
	{
		return false;
	}
	/*----- PROTECTED REGION END -----*/	//	Dhyana6060::SetParameterStateAllowed
	return true;
}


/*----- PROTECTED REGION ID(Dhyana6060::Dhyana6060StateAllowed.AdditionalMethods) ENABLED START -----*/

//	Additional Methods

/*----- PROTECTED REGION END -----*/	//	Dhyana6060::Dhyana6060StateAllowed.AdditionalMethods

}	//	End of namespace