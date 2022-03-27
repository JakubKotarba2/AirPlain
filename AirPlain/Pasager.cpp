#include "Passenger.h"
#include<iostream>




Passenger::Passenger()
	:m_age(), m_name("brak"), m_surname("brak"), m_sex("brak")
{}


Passenger::~Passenger()
{
	
}

void Passenger::Initial()
{
	cout << "Enter your name: \n";
	cin >> m_name;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Enter your surname: \n";
	cin >> m_surname;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Enter your sex: \n";
	cin >> m_sex;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Enter your age: \n";
	cin >> m_age;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter right information \n";
		cin >> m_age;
	}
	
}

void Passenger::Change()
{
	cout << "Enter your new name\n";
	cin >> m_name;
	cout << "Enter your new surname\n";
	cin >> m_surname;
	cout << "Enter your new sex\n";
	cin >> m_sex;
	cout << "Enter your new age\n";
	cin >> m_age;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter right information \n";
		cin >> m_age;
	}
}

void Passenger::See()
{
	cout << m_name << endl;
	cout << m_sex << endl;
	cout << m_age << endl;
}

