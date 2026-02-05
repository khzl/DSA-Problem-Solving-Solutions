#include <iostream>
using namespace std;
void ReadFactorialNumber(int& Number,int &Factorial)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	Factorial = 1;
	for (int Counter = Number; Counter >= 1; Counter--)
	{
		Factorial = Factorial * Counter;
	}
	cout << "The Factorial !" << Number << " is " << Factorial << endl;
}
int main()
{
	int Number, Factorial;
	ReadFactorialNumber(Number,Factorial);
	return 0;
}