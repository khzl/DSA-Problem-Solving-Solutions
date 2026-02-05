#include <iostream>
using namespace std;
int main() {
	string Name = "Khazaal Emad";
	int Age = 22;
	string City = "Mosul";
	string Country = "Iraq";
	float MonthlySalary = 5000;
	float YearlySalary = MonthlySalary * 12;
	char Gender = 'M';
	bool isMarried = true;

	cout << "*********************************" << endl;
	cout << "Name:" << Name << endl;
	cout << "Age:" << Age << endl;
	cout << "City:" << City << endl;
	cout << "Country:" << Country << endl;
	cout << "MonthlySalary:" << MonthlySalary << endl;
	cout << "YearlySalary:" << YearlySalary << endl;
	cout << "Gender:" << Gender << endl;
	cout << "Married:" << isMarried << endl;
	cout << "**********************************" << endl;
	return 0;
}