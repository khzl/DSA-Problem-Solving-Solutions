#include <iostream>
using namespace std;
int main()
{
	for (int Rows = 1; Rows <= 10; Rows++)
	{
		for (int Columns = 10; Columns >= Rows; Columns--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}