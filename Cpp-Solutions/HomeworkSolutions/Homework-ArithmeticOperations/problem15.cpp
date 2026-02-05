#include <iostream>
using namespace std;
int main() {
	short int Length, Width;
	cout << "Please Enter The Length:" << endl;
	cin >> Length;
	cout << "Please Enter The Width:" << endl;
	cin >> Width;
	short int RectangleArea = Length * Width;
	cout << "\nRectangleArea = " << RectangleArea << endl;
	return 0;
}