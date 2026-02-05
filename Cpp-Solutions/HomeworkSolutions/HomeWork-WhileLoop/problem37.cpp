#include <iostream>
using namespace std;
void SumUntill(int& Number)
{
	int Sum = 0;
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	while (Number != -99)
	{
		Sum = Sum + Number;
		cin >> Number;
	}
	cout << "Sum = " << Sum << endl;
}
int main()
{
	int Number;
	SumUntill(Number);
	return 0;
}