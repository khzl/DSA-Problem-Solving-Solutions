#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float Number,Power;
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	cout << "Please Enter The Power:" << endl;
	cin >> Power;
	cout << "Number^Power = " << pow(Number, Power) << endl;
	cout << "Number^Power = " << round(pow(Number, Power)) << endl;
	return 0;
}