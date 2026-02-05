#include <iostream>
using namespace std;
struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};
int main()
{
	strInfo Persons[2];
	Persons[0].FirstName = "Khazaal";
	Persons[0].LastName = "Emad";
	Persons[0].Age = 22;
	Persons[0].Phone = "07701456465";
	Persons[1].FirstName = "Hanen";
	Persons[1].LastName = "Adey";
	Persons[1].Age = 24;
	Persons[1].Phone = "44686775775";
	cout << Persons[0].FirstName << " " << Persons[0].LastName << "\n" << Persons[0].Age  << "\n" << Persons[0].Phone << endl;
	cout << "***************************\n";
	cout << Persons[1].FirstName << " " << Persons[1].LastName << "\n" << Persons[1].Age << "\n" << Persons[1].Phone << endl;
	return 0;
}