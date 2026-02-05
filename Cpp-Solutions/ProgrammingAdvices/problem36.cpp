#include <iostream>
#include <string>
using namespace std;
enum enumOperationType
{
	Add = '+', Subtract = '-',
	Multiply = '*', Divide = '/'
};
float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}
enumOperationType ReadOperationType()
{
	char OperationType = '+';
	cout << "Please Enter Operation Type ( + , - , * , / ):\n";
	cin >> OperationType;
	return (enumOperationType)OperationType;
}
float Calculate(float Number1, float Number2, enumOperationType OperationType)
{
	switch (OperationType)
	{
	case enumOperationType::Add:
		return Number1 + Number2;
		break;
	case enumOperationType::Subtract:
		return Number1 - Number2;
		break;
	case enumOperationType::Multiply:
		return Number1 * Number2;
		break;
	case enumOperationType::Divide:
		return Number1 / Number2;
		break;
	default:
		return Number1 + Number2;
		break;
	}
}
int main()
{
	float Number1 = ReadNumber("Please Enter The First Number:");
	float Number2 = ReadNumber("Please Enter The Second Number:");
	enumOperationType OperationType = ReadOperationType();
	cout << endl << "Result = " << Calculate(Number1, Number2, OperationType) << endl;
	return 0; 
}
