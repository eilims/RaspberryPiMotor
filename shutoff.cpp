#include <wiringPi.h>
#include "Pin.h"

int main(){
	wiringPiSetupGpio(); //Set up using using broadcom
	Pin pin1(26);
	Pin pin2(13);
	Pin pin3(6);
	Pin pin4(5);
	pin1.setState(1);
	pin1.setOutput(0);
	pin2.setState(1);
	pin2.setOutput(0);
	pin3.setState(1);
	pin3.setOutput(0);
	pin4.setState(1);
	pin4.setOutput(0);
}