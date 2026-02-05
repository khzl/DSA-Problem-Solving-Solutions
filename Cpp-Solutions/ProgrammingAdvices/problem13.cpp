#include <iostream>
#include <string>
using namespace std;
void ReadNumber(int& Number1, int& Number2,int &Number3)
{
	cout << "please Enter Number1:" << endl;
	cin >> Number1;
	cout << "Please Enter Number2:" << endl;
	cin >> Number2;
	cout << "Please Enter Number3:" << endl;
	cin >> Number3;
}
int MaxOf3Numbers(int Number1, int Number2,int Number3)
{
	if (Number1 > Number2)
		if (Number1 > Number3)
			return Number1;
		else
			return Number3;
	else
		if (Number2 > Number3)
			return Number2;
		else 
		return Number3;
}
void printResults(int Max)
{
	cout << "\n the Maximum Number is: " << Max << endl;
}
int main()
{
	int Number1, Number2,Number3;
	ReadNumber(Number1, Number2,Number3);
	printResults(MaxOf3Numbers(Number1, Number2,Number3));
	return 0;
}
