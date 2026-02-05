#include <iostream>
using namespace std;
int main()
{
	for (int Counter = 1; Counter <= 5; Counter++)
	{
		// condition to continue
		if (Counter == 3)
		{
			continue;
		}
		cout << Counter << endl;
	}
	return 0;
}