#include <iostream>
#include <string>
using namespace std;
enum enumNumberType { Odd = 1, Even = 2 };
int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number:" << endl;
	cin >> Number;
	return Number;
}
enumNumberType CheckNumberType(int Number)
{
	int Result = Number % 2;
	if (Result == 0)
		return enumNumberType::Even;
	else
		return enumNumberType::Odd;
}
void PrintNumberType(enumNumberType NumberType)
{
	if (NumberType == enumNumberType::Even)
		cout << "\n number is Even. \n";
	else
		cout << "\n Number is Odd. \n";
}
int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}
