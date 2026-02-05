#include <iostream>
using namespace std;
void ReadCircleAreaThroughDiameter(float &Diameter)
{
	cout << "Please Enter The Diameter:" << endl;
	cin >> Diameter;
}
float CalculateCircleAreaThroughDiameter(float &Diameter)
{
	const float PI = 3.14;
	float CircleAreaThroughDiameter = (PI * pow(Diameter, 2)) / 4;
	return CircleAreaThroughDiameter;
}
void PrintCircleAreaThroughDiameter(float Diameter)
{
	cout << "Circle Area Through Diameter = " << CalculateCircleAreaThroughDiameter(Diameter) << endl;
}
int main()
{
	float Diameter;
	ReadCircleAreaThroughDiameter(Diameter);
	PrintCircleAreaThroughDiameter(Diameter);
	return 0;
}