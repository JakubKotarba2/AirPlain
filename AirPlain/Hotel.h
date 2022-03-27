#ifndef HOTEL_H
#define HOTEL_H


class Hotel
{
private:
	int m_Number_of_people, m_standard, m_days;


public:
	Hotel();
	~Hotel();
	void InitialHotel();
	void PrintHotel();

};

#endif // HOTEL_H
