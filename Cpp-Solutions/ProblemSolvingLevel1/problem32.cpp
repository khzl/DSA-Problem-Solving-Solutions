#include<iostream>
#include <cmath>
using namespace std;
void ReadNumberPower(float &Number, float &Power)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	cout << "Please Enter The Power:" << endl;
	cin >> Power;
}
void PrintNumberPower(float &Number, float &Power)
{
	cout << "Number^Power = " << pow(Number, Power) << endl;
}
int main()
{
	float Number, Power;
	ReadNumberPower(Number, Power);
	PrintNumberPower(Number, Power);
	return 0;
}