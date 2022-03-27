#ifndef FLIGHT_H
#define FLIGHT_H
#include "Hotel.h"

class Flight:public Hotel
{
public:
	Flight();
	~Flight();
	int PossibleOption();
	void Flights();
	
};


#endif // !FLIGHT_H