#include <iostream>
using namespace std;
void ReadTriangleData(float& Height, float& LengthBase)
{
	cout << "Please Enter Triangle Height:" << endl;
	cin >> Height;
	cout << "Please Enter Triangle LengthBase:" << endl;
	cin >> LengthBase;
}
float CircleAreaByITriangle(float Height, float LengthBase)
{
	const float PI = 3.141592653589793238;
	float Area = PI * (pow(LengthBase, 2) / 4) * ((2 * Height - LengthBase) / (2 * Height + LengthBase));
	return Area;
}
void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}
int main()
{
	float Height, LengthBase;
	ReadTriangleData(Height, LengthBase);
	PrintResult(CircleAreaByITriangle(Height, LengthBase));
	return 0;
}
