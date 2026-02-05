#include <iostream>
#include <cmath>
using namespace std;
void ReadNumber(float &Number)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
}
void  CalculatePowerNumber(float Number,float &NumberPower2, float &NumberPower3, float &NumberPower4)
{
	 NumberPower2 = Number*Number;
	 NumberPower3 = Number * Number * Number;
	 NumberPower4 = Number * Number * Number * Number;
}
void PrintNumber(float Number,float NumberPower2, float NumberPower3, float NumberPower4)
{
	cout << "PowerNumber2 = " << NumberPower2 << endl;
	cout << "PowerNumber3 = " << NumberPower3 << endl;
	cout << "PowerNumber4 = " << NumberPower4 << endl;
}
int main()
{
	float Number,NumberPower2,NumberPower3,NumberPower4;
	ReadNumber(Number);
	CalculatePowerNumber(Number, NumberPower2, NumberPower3, NumberPower4);
	PrintNumber(Number, NumberPower2, NumberPower3, NumberPower4);
	return 0;
}
