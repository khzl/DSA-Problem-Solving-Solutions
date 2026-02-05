#include <iostream>
using namespace std;
int main()
{
	for (int Rows = 10; Rows >= 1; Rows--)
	{
		for (int Columns = 1; Columns <= Rows; Columns++)
		{
			cout << Columns << " ";
		}
		cout << "\n";
	}
	return 0;
}