#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float Radius;
	cout << "Please Enter The Radius:" << endl;
	cin >> Radius;
	const float PI = 3.14;
	float CircleArea = PI * pow(Radius, 2);
	cout << "\nCircleArea = " << CircleArea << endl;
	cout << "\nCircleArea = " << ceil(CircleArea) << endl;
	return 0;
}