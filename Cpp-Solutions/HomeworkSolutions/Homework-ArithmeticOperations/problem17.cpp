#include <iostream>
using namespace std;
int main() {
	short int Base, Height;
	cout << "Please Enter The Base:" << endl;
	cin >> Base;
	cout << "Please Enter The Height:" << endl;
	cin >> Height;
	short int TriangleArea = Base / 2 * Height;
	cout << "\nTriangleArea = " << TriangleArea << endl;
	return 0;
}