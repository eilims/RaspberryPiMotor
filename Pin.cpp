#include <wiringPi.h>
#include "Pin.h"


Pin::Pin(int pin) {
	this->pin = pin;
	this->state = 1; //0=input 1=output
	this->output = 0;
	pinMode(this->pin, this->state);
	digitalWrite(this->pin, this->output);
}


int Pin::getPin(){
	return this->pin;
}

int Pin::getState(){
	return this->state;
}

int Pin::getOutput(){
	return this->output;
}

void Pin::setState(int state){
	this->state = state;
	pinMode(this->pin, this->state);
}

void Pin::setOutput(int output){
	this->output = output;
	digitalWrite(this->pin, this->output);
}