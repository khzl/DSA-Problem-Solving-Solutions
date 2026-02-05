#include <iostream>
using namespace std;
void ReadPIN(int &PIN)
{
	cout << "Please Enter Your PIN:" << endl;
	cin >> PIN;
}
void PrintPIN(int PIN)
{
	if (PIN == 1234)
	{
		int Balance = 7500;
		cout << "Your Balance is:" << Balance << endl;
	}
	else
	{
		cout << "Wrong PIN" << endl;
	}
}
int main()
{
	int PIN;
	ReadPIN(PIN);
	PrintPIN(PIN);
	return 0;
}