#include <iostream>
using namespace std;
void ReadNumbers(float& Height, float& Width)
{
	cout << "Please Enter Rectangle height:" << endl;
	cin >> Height;
	cout << "Please Enter Rectangle Width:" << endl;
	cin >> Width;
}
float CalculateRectangleArea(float Height, float Width)
{
	return Height * Width;
}
void PrintResult(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}
int main()
{
	float Height, Width;
	ReadNumbers(Height, Width);
	PrintResult(CalculateRectangleArea(Height, Width));
	return 0;
}
