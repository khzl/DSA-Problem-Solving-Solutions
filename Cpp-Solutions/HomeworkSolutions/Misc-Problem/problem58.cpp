#include <iostream>
using namespace std;
int main()
{
	cout << "\n For loop \n";
	// for loop from 1 to 5
	for (int Number = 1; Number <= 5; Number++)
	{
		cout << Number << endl;
	}
	cout << "\n While loop \n";
	// While Loop from 1 to 5
	int Number = 1;
	while (Number <= 5)
	{
		cout << Number << endl;
		Number++;
	}
	return 0;
}