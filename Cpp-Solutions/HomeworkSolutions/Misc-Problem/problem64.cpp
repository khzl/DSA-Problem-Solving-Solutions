#include <iostream>
using namespace std;
int main()
{
	int Array[10] = { 10,20,44,55,33,22,99,88,99,100 };
	int SearchFor = 20;
	for (int Counter = 0; Counter <= 10; Counter++)
	{
		cout << "We are at iteration " << Counter + 1 << endl;
		if (SearchFor == Array[Counter])
		{
			cout << endl << SearchFor << " Found at position " << Counter << endl << endl;
			break;
		}
	}
	return 0;
}