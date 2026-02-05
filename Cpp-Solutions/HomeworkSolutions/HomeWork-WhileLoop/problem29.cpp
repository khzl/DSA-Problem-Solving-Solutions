#include <iostream>
using namespace std;
void PrintSumEvenNumbersFrom1ToN(int& Number)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	int Counter = 0, Sum = 0; // Start Counter at 0
	while (Counter <= Number)
	{
		if (Counter % 2 == 0) 
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
	PrintSumEvenNumbersFrom1ToN(Number);
	return 0;
}