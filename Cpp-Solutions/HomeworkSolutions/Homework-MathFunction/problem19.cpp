#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float Diameter;
	cout << "Please Enter The Diameter:" << endl;
	cin >> Diameter;
	const float PI = 3.14;
	float CircleAreaThroughDiameter = (PI * pow(Diameter,2)) / 4;
	cout << "\nCircleAreaThroughDiameter = " << CircleAreaThroughDiameter << endl;
	cout << "\nCircleAreaThroughDiameter = " << ceil(CircleAreaThroughDiameter) << endl;
	return 0;
}