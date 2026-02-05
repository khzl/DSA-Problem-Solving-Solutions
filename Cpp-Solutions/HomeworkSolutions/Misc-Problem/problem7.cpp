#include <iostream>
using namespace std;
int ReadIntNumberInRangeUsingWhile(int From, int To)
{
	int Number;
	cout << "Please Enter a Number Between " << From << " And " << To << endl;
	cin >> Number;
	while (Number<From || Number>To)
	{
		cout << "Wrong Number.";
		cout << "Please Enter a Number Between " << From << " And " << To << endl;
		cin >> Number;
	}
	return Number;
}
int ReadIntNumberInRangeUsingDoWhile(int From, int To)
{
	int Number;
	do
	{
		cout << "Please Enter A Number Between " << From << " And " << To << endl;
		cin >> Number;
	} while (Number<From || Number>To);
	return Number;
}
int main()
{
	cout << "\n The Number You Entered Is " << ReadIntNumberInRangeUsingWhile(1, 10) << endl;
	cout << "\n The Number You Entered Is " << ReadIntNumberInRangeUsingDoWhile(20, 40) << endl;
	return 0;
}