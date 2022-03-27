#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
#include "Flight.h"
#include "Hotel.h"
#include "Virtual.h"
using namespace std;

class Passenger :public Virtual
{

	string m_name, m_surname, m_sex;
	int m_age;


public:
	Passenger();
	~Passenger();
	void Initial() override;
	void Change() override;
	void See() override;
	friend ostream& operator<<(ostream& stream, Passenger p);
};


#endif // !PASAGER_H

