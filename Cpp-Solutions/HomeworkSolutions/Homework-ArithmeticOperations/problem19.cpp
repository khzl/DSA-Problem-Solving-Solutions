#include <iostream>
using namespace std;
int main() {
	float Diameter;
	cout << "Please Enter The Diameter:" << endl;
	cin >> Diameter;
	const float PI = 3.14;
	float CircleAreaThroughDiameter = (PI * Diameter * Diameter) / 4;
	cout << "\nCircleAreaThroughDiameter = " << CircleAreaThroughDiameter << endl;
	return 0;
}