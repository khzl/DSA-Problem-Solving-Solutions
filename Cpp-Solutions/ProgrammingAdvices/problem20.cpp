#include <iostream>
using namespace std;
float ReadSquareSide()
{
	float Side;
	cout << "Please Enter Square Side:" << endl;
	cin >> Side;
	return Side;
}
float CircleAreaInscribedInSquare(float Side)
{
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(Side, 2)) / 4;
	return Area;
}
void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}
int main()
{
	PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
	return 0;
}
