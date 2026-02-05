#include <iostream>
using namespace std;
void ReadRadiusCircleArea(float &Radius)
{
	cout << "Please Enter The Radius:" << endl;
	cin >> Radius;
}
float CalculateCircleArea(float &Radius)
{
	const float PI = 3.14;
	float CircleArea = PI * (pow(Radius, 2));
	return CircleArea;
}
void PrintCircleArea(float Radius)
{
	cout << "Circle Area = " << CalculateCircleArea(Radius) << endl;
}
int main()
{
	float Radius;
	ReadRadiusCircleArea(Radius);
	PrintCircleArea(Radius);
	return 0;
}