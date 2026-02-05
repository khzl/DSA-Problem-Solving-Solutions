#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number:" << endl;
	cin >> Number;
	return Number;
}
void PrintRangeFrom1toN_UsingWhile(int Number)
{
	int Counter = 0;
	cout << "Range Printed using While Statement:\n";
	while (Counter < Number)
	{
		Counter++;
		cout << Counter << endl;
	}
}
void PrintRangeFrom1toN_UsingDoWhile(int Number)
{
	int Counter = 0;
	cout << "Range Printed using Do...While Statement:\n";
	do
	{
		Counter++;
		cout << Counter << endl;
	} while (Counter < Number);
}
void PrintRangeFrom1toN_UsingFor(int Number)
{
	cout << "Range Printed Using For Statement:\n";
	for (int Counter = 1; Counter <= Number; Counter++)
	{
		cout << Counter << endl;
	}
}
int main()
{
	int Number = ReadNumber();
	PrintRangeFrom1toN_UsingWhile(Number);
	PrintRangeFrom1toN_UsingDoWhile(Number);
	PrintRangeFrom1toN_UsingFor(Number);
	return 0;
}
