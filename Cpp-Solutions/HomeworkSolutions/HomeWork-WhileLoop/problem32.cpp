#include <iostream>
using namespace std;
void PowerOfM(int &Number, int &ReapetNumber)
{
	int Power = 1;
	int Counter = 1;
	cout << "Please Enter the Number:" << endl;
	cin >> Number;
	cout << "Please Enter The ReapetNumber:" << endl;
	cin >> ReapetNumber;
	while (Counter <= ReapetNumber)
		{
			Power = Power * Number;
			Counter = Counter + 1;
		}
	cout << "Number^M = " << Power << endl;
}
int main()
{
	int Number, ReapetNumber;
	PowerOfM(Number, ReapetNumber);
	return 0;
}