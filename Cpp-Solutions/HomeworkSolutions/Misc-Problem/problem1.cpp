#include <iostream>
#include <string>
using namespace std;
int main()
{
	// String is an array of character
	string Name = "Khazaal Emad";
	cout << Name[0] << endl; // Print K
	cout << Name[5] << endl; // print a
	cout << Name[9] << endl; // Print m

	// Example of array of Integers 
	int Number[5] = { 2,55,7,88,99 };
	cout << Number[0] << endl; // Print 2
	cout << Number[1] << endl; // Print 55
	cout << Number[2] << endl; // Print 7
	cout << Number[3] << endl; // Print 88
	cout << Number[4] << endl; // Print 99
	cout << Number[0] + Number[2] << endl; // Print 9

	int Numbers[4];
	Numbers[0] = 10;
	Numbers[1] = 20;
	Numbers[2] = 30;
	Numbers[3] = 40;
	cout << Numbers[0] + Numbers[1] + Numbers[2] + Numbers[3] << endl;
	return 0;
}