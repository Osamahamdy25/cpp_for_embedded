/*
 * register.cpp
 *
 *  Created on: Mar 8, 2022
 *      Author: Osama Mohamed Hamdy
 */
#include<iostream>
#include"register.hpp"
template<class T>
Generic_Register<T>::Generic_Register(T * Register )
{
	prvRegister=Register;
	prv_Read_Only=~(T)0;
	prv_Write_Only=~(T)0;
}

template<class T>

Reg_Error_status Generic_Register<T>::setRegisterValue(T   copy_tvalue)
{

Reg_Error_status loc_enuErrorstatus=OK;
if((prv_Write_Only>>copy_tvalue)&1)
{
	loc_enuErrorstatus=Not_ok;
}
else
{

	*prvRegister|=(1<<copy_tvalue);
}
	return loc_enuErrorstatus;
}

template <class T>
Reg_Error_status Generic_Register<T>::getRegistervalue(T & Ref_tvalue)
{
	Reg_Error_status loc_enuErrorstatus=OK;
	if(prv_Read_Only!=(~(T)0))
	{
		loc_enuErrorstatus=Not_ok;
	}
	else
	{
		Ref_tvalue=*prvRegister;
	}
	return loc_enuErrorstatus;
}
template <class T>
Reg_Error_status  Generic_Register<T>::setBit(std::uint8_t Copy_uint8_BitNum)
{
	Reg_Error_status loc_enuErrorstatus=OK;
	if((prv_Write_Only>>Copy_uint8_BitNum)&1)
	{
		Reg_Error_status loc_enuErrorstatus=Not_ok;
	}
	else
	{
		*prvRegister|=(1<<Copy_uint8_BitNum);
	}

	return loc_enuErrorstatus;
}
template <class T>
Reg_Error_status  Generic_Register<T>::clearBit(std::uint8_t Copy_uint8_BitNum)
{
	Reg_Error_status loc_enuErrorstatus=OK;
	if((prv_Write_Only>>Copy_uint8_BitNum)&1)
	{
		Reg_Error_status loc_enuErrorstatus=Not_ok;
	}
	else
	{
		*prvRegister&=~((1<<Copy_uint8_BitNum));
	}
	return loc_enuErrorstatus;
}
template <class T>
Reg_Error_status  Generic_Register<T>::getBit(std::uint8_t Copy_uint8_BitNum,bool &Ref_BitValue)
{
	Reg_Error_status loc_enuErrorstatus=OK;
	if((prv_Read_Only>>Copy_uint8_BitNum)&1)
	{
		Reg_Error_status loc_enuErrorstatus=Not_ok;
	}
	else
	{

		Ref_BitValue=((prvRegister>>Copy_uint8_BitNum)&1);
	}


	return loc_enuErrorstatus;
}
template <class T>
Reg_Error_status  Generic_Register<T>::set_permission(std::uint8_t Copy_BitNum,REG_PERMISSION permission)
{
	Reg_Error_status loc_enuErrorstatus=OK;
switch (permission)
{
case READ_ONLY:
	prv_Read_Only|=(1<<Copy_BitNum);
	prv_Write_Only&=~(1<<Copy_BitNum);
	break;
case WRITE_ONLY:
	prv_Write_Only|=(1<<Copy_BitNum);
	prv_Read_Only&=~(1<<Copy_BitNum);
	break;
case READ_AND_WRITE:
	prv_Write_Only|=(1<<Copy_BitNum);
	prv_Read_Only|=(1<<Copy_BitNum);
	break;
case RESERVED:
	prv_Read_Only&=~(1<<Copy_BitNum);
	prv_Write_Only&=~(1<<Copy_BitNum);
	break;
 default:
	loc_enuErrorstatus=Not_ok;
	break;

}

	return loc_enuErrorstatus;
}
