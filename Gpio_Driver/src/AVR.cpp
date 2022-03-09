/*
 * AVR.cpp
 *
 *  Created on: Mar 9, 2022
 *      Author: hp
 */
#include"Gpio.hpp"


class AVR :GPIO

{

private :
	    int pin_mode;
		int pin_direction;
		int pin_value;
public:
	    error_status set_pin(int pin_mode,int pin_direction, int pin_value);

		error_status clear_pin(int pin_mode,int pin_direction, int pin_value);

		error_status get_pin(int pin_mode,int pin_direction, int pin_value);

};
