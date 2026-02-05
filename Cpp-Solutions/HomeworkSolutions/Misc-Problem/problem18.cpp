#include <iostream>
#include <string>
using namespace std;
struct strInformation
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};
void ReadInformation(strInformation& Information)
{
	cout << "Please Enter FirstName:\n";
	cin >> Information.FirstName;
	cout << "Please Enter lastName:\n";
	cin >> Information.LastName;
	cout << "Please Enter Age:\n";
	cin >> Information.Age;
	cout << "Please Enter Phone:\n";
	cin >> Information.Phone;
	cout << "\n\n";
}
void PrintInformation(strInformation Information)
{
	cout << "\n************************************\n";
	cout << "FirstName:" << Information.FirstName << endl;
	cout << "LastName:" << Information.LastName << endl;
	cout << "Age:" << Information.Age << endl;
	cout << "Phone:" << Information.Phone << endl;
	cout << "\n**************************************\n";
}
void ReadPersonsInformation(strInformation Persons[100], int& NumberOfpersons)
{
	cout << "How many Persons:\n";
	cin >> NumberOfpersons;
	for (int Counter = 0; Counter <= NumberOfpersons - 1; Counter++)
	{
		cout << "Please Enter Person`s " << Counter + 1 << " Information: \n";
		ReadInformation(Persons[Counter]);
	}
}
void PrintPersonsInformation(strInformation Persons[100], int NumberOfPersons)
{
	for (int Counter = 0; Counter <= NumberOfPersons - 1; Counter++)
	{
		cout << "Person`s " << Counter + 1 << " Information: \n";
		PrintInformation(Persons[Counter]);
	}
}
int main()
{
	strInformation Persons[100];
	int NumberOfPersons = 1;
	ReadPersonsInformation(Persons, NumberOfPersons);
	PrintPersonsInformation(Persons, NumberOfPersons);
	return 0;
}