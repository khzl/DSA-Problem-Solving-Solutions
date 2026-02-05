#include <iostream>
using namespace std;
void ReadRectangleArea(int &Height, int &Width)
{
	cout << "Please Enter The Height:" << endl;
	cin >> Height;
	cout << "Please Enter The Width:" << endl;
	cin >> Width;
}
int CalculateRectangleArea(int &Height, int &Width)
{
	int RectangleArea = Height * Width;
	return RectangleArea;
}
void PrintRectangleArea(int Height, int Width)
{
	cout << "RectangleArea = " << CalculateRectangleArea(Height, Width) << endl;
}
int main()
{
	int Height, Width;
	ReadRectangleArea(Height, Width);
	PrintRectangleArea(Height, Width);
	return 0;
}