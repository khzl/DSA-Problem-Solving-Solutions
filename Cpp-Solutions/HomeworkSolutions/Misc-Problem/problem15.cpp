#include <iostream>
using namespace std;
int main()
{
	int Sum = 0;
	int Number = 0;
	for (int Counter = 0; Counter <= 5; Counter++)
	{
		cout << "Enter a Number: ";
		cin >> Number;
		// condition continue
		if (Number > 50)
		{
			cout << "The Number is Greater than 50 and won`t be Calculate" << endl;
			continue;
		}
		Sum += Number;
	}
	cout << "Sum = " << Sum << endl;
	return 0;
}