#include <iostream>
using namespace std;
void ReadNumber(int &Number1,int &Number2)
{
	cout << "Please Enter Number1:" << endl;
	cin >> Number1;
	cout << "Please Enter Number2:" << endl;
	cin >> Number2;
}
void SwapNumber(int &Number1,int &Number2)
{
	int Temporary = Number1;
	Number1 = Number2;
	Number2 = Temporary;
}
void PrintNumber(int Number1,int Number2)
{
	cout << "Number1 = " << Number1 << "\t" << "Number2 = " << Number2 << endl;
	SwapNumber(Number1,Number2);
	cout << "Number1 = " << Number1 << "\t" << "Number2 = " << Number2 << endl;
}
int main() 
{
	int Number1, Number2;
	ReadNumber(Number1, Number2);
	PrintNumber(Number1, Number2);
	return 0;
}