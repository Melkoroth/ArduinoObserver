#ifndef CounterObservable_H
#define CounterObservable_H


#include "ObserverPattern.h"

//class Observer;
class SerialObserver : public Observer {
	public:
		SerialObserver();
		~SerialObserver();
		void update();
	private:
		int _s;
};

SerialObserver::SerialObserver() : Observer(), _s(0) {}

SerialObserver::~SerialObserver() {}

void SerialObserver::update() {
	_s++;
	Serial.print(_s);
	Serial.print(";");
}

 #endif