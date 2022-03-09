/*
 * register.hpp
 *
 *  Created on: Mar 8, 2022
 *      Author: Osama Mohamed Hamdy
 */
#include<iostream>
#ifndef REGISTER_HPP_
#define REGISTER_HPP_

typedef enum
{
	OK,Not_ok

}Reg_Error_status;
typedef enum
{
	READ_ONLY=0,
	WRITE_ONLY,
	READ_AND_WRITE,
	RESERVED

}REG_PERMISSION;
template <class T>

class Generic_Register
{

private :

	T * prvRegister;
	T prv_Write_Only;
	T prv_Read_Only;
public :
	Generic_Register(T * prvRegister);
	Reg_Error_status setRegisterValue(T   copy_tvalue);
	Reg_Error_status getRegistervalue(T & Ref_tvalue);
	Reg_Error_status setBit(std::uint8_t Copy_uint8_BitNum);
	Reg_Error_status clearBit(std::uint8_t Copy_uint8_BitNum);
	Reg_Error_status getBit(std::uint8_t Copy_uint8_BitNum,bool &Ref_BitValue);
	Reg_Error_status set_permission(std::uint8_t Copy_BitNum,REG_PERMISSION permission);
};





#endif /* REGISTER_HPP_ */
