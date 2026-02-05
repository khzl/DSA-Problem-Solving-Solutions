#include <iostream>
using namespace std;
enum enumCountryChoice{Jordan=1,Tunisa=2,Algeria=3,Oman=4,Egypt=5,Iraq=6,Other=7};
int main()
{
	cout << "******************************************\n";
	cout << "Please Enter The Number Of Your Country?\n";
	cout << "(1) Jordan\n";
	cout << "(2) Tunisa\n";
	cout << "(3) Algeria\n";
	cout << "(4) Oman\n";
	cout << "(5) Egypt\n";
	cout << "(6) Iraq\n";
	cout << "(7) Other\n";
	cout << "******************************************\n";
	cout << "Your Choice ?";
	int Choice;
	enumCountryChoice Country;
	cin >> Choice;
	Country = (enumCountryChoice)Choice;
	if (Country == enumCountryChoice::Jordan)
	{
		cout << "Your Country is Jordan\n";
	}
	else if (Country == enumCountryChoice::Tunisa)
	{
		cout << "Your Country is Tunisa\n";
	}
	else if (Country == enumCountryChoice::Algeria)
	{
		cout << "Your Country is Algeria\n";
	}
	else if (Country == enumCountryChoice::Oman)
	{
		cout << "Your Country is Oman\n";
	}
	else if (Country == enumCountryChoice::Egypt)
	{
		cout << "Your Country is Egypt\n";
	}
	else if (Country == enumCountryChoice::Iraq)
	{
		cout << "Your Country is Iraq\n";
	}
	else
	{
		cout << "Your Country is other\n";
	}
	return 0;
}