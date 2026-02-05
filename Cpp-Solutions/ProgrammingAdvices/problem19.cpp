#include <iostream>
using namespace std;
float ReadDiameter()
{
	float Diameter;
	cout << "Please Enter Diameter:" << endl;
	cin >> Diameter;
	return Diameter;
}
float CircleAreaByDiameter(float Diameter)
{
	const float PI = 3.141592653589793238;
	float Area = (pow(Diameter, 2) * PI) / 4;
	return Area;
}
void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}
int main()
{
	PrintResult(CircleAreaByDiameter(ReadDiameter()));
	return 0;
}
