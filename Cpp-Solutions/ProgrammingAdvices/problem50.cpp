#include <iostream>
using namespace std;
string ReadPINCode()
{
	string PinCode;
	cout << "Please Enter PIN Code \n";
	cin >> PinCode;
	return PinCode;
}
bool Login()
{
	string PinCode;
	int Counter = 3;
	do
	{
		Counter--;
		PinCode = ReadPINCode();
		if (PinCode == "1234")
		{
			return 1; // this will exit the function and return
		}
		else
		{
			system("color 4F"); //turn screen to red
			cout << "\nWrong PIN, you Have " << Counter << " More tries \n";
		}
	} while (Counter >= 1 && PinCode != "1234");
	return 0; // when you reach here this means login faild 
}
int main()
{
	if (Login())
	{
		system("color 2F"); // turn screen to green
		cout << "\nYour Account Balance is " << 7500 << '\n';
	}
	else
	{
		cout << "\nYour Card Blocked call the bank for help. \n";
	}
	return 0;
}
