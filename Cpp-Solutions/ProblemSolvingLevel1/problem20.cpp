#include <iostream>
using namespace std;
void ReadLengthOfTheSideCircleAreainscribedInSquare(float &LengthOfTheSide)
{
	cout << "Please Enter The Length Of the Side:" << endl;
	cin >> LengthOfTheSide;
}
float CalculateCircleAreaInscribedInSquare(float &LengthOfTheSide)
{
	const float PI = 3.14;
	float CircleAreaInscribedInSquare = (PI * pow(LengthOfTheSide, 2)) / 4;
	return CircleAreaInscribedInSquare;
}
void PrintCircleAreaInscribedInSquare(float LengthOfTheSide)
{
	cout << "Circle Area Inscribed In Square = " << CalculateCircleAreaInscribedInSquare(LengthOfTheSide) << endl;
}
int main()
{
	float LengthOfTheSide;
	ReadLengthOfTheSideCircleAreainscribedInSquare(LengthOfTheSide);
	PrintCircleAreaInscribedInSquare(LengthOfTheSide);
	return 0;
	
}