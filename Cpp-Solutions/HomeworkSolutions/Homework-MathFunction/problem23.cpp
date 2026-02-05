#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float LengthOfTheFirstSide, LengthOfTheSecondSide, LengthOfTheThirdSide;
	cout << "Please Enter The Length Of The First Side: " << endl;
	cin >> LengthOfTheFirstSide;
	cout << "Please Enter The length Of The Second Side: " << endl;
	cin >> LengthOfTheSecondSide;
	cout << "Please Enter The Length Of The Third Side: " << endl;
	cin >> LengthOfTheThirdSide;
	const float PI = 3.14;
	float PerimeterOfTheTriangle = (LengthOfTheFirstSide + LengthOfTheSecondSide + LengthOfTheThirdSide) / 2;
	float Triangle = (LengthOfTheFirstSide * LengthOfTheSecondSide * LengthOfTheThirdSide) / (4 * sqrt(PerimeterOfTheTriangle * (PerimeterOfTheTriangle - LengthOfTheFirstSide) * (PerimeterOfTheTriangle - LengthOfTheSecondSide) * (PerimeterOfTheTriangle - LengthOfTheThirdSide)));
	Triangle = Triangle * Triangle; 
	float CircleAreaCircleDescribedAroundAnArbitraryTriangle = PI * Triangle;
	cout << "\nCircleAreaCircleDescribedAroundAnArbitraryTriangle = " << CircleAreaCircleDescribedAroundAnArbitraryTriangle << endl;
	cout << "\nCircleAreaCircleDescribedAroundAnArbitraryTriangle = " << round(CircleAreaCircleDescribedAroundAnArbitraryTriangle) << endl;
	return 0;
}