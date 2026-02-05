#include <iostream>
using namespace std;
float ReadCircumFerence()
{
	float Perimeter;
	cout << "Please Enter CircumFerence:" << endl;
	cin >> Perimeter;
	return Perimeter;
}
float CircleAreaByCircumFerence(float Perimeter)
{
	const float PI = 3.1415926535589793238;
	float Area = pow(Perimeter, 2) / (4 * PI);
	return Area;
}
void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}
int main()
{
	PrintResult(CircleAreaByCircumFerence(ReadCircumFerence()));
	return 0;
}
