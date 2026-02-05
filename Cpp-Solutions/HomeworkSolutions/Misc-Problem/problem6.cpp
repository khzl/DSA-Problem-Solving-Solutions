#include <iostream>
#include <string>
using namespace std;
int main() {
	int Number1;
	double Number2 = 18.99;
	Number1 = Number2; // Implecit conversion from double to int.
	Number1 = (int)Number2;  // Explicit conversion 
	Number1 = int(Number2); // Ecplicit conversion 
	cout << Number1 << endl;
	string str = "123.456";
	// convert string to integer 
	int Number_int = stoi(str);
	// convert string to float 
	float Number_float = stof(str);
	// convert string to double 
	double Number_double = stod(str);
	cout << "Number_int = " << Number_int << endl;
	cout << "Number_float = " << Number_float << endl;
	cout << "Number_double = " << Number_double << endl;
	// convert Numbers to String 
	int Number3 = 123;
	double Number4 = 18.099;
	string st1, st2;
	st1 = to_string(Number3);
	st2 = to_string(Number4);
	cout << st1 << endl;
	cout << st2 << endl;

	return 0;
}