#include <unistd.h>
#include "Pin.h"
#include <wiringPi.h>

int main(){
	int step = 2500;
	int wait = 1000;
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
	while(wait != 0){
		pin1.setOutput(1);
		usleep(step);
		pin1.setOutput(0);
		pin2.setOutput(1);
		usleep(step);
		pin2.setOutput(0);
		pin3.setOutput(1);
		usleep(step);
		pin3.setOutput(0);
		pin4.setOutput(1);
		usleep(step);
		pin4.setOutput(0);
		wait--;
	}
	wait = 1000;
	while(wait != 0){
		pin4.setOutput(1);
		usleep(step);
		pin4.setOutput(0);
		pin3.setOutput(1);
		usleep(step);
		pin3.setOutput(0);
		pin2.setOutput(1);
		usleep(step);
		pin2.setOutput(0);
		pin1.setOutput(1);
		usleep(step);
		pin1.setOutput(0);
		wait--;
	}
	return 0;z
}
