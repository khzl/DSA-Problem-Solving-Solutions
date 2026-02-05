#include <iostream>
using namespace std;
void PrintSumOddNumbersFrom1ToN(int& Number)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	int Counter = 1, Sum = 0; // Start Counter at 1
	while (Counter <= Number)
	{
		if (Counter % 2 != 0) 
		{
			Sum = Sum + Counter;
		}
		Counter = Counter + 1; // Increment Counter inside the loop
	}
	cout << "Sum = " << Sum << endl;
}
int main()
{
	int Number;
	PrintSumOddNumbersFrom1ToN(Number);
	return 0;
}