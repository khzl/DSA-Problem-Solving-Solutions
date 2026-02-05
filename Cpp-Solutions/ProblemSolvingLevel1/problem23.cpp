#include <iostream>
#include <cmath>
using namespace std;
void ReadCircleAreaCircleDescribedAroundAnArbitraryTriangle(float &LengthOfTheFirstSide, float &LengthOfTheSecondSide, float &LengthOfTheThirdSide)
{
	cout << "Please Enter The Length of the Firt Side:" << endl;
	cin >> LengthOfTheFirstSide;
	cout << "Please Enter The Length Of The Second Side:" << endl;
	cin >> LengthOfTheSecondSide;
	cout << "Please Enter The Length Of The Third Side:" << endl;
	cin >> LengthOfTheThirdSide;
}
float CalculateCircleAreaCircleDescribedAroundAnArbitraryTriangle(float &LengthOfTheFirstSide, float &LengthOfTheSecondSide, float &LengthOfTheThirdSide)
{
	const float PI = 3.14;
	float PerimeterOfTheTriangle = (LengthOfTheFirstSide + LengthOfTheSecondSide + LengthOfTheThirdSide) / 2;
	float Triangle = (LengthOfTheFirstSide * LengthOfTheSecondSide * LengthOfTheThirdSide) / (4 * sqrt(PerimeterOfTheTriangle * (PerimeterOfTheTriangle - LengthOfTheFirstSide) * (PerimeterOfTheTriangle - LengthOfTheSecondSide) * (PerimeterOfTheTriangle - LengthOfTheThirdSide)));
	Triangle = Triangle * Triangle;
	float CircleAreaCircleDescribedAroundAnArbitraryTriangle = PI * Triangle;
	return CircleAreaCircleDescribedAroundAnArbitraryTriangle;
}
void PrintCircleAreaCircleDescribedAroundAnArbitraryTriangle(float LengthOfTheFirstSide, float LengthOfTheSecondSide, float LengthOfTheThirdSide) 
{
	cout << "CircleAreaCircleDescribedAroundAnArbitraryTriangle = " << CalculateCircleAreaCircleDescribedAroundAnArbitraryTriangle(LengthOfTheFirstSide, LengthOfTheSecondSide, LengthOfTheThirdSide) << endl;
}
int main()
{
	float LengthOfTheFirstSide, LengthOfTheSecondSide, LengthOfTheThirdSide;
	ReadCircleAreaCircleDescribedAroundAnArbitraryTriangle(LengthOfTheFirstSide, LengthOfTheSecondSide, LengthOfTheThirdSide);
	PrintCircleAreaCircleDescribedAroundAnArbitraryTriangle(LengthOfTheFirstSide, LengthOfTheSecondSide, LengthOfTheThirdSide);
	return 0;
}