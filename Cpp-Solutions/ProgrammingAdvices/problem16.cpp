#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float& Side, float& Diagonal)
{
	cout << "Please Enter Rectangle Side:" << endl;
	cin >> Side;
	cout << "Please Enter Rectangle Diagonal:" << endl;
	cin >> Diagonal;
}
float RectangleAreaBySideAndDiagonal(float Side, float Diagonal)
{
	float Area = Side * sqrt(pow(Diagonal, 2) - pow(Side, 2));
	return Area;
}
void PrintResult(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}
int main()
{
	float Side, Diagonal;
	ReadNumbers(Side, Diagonal);
	PrintResult(RectangleAreaBySideAndDiagonal(Side, Diagonal));
	return 0;
}
