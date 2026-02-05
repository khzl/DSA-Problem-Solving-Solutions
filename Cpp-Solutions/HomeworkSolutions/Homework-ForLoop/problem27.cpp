#include <iostream>
using namespace std;
void ReadNumber(int & Number)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	for (int Counter = Number + 1 ; Counter >= 1; Counter = Counter - 1)
	{
		cout << Counter << endl;
	}
}
int main()
{
	int Number;
	ReadNumber(Number);
	return 0;
}