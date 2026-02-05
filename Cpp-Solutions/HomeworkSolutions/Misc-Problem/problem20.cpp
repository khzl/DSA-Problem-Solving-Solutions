#include <iostream>
#include <string>
using namespace std;
void MyProcedureSum()
{
	int Number1, Number2;
	cout << "Please Enter Number1:" << endl;
	cin >> Number1;
	cout << "Please Enter Number2:" << endl;
	cin >> Number2;
	cout << "***********************************\n";
	cout << Number1 + Number2 << endl;
}
int MySumFunction()
{
	int Number1, Number2;
	cout << "Pleae Enter Number1:" << endl;
	cin >> Number1;
	cout << "Please Enter Number2:" << endl;
	cin >> Number2;
	cout << "***********************************\n";
	return Number1 + Number2;
}
int main()
{
	MyProcedureSum(); // Procedure it is called only inside the main function 
	cout << MySumFunction() << endl; // the function is called through the cout print function 
	return 0;
}