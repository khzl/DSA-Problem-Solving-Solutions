#include <iostream>
using namespace std;
void EvenFibonacciNumbers(int &FirstTerm, int &SecondTerm, int &EvenSum)
{
	FirstTerm = 1;
	SecondTerm = 2;
	EvenSum = 0;
	while (SecondTerm <= 4000000)
	{
		if (SecondTerm % 2 == 0)
		{
			EvenSum += SecondTerm;
		}
		int NextTerm = FirstTerm + SecondTerm;
		FirstTerm = SecondTerm;
		SecondTerm = NextTerm;
	}
	cout << "The sum of even-valued terms in the Fibonacci sequence up to four million is: " << EvenSum << endl;
}
int main()
{
	int FirstTerm, SecondTerm, EvenSum;
	EvenFibonacciNumbers(FirstTerm, SecondTerm, EvenSum);
	return 0;
}
