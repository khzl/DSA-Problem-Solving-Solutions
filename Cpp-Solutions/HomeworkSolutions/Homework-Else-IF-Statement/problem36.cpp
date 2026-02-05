#include <iostream>
using namespace std;
void ReadNumbersAndOperator(int &Number1, int &Number2, char &OperatorType)
{
	cout << "Please Enter Number1:" << endl;
	cin >> Number1;
	cout << "Please Enter Number2:" << endl;
	cin >> Number2;
	cout << "Please Enter OperatorType:" << endl;
	cin >> OperatorType;
	if (OperatorType =='+')
	{
		cout << Number1 + Number2;
	}
	else if (OperatorType == '-')
	{
		cout << Number1 - Number2;
	}
	else if (OperatorType == '*')
	{
		cout << Number1 * Number2;
	}
	else if (OperatorType == '/')
	{
		cout << Number1 / Number2;
	}
	else
	{
		cout << "Wrong Operation." << endl;
	}
}
int main()
{
	int Number1, Number2;
	char OperatorType;
	ReadNumbersAndOperator(Number1, Number2, OperatorType);
	return 0;
}