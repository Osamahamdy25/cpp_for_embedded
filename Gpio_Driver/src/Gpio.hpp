/*
 * Gpio.hpp
 *
 *  Created on: Mar 9, 2022
 *      Author: hp
 */

#ifndef GPIO_HPP_
#define GPIO_HPP_
typedef enum
{
	pin_mode_error,
	pin_direction_erro,
	pin_value_error
}error_status;
class GPIO
{
private :
	int pin_mode;
	int pin_direction;
	int pin_value;
public :

	error_status set_pin(int pin_mode,int pin_direction, int pin_value);

	error_status clear_pin(int pin_mode,int pin_direction, int pin_value);

	error_status get_pin(int pin_mode,int pin_direction, int pin_value);


};



#endif /* GPIO_HPP_ */
