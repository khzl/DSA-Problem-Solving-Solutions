#include <iostream>
#include <string>
using namespace std;
int main() {
	// convert string st1="43.22 to double , float , and int .
	string st1 = "43.22";
	int Number_int = stoi(st1);
	float Number_float = stof(st1);
	double Number_double = stod(st1);
	cout << Number_int << "\n" << Number_float << "\n" << Number_double << "\n*********************" << endl;

	// convert integer N1=20 to string .
	int N1 = 20;
	string st2;
	st2 = to_string(N1);
	cout << st2 << "\n";

	// convert double N2 = 33.5 to string .
	double N2 = 33.5;
	string st3;
	st3 = to_string(N2);
	cout << st3 << "\n****************************" << endl;

	// convert float N3 = 55.23 to string , and integer .
	float N3 = 55.23;
	string st4;
	st4 = to_string(N3);
	cout << st4 << endl;

	int String_To_Int = stoi(st4);
	cout << String_To_Int << endl;

	return 0;
}