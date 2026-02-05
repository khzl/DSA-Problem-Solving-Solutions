#include <iostream>
#include <string>
using namespace std;
enum enumOddOrEven { Odd = 1, Even = 2 };
int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number:" << endl;
	cin >> Number;
	return Number;
}
enumOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enumOddOrEven::Odd;
	else
		return enumOddOrEven::Even;
}
int SumOddNumbersFrom1toN_UsingWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Odd Numbers using While Statement:\n";
	while (Counter < Number)
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enumOddOrEven::Odd)
		{
			Sum += Counter;
		}
	}
	return Sum;
}
int SumOddNumbersFrom1toN_UsingDoWhile(int Number)
{
	int Counter = 0;
	int Sum = 0;
	cout << "Sum Odd Numbers using Do...While Statement:\n";
	do
	{
		Counter++;
		if (CheckOddOrEven(Counter) == enumOddOrEven::Odd)
		{
			Sum += Counter;
		}
	} while (Counter < Number);
	return Sum;
}
int SumOddNumbersFrom1toN_UsingFor(int Number)
{
	int Sum = 0;
	cout << "Sum Odd Numbers Using For Statement:\n";
	for (int Counter = 1; Counter <= Number; Counter++)
	{
		if (CheckOddOrEven(Counter) == enumOddOrEven::Odd)
		{
			Sum += Counter;
		}
	}
	return Sum;
}
int main()
{
	int Number = ReadNumber();
	cout << SumOddNumbersFrom1toN_UsingWhile(Number) << endl;
	cout << SumOddNumbersFrom1toN_UsingDoWhile(Number) << endl;
	cout << SumOddNumbersFrom1toN_UsingFor(Number) << endl;
	return 0;
}
