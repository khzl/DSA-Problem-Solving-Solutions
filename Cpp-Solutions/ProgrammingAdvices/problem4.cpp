#include <iostream>
#include <string>
using namespace std;
struct StInformation
{
	int Age;
	bool HasDrivingLicense;
};
StInformation ReadInformation()
{
	StInformation Information;
	cout << "Please Enter Your Age:" << endl;
	cin >> Information.Age;
	cout << "Do you have Driver License:" << endl;
	cin >> Information.HasDrivingLicense;
	return Information;
}
bool IsAccepted(StInformation Information)
{
	return (Information.Age > 21 && Information.HasDrivingLicense);
}
void PrintResult(StInformation Information)
{
	if (IsAccepted(Information))
		cout << "\n Hired" << endl;
	else
		cout << "\n Rejected" << endl;
}
int main()
{
	PrintResult(ReadInformation());
	return 0;
}
