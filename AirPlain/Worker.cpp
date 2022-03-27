#include "Worker.h"
#include<iostream>

Worker::Worker()
{
}

Worker::~Worker()
{
}

void Worker::Initial()
{

	std::cout << "Entre your name: \n";
	std::cin >> m_name;
	std::cout << "Entre your surname: \n";
	std::cin >> m_surname;
	std::cout << "Entre your sex: \n";
	std::cin >> m_sex;
	std::cout << "Entre your age: \n";
	std::cin >> m_age;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter right information \n";
		cin >> m_age;
	}
}

void Worker::Change()
{
	std::cout << "Enter your new name\n";
	std::cin >> m_name;
	std::cout << "Enter your new surname\n";
	std::cin >> m_surname;
	std::cout << "Enter your new sex\n";
	std::cin >> m_sex;
	std::cout << "Enter your new age\n";
	std::cin >> m_age;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter right information \n";
		cin >> m_age;
	}
}

void Worker::See()
{
	std::cout << m_name << std::endl;
	std::cout << m_sex << std::endl;
	std::cout << m_age << std::endl;
}
