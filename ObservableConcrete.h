#ifndef OBSERVABLECONCRETE_H
#define OBSERVABLECONCRETE_H

//---------
class CounterObservable : public Observable {
	public:
		CounterObservable();
		virtual ~CounterObservable();
		virtual int get() ;
		void tick();
		
	private:
		int _s;

};

CounterObservable::CounterObservable() : _s(0) {}

CounterObservable::~CounterObservable() {}

int CounterObservable::get() { return _s; }

void CounterObservable::tick() { 
	_s++; 
	notify();
}

#endif