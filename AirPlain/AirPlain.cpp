#include <iostream>
#include "Passenger.h"
#include <vector>
#include "Worker.h"


int choice();
int choice2();

ostream& operator<<(ostream& stream, Passenger p); 
ostream& operator<<(ostream& stream, Worker P); 
	


int main()
{
	system("Color f2");
	vector<Passenger> passenger; 
	Passenger* p_passenger = new Passenger; 

	vector<Worker> worker;
	Worker* p_worker = new Worker;

	passenger.reserve(30);
	int exit = 1;
	int id_P = 0, id_W = 0, see_data = 0, see_data1 = 0, number = 0, number1, exit1 = 1;
	int Answer = 0, exit3 = 1;
	
	do
	{
		std::cout << "Are you a passenger or worker? \n"
			"1.Passenger \n"
			"2.Worker \n"
			"0. Wyjscie\n";
		cin >> Answer;
		

		switch (Answer)
		{

		case 1:
			do
			{
			

				enum Passenger
				{
					Exit, Register, See_data, Change_data, BookFlight,
				};
				switch (choice())
				{
				case Exit:
					exit1 = 0; break;

				case Register:
					p_passenger->Initial();
					passenger.emplace_back(*p_passenger); 
					cout << "Your number is " << number << endl;
					number++;
					see_data++;  
					exit1 = 1; break;

				case See_data:
					cout << "Enter your number:\n";
					cin >> id_P;
					if (see_data - 1 >= id_P)
					{
						cout << passenger.at(id_P);
					}
					else
					{
						cout << "You dont exist yet \n";
					} 
					exit1 = 1; break;

				case Change_data:
					cout << "Enter your number:\n";
					cin >> number1;

					if (see_data - 1 >= number1)
					{
						passenger.at(number1).Change(); break;
					}
					else
					{
						cout << "You dont exist yet \n";
					} 
					exit1 = 1; break;

				case BookFlight:
					cout << "Number:\n";
					cin >> number1;
					if (see_data - 1 >= number1)
					{
						passenger.at(number1).Flights();
					}
					else
					{
						cout << "You dont exist yet \n";
					} 
					exit1 = 1; break;

				default:
					break;
				}

			} while (exit1); break;

		case 2:
			do
			{
				enum Worker
				{
					Exit, Register, See_data, Change_data, BacktoMenuOption
				};
				switch (choice2())
				{
				case Exit:
					exit = 0; break;

				case Register:
					p_worker->Initial();
					worker.push_back(*p_worker); 
					cout << "Your number is " << number << endl;
					number++;
					see_data1++;
					exit = 1; break;

				case See_data:
					cout << "Enter your number:\n";
					cin >> id_W;
					if (see_data1 - 1 >= id_W)
					{
						cout << worker.at(id_W);
					}
					else
					{
						cout << "You dont exist yet \n";
					} exit = 1; break;

				case Change_data:
					cout << "Enter your number:\n";
					cin >> number1;

					if (see_data1 - 1 >= number1)
					{
						worker.at(number1).Change(); break;
					}
					else
					{
						cout << "You dont exist yet \n";
					} exit = 1; break;
				default:
					break;
				}

			} while (exit); break;
		case 0:
			exit3 = 0;
			cout << "Thank you for visiting us ";
		default:
			break;
		}

	} while (exit3);

	}

int choice()
{
	int answer;

	cout << "\t\t\t\t\t\t Welcome in our AirPort \n\n";
	cout << "Pleases choose one option\n"
		"0.Exit        "
		"1.Register         "
		"2.See yout data        "
		"3.Change data        "
		"4.Book Flight \n\n";

	cin >> answer;
	return answer;
}
int choice2()
{
	int answer;

	cout << "\t\t\t\t\t\t Welcome in our AirPort \n\n";
	cout << "Pleases choose one option\n"
		"0.Exit        "
		"1.Register         "
		"2.See yout data        "
		"3.Change data        "
		"4.Back to menu option \n\n";

	cin >> answer;
	return answer;
}

ostream& operator<<(ostream& stream, Passenger p)
{
	stream << p.m_name << " " << p.m_surname << " " << p.m_sex << " " << p.m_age << endl << endl;
	return stream;
}

ostream& operator<<(ostream& stream, Worker P)
{

	stream << P.m_name << " " << P.m_surname << " " << P.m_sex << " " << P.m_age << endl << endl;
	return stream;
}
