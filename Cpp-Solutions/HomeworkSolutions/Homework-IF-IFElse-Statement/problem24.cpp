#include <iostream>
using namespace std;
void ReadAge(int &Age)
{
	cout << "Please Enter Your Age:" << endl;
	cin >> Age;
}
void PrintAge(int Age)
{
	if (Age >= 18 && Age <= 45)
	{
		cout << "Valid Age" << endl;
	}
	else
	{
		cout << "Invalid Age" << endl;
	}
}
int main()
{
	int Age;
	ReadAge(Age);
	PrintAge(Age);
	return 0;
}