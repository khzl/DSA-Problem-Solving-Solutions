#include <iostream>
#include <string>
using namespace std;
enum enumPrimeNotPrime { Prime = 1, NotPrime = 2 };
float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
enumPrimeNotPrime CheckPrime(int Number)
{
	int Modeles = round(Number / 2);
	for (int Counter = 2; Counter <= Modeles; Counter++)
	{
		if (Number % Counter == 0)
			return enumPrimeNotPrime::NotPrime;
	}
	return enumPrimeNotPrime::Prime;
}
void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enumPrimeNotPrime::Prime:
		cout << "The Number is Prime\n";
		break;
	case enumPrimeNotPrime::NotPrime:
		cout << "The Number is Not Prime\n";
		break;
	default:
		break;
	}
}
int main()
{
	PrintNumberType(ReadPositiveNumber("Please Enter a Positive Number:"));
	return 0;
}
