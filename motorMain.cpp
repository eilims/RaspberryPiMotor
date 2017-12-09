#include "Motor.h"
#include <wiringPi.h>
#include <unistd.h>
#include "Pin.h"

int main(){
	int step = 2500;
	int wait = 500;
	Motor motor(26,13,6);
	motor.setDelay(step);
	motor.setDirection(1);//Forward Backward Test
	motor.runMotor(wait);
	motor.setDirection(-1);
	motor.runMotor(wait);
	motor.setDirection(0);//turning Test
	motor.setTurningDirection(1);
	motor.runMotor(wait);
	motor.setTurningDirection(-1);
	motor.runMotor(wait);
	motor.~Motor();
//	Pin controlPin1(26); //test code
//	Pin controlPin2(13);
//	while(wait > 0){
//		controlPin1.setOutput(0);
//		controlPin2.setOutput(0);
//		usleep(step);
//		controlPin1.setOutput(0);
//		controlPin2.setOutput(1);
//		usleep(step);
//		controlPin1.setOutput(1);
//		controlPin2.setOutput(0);
//		usleep(step);
//		controlPin1.setOutput(1);
//		controlPin2.setOutput(1);
//		usleep(step);
//		wait--;
//	} 
}