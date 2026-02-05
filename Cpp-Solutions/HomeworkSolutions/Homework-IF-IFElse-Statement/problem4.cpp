#include <iostream>
using namespace std;
void ReadInformation(int &Age, bool &HasDriverLicense)
{
	cout << "Please Enter Your Age:" << endl;
	cin >> Age;
	cout << "Please Enter Your HasDriverLicense:(1 For Yes , 0 For No)" << endl;
	cin >> HasDriverLicense;
}
void PrintInformation(int Age,int HasDriverLicense)
{
	if (Age >= 21 && HasDriverLicense == true)
	{
		cout << "Hired" << endl;
	}
	else
	{
		cout << "Rejected" << endl;
	}
}
int main()
{
	int Age;
	bool HasDriverLicense;
	ReadInformation(Age, HasDriverLicense);
	PrintInformation(Age, HasDriverLicense);
	return 0;
}