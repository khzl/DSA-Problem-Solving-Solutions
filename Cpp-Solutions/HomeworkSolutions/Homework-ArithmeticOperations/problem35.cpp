#include <iostream>
using namespace std;
int main() {
	float Pennies, Nickels, Dimes, Quarters, Dollars;
	cout << "Please Enter The Pennies:" << endl;
	cin >> Pennies;
	cout << "Please Enter The Nickels:" << endl;
	cin >> Nickels;
	cout << "Please Enter The Dimes:" << endl;
	cin >> Dimes;
	cout << "Please Enter The Quarters:" << endl;
	cin >> Quarters;
	cout << "Please Enter The Dollars:" << endl;
	cin >> Dollars;
	float TotalPennies = Pennies * 1 + Nickels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
	float TotalDollars = TotalPennies / 100;
	cout << "\nTotalPennies = " << TotalPennies << "\nTotalDollars = " << TotalDollars << endl;
	return 0;
}