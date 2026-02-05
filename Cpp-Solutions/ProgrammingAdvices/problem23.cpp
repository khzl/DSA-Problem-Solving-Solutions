#include <iostream>
using namespace std;
void ReadTriangleData(float& LengthFirstSide, float& LengthSecondSide, float& LengthThirdSide)
{
	cout << "Please Enter LengthFirstSide:" << endl;
	cin >> LengthFirstSide;
	cout << "Please Enter LengthSecondSide:" << endl;
	cin >> LengthSecondSide;
	cout << "Please Enter LengthThirdSide:" << endl;
	cin >> LengthThirdSide;
}
float CircleAreaByATriangle(float lengthFirstSide, float LengthSecondSide, float LengthThirdSide)
{
	const float PI = 3.141592653589793238;
	float Perimeter;
	Perimeter = (lengthFirstSide + LengthSecondSide + LengthThirdSide) / 2;
	float Triangle;
	Triangle = (lengthFirstSide * LengthSecondSide * LengthThirdSide) / (4 * sqrt(Perimeter * (Perimeter - lengthFirstSide) * (Perimeter - LengthSecondSide) * (Perimeter - LengthThirdSide)));
	float Area = PI * pow(Triangle, 2);
	return Area;
}
void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}
int main()
{
	float LengthFirstSide, LengthSecondSide, LengthThirdSide;
	ReadTriangleData(LengthFirstSide, LengthSecondSide, LengthThirdSide);
	PrintResult(CircleAreaByATriangle(LengthFirstSide, LengthSecondSide, LengthThirdSide));
	return 0;
}
