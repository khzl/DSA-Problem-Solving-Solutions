#include <iostream>
using namespace std;
void ReadRectangleAreaThroughDiagonalAndSideArea(float &Diagonal, float &SideArea)
{
	cout << "Please Enter The SideArea:" << endl;
	cin >> SideArea;
	cout << "Please Enter The Diagonal:" << endl;
	cin >> Diagonal;
	
}
float CalCulateRectangleAreaThroughDiagonalAndSideArea(float &Diagonal, float &SideArea)
{
	float RectangleAreaThroughDiagonalAndSideArea = SideArea * sqrt(pow(Diagonal,2)-pow(SideArea,2));
	return RectangleAreaThroughDiagonalAndSideArea;
}
void PrintRectangleAreaThroughDiagonalAndSideArea(float Diagonal, float SideArea)
{
	cout << "RectangleAreaThroughDiagonalAndSideArea = " << CalCulateRectangleAreaThroughDiagonalAndSideArea(Diagonal, SideArea) << endl;
}
int main()
{
	float Diagonal, SideArea;
	ReadRectangleAreaThroughDiagonalAndSideArea(Diagonal, SideArea);
	PrintRectangleAreaThroughDiagonalAndSideArea(Diagonal, SideArea);
	return 0;

}