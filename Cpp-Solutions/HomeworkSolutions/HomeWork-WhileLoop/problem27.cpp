#include <iostream>
using namespace std;
void ReadNumberFromNTo1(int& Number)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	int Counter = Number + 1;
	while (Counter >= 1)
	{
		cout << Counter << endl;
		Counter = Counter - 1;
	}
}
int main()
{
	int Number;
	ReadNumberFromNTo1(Number);
	return 0;
}