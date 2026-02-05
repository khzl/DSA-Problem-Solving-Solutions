#include <iostream>
using namespace std;
int main()
{
	for (int Rows = 1; Rows <= 10; Rows++)
	{
		for (int Columns = 1; Columns <= Rows; Columns++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}