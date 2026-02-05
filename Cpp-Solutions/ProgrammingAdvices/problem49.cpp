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
	do
	{
		PinCode = ReadPINCode();
		if (PinCode == "1234")
		{
			return 1; // this will exit the function and return
		}
		else
		{
			cout << "\nWrong PIN\n";
			system("color 4F"); // turn screen to red
		}
	} while (PinCode != "1234");
}
int main()
{
	if (Login())
	{
		system("color 2F"); // turn screen to green
		cout << "\nYour Account Balance is " << 7500 << '\n';
	};
	return 0;
}
