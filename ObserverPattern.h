#ifndef OBSERVERPATTERN_H
#define OBSERVERPATTERN_H

class Observer {
	public:
		Observer() {};
		Observer(const Observer&) {};
		const Observer& operator=(const Observer&) { return *this; };
		virtual ~Observer() {};
		virtual void update() = 0;	
};

#endif