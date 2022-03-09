/*
 * GPIO_ARM.cpp
 *
 *  Created on: Mar 9, 2022
 *      Author: hp
 */
#include"Gpio.hpp"
class Gpio_ARM : GPIO
{
private:
int 	reg_lock;
int  	reg_Commit;
int 	reg_enable;
int     reg_control;
int     reg_data;
int     reg_analog_enable;
int     reg_analog_disable;
int     reg_clock;

public:

/*       Same Methods                 */

   error_status set_pin(int pin_mode,int pin_direction, int pin_value);

	error_status clear_pin(int pin_mode,int pin_direction, int pin_value);

	error_status get_pin(int pin_mode,int pin_direction, int pin_value);
/*   Exrta Method for ARM */
	error_status port_init(int 	reg_lock,int reg_Commit,int reg_clock,int reg_enable,int reg_control,int  reg_data,	int reg_analog_enable,int reg_analog_disable);
};


