#include <iostream>
using namespace std;
int main() {
	int FirstNumber, SecondNumber, ThirdNumber;
	cout << "please enter the FirstNumber:" << endl;
	cin >> FirstNumber;
	cout << "please enter the SecondNumber:" << endl;
	cin >> SecondNumber;
	cout << "please enter the ThirdNumber:" << endl;
	cin >> ThirdNumber;
	cout << "FirstNumber:" << FirstNumber << " + " << endl;
	cout << "SecondNumber:" << SecondNumber << " + " << endl;
	cout << "thirdNumber:" << ThirdNumber << endl;
	cout << "------------------------" << endl;
	cout << "Total = " << FirstNumber + SecondNumber + ThirdNumber << endl;
	return 0;
}