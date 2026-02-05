#include <iostream>
using namespace std;
struct StInformation
{
	string FirstName;
	string LastName;
};
StInformation ReadInformation()
{
	StInformation Information;
	cout << "Please Enter Your First Name:" << endl;
	cin >> Information.FirstName;
	cout << "Please Enter Your Last Name:" << endl;
	cin >> Information.LastName;
	return Information;
}
string GetFullName(StInformation Information,bool Reversed)
{
	string FullName = "";
	if (Reversed)
		FullName = Information.LastName + " " + Information.FirstName;
	else
		FullName = Information.FirstName + " " + Information.LastName;
	return FullName;
}
void PrintFullName(string FullName)
{
	cout << "\n Your Full Name is: " << FullName << endl;
}
int main()
{
	PrintFullName(GetFullName(ReadInformation(),true));
	return 0; 
}
