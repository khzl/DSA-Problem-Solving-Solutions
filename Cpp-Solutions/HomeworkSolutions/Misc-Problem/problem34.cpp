#include <iostream>
#include <string>
using namespace std;
struct PersonalInformationCard
{
	string Name;
	int Age;
	string City;
	string Country;
	int MonthlySalary;
	char Gender;
	bool Status;
};
void ReadInformation(PersonalInformationCard& PersonalInformation) // parameter By Reference 
{
	cout << "Please Enter Your Name:" << endl;
	cin.ignore(1, '\n');
	getline(cin, PersonalInformation.Name);
	cout << "Please Enter Your Age:" << endl;
	cin >> PersonalInformation.Age;
	cout << "Please Enter Your City:" << endl;
	cin >> PersonalInformation.City;
	cout << "Please Enter Your Country:" << endl;
	cin >> PersonalInformation.Country;
	cout << "Please Enter Your MonthlySalary:" << endl;
	cin >> PersonalInformation.MonthlySalary;
	cout << "Please Enter Your Gender:" << endl;
	cin >> PersonalInformation.Gender;
	cout << "Please Enter Your Status:" << endl;
	cin >> PersonalInformation.Status;
}
void PrintInformation(PersonalInformationCard PersonalInformation) // Parameter By Value
{
	cout << "\n**********************************\n";
	cout << "Name:" << PersonalInformation.Name << endl;
	cout << "Age:" << PersonalInformation.Age << endl;
	cout << "City:" << PersonalInformation.City << endl;
	cout << "Country:" << PersonalInformation.Country << endl;
	cout << "MonthlySalary:" << PersonalInformation.MonthlySalary << endl;
	cout << "YearlySalary:" << PersonalInformation.MonthlySalary * 12 << endl;
	cout << "Gender:" << PersonalInformation.Gender << endl;
	cout << "Status:" << PersonalInformation.Status << endl;
	cout << "\n************************************\n";
}
int main()
{
	PersonalInformationCard Person1InformationCard;
	ReadInformation(Person1InformationCard);
	PrintInformation(Person1InformationCard);
	PersonalInformationCard Person2InformationCard;
	ReadInformation(Person2InformationCard);
	PrintInformation(Person2InformationCard);
	PersonalInformationCard Person3InformationCard;
	ReadInformation(Person3InformationCard);
	PrintInformation(Person3InformationCard);
	return 0;
}