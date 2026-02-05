#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float CircumFerence_Length;
	cout << "Please Enter The CircumFerence Length:" << endl;
	cin >> CircumFerence_Length;
	const float PI = 3.14;
	float CircleAreaAlongTheCircumFerence = pow(CircumFerence_Length,2) / (4 * PI);
	cout << "\nCircle Area Along The CircumFerence = " << CircleAreaAlongTheCircumFerence << endl;
	cout << "\nCircle Area Along The CircumFerence = " << floor(CircleAreaAlongTheCircumFerence) << endl;
	return 0;
}