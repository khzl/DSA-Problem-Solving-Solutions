#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float SideArea, Diameter;
	cout << "Please Enter the SideArea:" << endl;
	cin >> SideArea;
	cout << "Please Enter The Diameter:" << endl;
	cin >> Diameter;
	float RectangleAreaThroughDiagonalAndSideArea = SideArea * sqrt(pow(Diameter, Diameter) - pow(SideArea, SideArea));
	cout << "\nRectangleAreaThroughDiagonalAndSideArea = " << RectangleAreaThroughDiagonalAndSideArea << endl;
	return 0;
}