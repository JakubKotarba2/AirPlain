#include "Flight.h"
#include <iostream>
//#include "Hotel.h"
using namespace std;

Flight::Flight()
	
{}

Flight::~Flight()
{
}

int Flight::PossibleOption()
{
	int answer;
	cout << "1. Maledivy "
		"2. Hawai "
		"3. Poland "
		"4. Russia "
		"5. USA ";
	cin >> answer;
	return answer;
}

void Flight::Flights()
{
	switch (PossibleOption())
	{
		enum Flights
		{
			Maledivy, Hawai, Poland, Russia, USA
		};

	case Maledivy:
		InitialHotel(); //Hotel class
		PrintHotel(); break;

	case Hawai:
		InitialHotel(); //Hotel class
			PrintHotel(); break;

	case Poland:
		InitialHotel();
			PrintHotel(); break;

	case Russia:
		InitialHotel();
		PrintHotel(); break;

	case USA:
		InitialHotel();
		PrintHotel(); break;
	default:
		break;
	}
}


