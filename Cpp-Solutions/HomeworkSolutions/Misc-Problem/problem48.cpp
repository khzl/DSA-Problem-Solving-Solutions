#include <iostream>
using namespace std;
int main()
{
	for (int Rows = 1; Rows <= 10; Rows++)
	{
		cout << "Rows = " << Rows << endl;
		for (int Columns = 1; Columns <= 10; Columns++)
		{
			cout << Rows << " * " << Columns << " = " << Rows * Columns << "\n";
		}
		cout << "-------------------------------\n";
	}
	return 0;
}