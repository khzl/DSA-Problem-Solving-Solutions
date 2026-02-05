#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number:" << endl;
	cin >> Number;
	return Number;
}
void PowerOf2_3_4(int Number)
{
	int Power2, Power3, Power4;
	Power2 = Number * Number;
	Power3 = Number * Number * Number;
	Power4 = Number * Number * Number * Number;
	cout << Power2 << "  " << Power3 << "  " << Power4 << endl;
}
int main()
{
	PowerOf2_3_4(ReadNumber());
	return 0;
}
