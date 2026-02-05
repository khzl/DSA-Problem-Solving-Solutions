#include <iostream>
using namespace std;
void FactorialNumber(int& Number)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	while (Number <= 0)
	{
		cout << "Factorial Must be Positive Number. Please Enter a Positive Number:" << endl;
		cin >> Number; // Read the value again
	}
	int Counter = Number;
	int Factorial = 1;
	while (Counter >= 1)
	{
		Factorial = Factorial * Counter;
		Counter = Counter - 1;
	}
	cout << "The Factorial of !" << Number << " is " << Factorial << endl;
}
int main()
{
	int Number;
	FactorialNumber(Number);
	return 0;
}