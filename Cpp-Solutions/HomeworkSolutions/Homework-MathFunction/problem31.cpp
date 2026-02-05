#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float Number;
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	float Power_2 = pow(Number,2);
	float Power_3 = pow(Number,3);
	float Power_4 = pow(Number,4);
	cout << "\nPower^2 = " << Power_2 << "\nPower^3 = " << Power_3 << "\nPower^4 = " << Power_4 << endl;
	cout << "\nPower^2 = " << round(Power_2) << "\nPower^3 = " << round(Power_3) << "\nPower^4 = " << round(Power_4) << endl;
	return 0;
}