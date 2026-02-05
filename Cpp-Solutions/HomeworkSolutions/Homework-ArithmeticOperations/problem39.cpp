#include <iostream>
using namespace std;
int main() {
	float TotalBill, CashPaid;
	cout << "Please Enter The CashPaid:" << endl;
	cin >> CashPaid;
	cout << "Please Enter The TotalBill:" << endl;
	cin >> TotalBill;
	float Remainder = CashPaid - TotalBill;
	cout << "\nRemainder = " << Remainder << endl;
	return 0;
}