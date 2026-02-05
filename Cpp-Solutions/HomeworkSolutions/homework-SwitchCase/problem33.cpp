#include <iostream>
using namespace std;
int main()
{
	int Number1, Number2;
	char Operator;
	cout << "Enter An Operation (+,-,*,/): " << endl;
	cin >> Operator;
	cout << "Enter Two Numbers:" << endl;
	cin >> Number1 >> Number2;
	switch (Operator)
	{
	case '+':
		cout << "Result= " << Number1 + Number2 << endl;
		break;
	case '-':
		cout << "Result= " << Number1 - Number2 << endl;
		break;
	case '*':
		cout << "Result= " << Number1 * Number2 << endl;
		break;
	case '/':
		cout << "Result= " << Number1 / Number2 << endl;
		break;
	default:
		cout << "Wrong Operation." << endl;
		break;
	}
	return 0;
}