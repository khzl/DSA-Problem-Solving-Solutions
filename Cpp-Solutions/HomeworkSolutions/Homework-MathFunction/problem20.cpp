#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float LengthOfTheSide;
	cout << "Please Enter Length Of The Side:" << endl;
	cin >> LengthOfTheSide;
	const float PI = 3.14;
	float AreaOfCircle = (PI * pow(LengthOfTheSide,2)) / 4;
	cout << "\nAreaOfCircle = " << AreaOfCircle << endl;
	cout << "\nAreaOfCircle = " << ceil(AreaOfCircle) << endl;
	return 0;
}