#include <iostream>
using namespace std;
int main() {
	float BillValue;
	cout << "Please Enter The BillValue:" << endl;
	cin >> BillValue;
	float TotalBill = BillValue * 1.1;
	TotalBill = TotalBill * 1.16;
	cout << "\nTotalBill = " << TotalBill << endl;
	return 0;
}