#include <iostream>
using namespace std;
int main() {
	short int FirstNumber, SecondNumber, ThirdNumber;
	cout << "Please Enter The FirstNumber:" << endl;
	cin >> FirstNumber;
	cout << "Please Enter The SecondNumber:" << endl;
	cin >> SecondNumber;
	cout << "Please Enter The ThirdNumber:" << endl;
	cin >> ThirdNumber;
	short int Sum = FirstNumber + SecondNumber + ThirdNumber;
	cout << "Sum = " << Sum << endl;
	return 0;
}