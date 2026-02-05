#include <iostream>
using namespace std;
int main() {
	float CircumFerence_Length;
	cout << "Please Enter The CircumFerence Length:" << endl;
	cin >> CircumFerence_Length;
	const float PI = 3.14;
	float CircleAreaAlongTheCircumFerence = (CircumFerence_Length * CircumFerence_Length) / (4 * PI);
	cout << "\nCircle Area Along The CircumFerence = " << CircleAreaAlongTheCircumFerence << endl;
	return 0;
}