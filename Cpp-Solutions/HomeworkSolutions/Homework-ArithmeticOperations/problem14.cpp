#include <iostream>
using namespace std;
int main() {
	short int FirstNumber, SecondNumber;
	cout << "Please Enter The FirstNumber:" << endl;
	cin >> FirstNumber;
	cout << "Please Enter The SecondNumber:" << endl;
	cin >> SecondNumber;
	cout << "\nFirstNumber = " << FirstNumber << "\t" << "SecondNumber = " << SecondNumber << endl;
	short int Temporary = FirstNumber;
	FirstNumber = SecondNumber;
	SecondNumber = Temporary;
	cout << "\nFirstNumber = " << FirstNumber << "\t" << "SecondNumber = " << SecondNumber << endl;
	return 0;
}