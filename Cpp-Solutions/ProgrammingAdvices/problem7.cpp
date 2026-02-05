#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number: " << endl;
	cin >> Number;
	return Number;
}
float CalculateHalfNumber(int Number)
{
	return (float)Number / 2;
}
void PrintResults(int Number)
{
	string Result = "Half Of " + to_string(Number) + " is " + to_string(CalculateHalfNumber(Number));
	cout << endl << Result << endl;
}
int main()
{
	PrintResults(ReadNumber());
	return 0;
}
