#include <iostream>
using namespace std;
int main() {
	float LengthOfTheSide;
	cout << "Please Enter Length Of The Side:" << endl;
	cin >> LengthOfTheSide;
	const float PI = 3.14;
	float AreaOfCircle = (PI * (LengthOfTheSide * LengthOfTheSide)) / 4;
	cout << "\nAreaOfCircle = " << AreaOfCircle << endl;
	return 0;
}