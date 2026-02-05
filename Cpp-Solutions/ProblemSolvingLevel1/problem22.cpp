#include <iostream>
using namespace std;
void ReadCircleAreaInscribedInAnIsoscelesTriangle(float &Height, float &Base)
{
	cout << "Please Enter The Height:" << endl;
	cin >> Height;
	cout << "Please Enter The Base:" << endl;
	cin >> Base;
}
float CalculateCircleAreaInscribedInAnIsoscelesTriangle(float &Height, float &Base)
{
	const float PI = 3.14;
	float CircleArea = (PI * pow(Base, 2) / 4) * ((2 * Height - Base) / (2 * Height + Base));
	return CircleArea;
}
void PrintCircleAreaInscribedInAnIsoscelesTriangle(float Height, float Base)
{
	cout << "CircleAreaInscribedInAnIsoscelesTriangle = " << CalculateCircleAreaInscribedInAnIsoscelesTriangle(Height, Base) << endl;
}
int main()
{
	float Height, Base;
	ReadCircleAreaInscribedInAnIsoscelesTriangle(Height, Base);
	PrintCircleAreaInscribedInAnIsoscelesTriangle(Height, Base);
	return 0;
}