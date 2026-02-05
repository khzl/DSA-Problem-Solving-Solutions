#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int& Number1, int& Number2)
{
	cout << "Please Enter Number1: " << endl;
	cin >> Number1;
	cout << "Please Enter Number2: " << endl;
	cin >> Number2;
}
void Swap(int& NumberOne, int& NumberTwo)
{
	int Temprory;
	Temprory = NumberOne;
	NumberOne = NumberTwo;
	NumberTwo = Temprory;
}
void PrintNumbers(int Number1, int Number2)
{
	cout << "\nNumber1 = " << Number1 << endl;
	cout << "Number2 = " << Number2 << endl;
}
int main()
{
	int Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintNumbers(Number1, Number2);
	Swap(Number1, Number2);
	PrintNumbers(Number1, Number2);
	return 0;
}
