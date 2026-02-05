#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number:" << endl;
	cin >> Number;
	return Number;
}
int ReadPower()
{
	int Number;
	cout << "Please Enter the Power:" << endl;
	cin >> Number;
	return Number;
}
int PowerOfM(int Number,int M)
{
	if (M == 0)
	{
		// any number powered to zero gives 1
		return 1;
	}
	int Power = 1;
	for (int Counter = 1; Counter <= M; Counter++)
	{
		Power = Power * Number;
	}
	return Power;
}
int main()
{
	cout << endl << "Result = " << PowerOfM(ReadNumber(), ReadPower()) << endl;
	return 0;
}
