#include <iostream>
using namespace std;
int main() {
	int LoanAmount, HowManyMonths;
	cout << "Please Enter The LoanAmount:" << endl;
	cin >> LoanAmount;
	cout << "Please Enter The HowManyMonths:" << endl;
	cin >> HowManyMonths;
	int MonthlyInstallment = LoanAmount / HowManyMonths;
	cout << "\n" << "TotalMonths = " << MonthlyInstallment << endl;
	return 0;
}