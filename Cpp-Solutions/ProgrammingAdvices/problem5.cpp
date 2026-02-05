#include <iostream>
#include <string>
using namespace std;
struct StInformation
{
	int Age;
	bool HasDrivingLicense;
	bool HasRecommendation;
};
StInformation ReadInformation()
{
	StInformation Information;
	cout << "Please Enter Your Age:" << endl;
	cin >> Information.Age;
	cout << "Do you have Driver License:" << endl;
	cin >> Information.HasDrivingLicense;
	cout << "Do you have recommendation:" << endl;
	cin >> Information.HasRecommendation;
	return Information;
}
bool IsAccepted(StInformation Information)
{
	if (Information.HasRecommendation)
	{
		return true;
	}
	else
	{
		return (Information.Age > 21 && Information.HasDrivingLicense);
	}
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
