#include <iostream>
using namespace std;
int main() {
	short int Number;
	cout << "Please Enter the Number:" << endl;
	cin >> Number;
	short int HalfNumber = Number / 2;
	cout << "Half of " << Number << " is " << HalfNumber << endl;
	return 0;
}