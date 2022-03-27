#ifndef WORKER_H
#define WORKER_H
#include <iostream>
#include "Flight.h"
#include "Hotel.h"
#include "Virtual.h"
using namespace std;

class Worker: public Virtual
{
	int m_age;
	std::string m_name, m_surname, m_sex;

public:
	Worker();
	~Worker();
	void Initial() override;
	void Change() override;
	void See() override;
	friend ostream& operator<<(ostream& stream, Worker P);

	
};

#endif // !Worker
