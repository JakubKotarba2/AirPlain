#include "Hotel.h"
#include <iostream>

Hotel::Hotel()
	:m_days(), m_Number_of_people(), m_standard()
{}

Hotel::~Hotel()
{

}

void Hotel::InitialHotel()
{
	std::cout << "How many people do you want to allocate? \n";
	std::cin >> m_Number_of_people;

	std::cout << "Whitch standard do yout want? \n";
	std::cin >> m_standard;

	std::cout << "How long? \n";
	std::cin >> m_days;
}

void Hotel::PrintHotel()
{
	std::cout << "Number of people: " << m_Number_of_people << std::endl;
	std::cout << "Standard: " << m_standard << std::endl;
	std::cout << "Days: " << m_days << std::endl;
}
