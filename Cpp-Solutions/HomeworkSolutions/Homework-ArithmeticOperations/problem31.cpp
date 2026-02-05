#include <iostream>
using namespace std;
int main() {
	short int Number;
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	short int Power_2 = Number * Number;
	short int Power_3 = Number * Number * Number;
	short int Power_4 = Number * Number * Number * Number;
	cout << "\nPower^2 = " << Power_2 << "\nPower^3 = " << Power_3 << "\nPower^4 = " << Power_4 << endl;
	return 0;
}