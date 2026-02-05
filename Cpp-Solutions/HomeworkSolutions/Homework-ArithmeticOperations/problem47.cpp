#include <iostream>
using namespace std;
int main() {
	int LoanAmount, MonthlyInstallment;
	cout << "Please Enter The LoanAmount:" << endl;
	cin >> LoanAmount;
	cout << "Please Enter The MonthlyInstallment:" << endl;
	cin >> MonthlyInstallment;
	int TotalMonths = LoanAmount / MonthlyInstallment;
	cout << "\n" << TotalMonths << " Months." << endl;
	return 0;
}