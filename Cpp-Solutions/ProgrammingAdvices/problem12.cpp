#include <iostream>
#include <string>
using namespace std;
void ReadNumber(int& Number1, int& Number2)
{
	cout << "please Enter Number1:" << endl;
	cin >> Number1;
	cout << "Please Enter Number2:" << endl;
	cin >> Number2;
}
int MaxOf2Numbers(int Number1, int Number2)
{
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}
void printResults(int Max)
{
	cout << "\n the Maximum Number is: " << Max << endl;
}
int main()
{
	int Number1, Number2;
	ReadNumber(Number1, Number2);
	printResults(MaxOf2Numbers(Number1, Number2));
	return 0;
}
