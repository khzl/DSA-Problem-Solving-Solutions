#include <iostream>
#include <string>
using namespace std;
struct strInfo
{
	string FirstName;
	string lastName;
	int Age;
	string Phone;
};
void ReadInformation(strInfo &Information)
{
	cout << "Please Enter FirstName:" << endl;
	cin >> Information.FirstName;
	cout << "Please Enter LastName:" << endl;
	cin >> Information.lastName;
	cout << "Please Enter Age:" << endl;
	cin >> Information.Age;
	cout << "Please Enter Phone:" << endl;
	cin >> Information.Phone;
}
void PrintInformation(strInfo Information)
{
	cout << "********************************\n";
	cout << "FirstName:" << Information.FirstName << endl;
	cout << "LastName:" << Information.lastName << endl;
	cout << "Age:" << Information.Age << endl;
	cout << "Phone:" << Information.Phone << endl;
	cout << "*********************************\n";
}
void ReadPersonsInformation(strInfo Persons[2])
{
	ReadInformation(Persons[0]);
	ReadInformation(Persons[1]);
}
void PrintPersonsInformation(strInfo Person[2])
{
	cout << "\n*********************************************\n";
	PrintInformation(Person[0]);
	PrintInformation(Person[1]);
}
int main()
{
	strInfo Persons[2];
	ReadPersonsInformation(Persons);
	PrintPersonsInformation(Persons);
	return 0;
}