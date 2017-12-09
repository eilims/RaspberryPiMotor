#ifndef PIN_H
#define PIN_H

class Pin {
private:
	int pin;
	int state; //0 = input, 1 = output;
	int output;

public:
	Pin(int pin);
	int getPin();
	int getState();
	int getOutput();
	void setState(int state);
	void setOutput(int output);
};

#endif 