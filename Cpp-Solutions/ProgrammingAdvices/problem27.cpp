#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number:" << endl;
	cin >> Number;
	return Number;
}
void PrintRangeFromNto1_UsingWhile(int Number)
{
	int Counter = Number + 1;
	cout << "Range Printed using While Statement:\n";
	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;
	}
}
void PrintRangeFromNto1_UsingDoWhile(int Number)
{
	int Counter = Number + 1;
	cout << "Range Printed using Do...While Statement:\n";
	do
	{
		Counter--;
		cout << Counter << endl;
	} while (Counter > 1);
}
void PrintRangeFromNto1_UsingFor(int Number)
{
	cout << "Range Printed Using For Statement:\n";
	for (int Counter = Number; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}
int main()
{
	int Number = ReadNumber();
	PrintRangeFromNto1_UsingWhile(Number);
	PrintRangeFromNto1_UsingDoWhile(Number);
	PrintRangeFromNto1_UsingFor(Number);
	return 0;
}
