#include <iostream>
using namespace std;
int main()
{
	for (int Counter = 0; Counter <= 10; Counter++)
	{
		if (Counter == 3) // condition for Break
		{
			break;
		}
		cout << Counter << endl;
	}
	return 0;
}