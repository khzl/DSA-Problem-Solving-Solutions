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
void ReadInformation(strInformation &Information) // Parameter By Reference 
{
	cout << "Please Enter Your FirstName:" << endl;
	cin >> Information.FirstName;
	cout << "Please Enter Your LastName:" << endl;
	cin >> Information.LastName;
	cout << "Please Enter Your Age:" << endl;
	cin >> Information.Age;
	cout << "Please Enter Yor Phone:" << endl;
	cin >> Information.Phone;
}
void PrintInformation(strInformation Information) // Parameter By Value
{
	cout << "\n*****************************************\n";
	cout << "FirstName:" << Information.FirstName << endl;
	cout << "LastName:" << Information.LastName << endl;
	cout << "Age:" << Information.Age << endl;
	cout << "Phone:" << Information.Phone << endl;
	cout << "\n****************************************\n";
}
int main()
{
	strInformation Person1Information;
	ReadInformation(Person1Information);
	PrintInformation(Person1Information);

	strInformation Person2Information;
	ReadInformation(Person2Information);
	PrintInformation(Person2Information);

	strInformation Person3Information;
	ReadInformation(Person3Information);
	PrintInformation(Person3Information);
	return 0;
}