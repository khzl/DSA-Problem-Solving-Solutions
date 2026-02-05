#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float& Base, float& Height)
{
	cout << "Please Enter Triangle Base:" << endl;
	cin >> Base;
	cout << "Please Enter Triangle Height:" << endl;
	cin >> Height;
}
float TriangleArea(float Base, float Height)
{
	float Area = (Base / 2) * Height;
	return Area;
}
void PrintResult(float Area)
{
	cout << "\nTriangle Area = " << Area << endl;
}
int main()
{
	float Base, Height;
	ReadNumbers(Base, Height);
	PrintResult(TriangleArea(Base, Height));
	return 0;
}
