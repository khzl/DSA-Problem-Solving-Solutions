#include <iostream>
using namespace std;
int main() {
	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	char Gender;
	bool isMarried;
	cout << "Please enter your Name:" << endl;
	cin >> Name;
	cout << "Please enter your Age:" << endl;
	cin >> Age;
	cout << "Please enter your City:" << endl;
	cin >> City;
	cout << "Please enter your Country:" << endl;
	cin >> Country;
	cout << "Please enter your MonthlySalary:" << endl;
	cin >> MonthlySalary;
	cout << "Please enter your Gender:" << endl;
	cin >> Gender;
	cout << "Please enter your Married: 1/0 :" << endl;
	cin >> isMarried;
	cout << "***************************************\n";
	cout << "Name:" << Name << endl;
	cout << "Age:" << Age << endl;
	cout << "City:" << City << endl;
	cout << "Country:" << Country << endl;
	cout << "MonthlySalary:" << MonthlySalary << endl;
	cout << "YearlySalary:" << MonthlySalary * 12 << endl;
	cout << "Gender:" << Gender << endl;
	cout << "Married:" << isMarried << endl;
	cout << "****************************************\n";
	return 0;
}