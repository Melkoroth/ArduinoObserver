#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "Sequence.h"
#include "ObserverPattern.h"

//Observable
class Observable {
	public:
		Observable();
		Observable(const Observable&);
		const Observable& operator=(const Observable&);
		virtual ~Observable();
		virtual void attach(Observer*);
		virtual void detach(Observer*);
		virtual void notify();

	private:
		CSequence<Observer*> _observers;
};

Observable::Observable() {}

Observable::Observable(const Observable &other) {}

const Observable& Observable::operator=(const Observable& other) { return *this; }

Observable::~Observable() {}

void Observable::attach(Observer* o) {
	_observers.add(o);
}

void Observable::detach(Observer* o) {
	_observers.remove(o);
}

void Observable::notify() {
	for (_observers.restart(); !_observers.isEnd(); _observers.forward())
		_observers.actual()->update();
}

#endif