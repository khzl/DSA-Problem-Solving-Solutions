#include <iostream>
#include <string>
using namespace std;
float ReadRadius()
{
	float Radius;
	cout << "Please Enter Radius:" << endl;
	cin >> Radius;
	return Radius;
}
float CircleArea(float Radius)
{
	const float PI = 3.141592653589793238;
	float Area = pow(Radius, 2) * PI;
	return Area;
}
void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}
int main()
{
	PrintResult(CircleArea(ReadRadius()));
	return 0;
}
