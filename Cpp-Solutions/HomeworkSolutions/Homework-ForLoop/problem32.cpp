#include <iostream>
using namespace std;
void ReadNumber(int& Number, int& RepeatNumber)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	cout << "Please Enter The RepeatNumber:" << endl;
	cin >> RepeatNumber;
	int Power = 1;
	for (int Counter = 1; Counter <= RepeatNumber; Counter = Counter + 1)
	{
		Power = Power * Number;
	}
	cout << "Power = " << Power << endl;
}
int main()
{
	int Number, RepeatNumber;
	ReadNumber(Number, RepeatNumber);
	return 0;
}