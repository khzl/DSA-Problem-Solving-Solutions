#include <iostream>
using namespace std;
int main() {
	float Base, Height;
	cout << "Please Enter The Height:" << endl;
	cin >> Height;
	cout << "Please Enter The Base:" << endl;
	cin >> Base;
	const float PI = 3.14;
	float Circle_Area_Inscribed_In_An_Isosceles_Triangle = (PI * Base * Base / 4) * ((2 * Height - Base) / (2 * Height + Base));
	cout << "\n Circle Area Inscribed In an Isosceles Triangle = " << Circle_Area_Inscribed_In_An_Isosceles_Triangle << endl;
	return 0;
}