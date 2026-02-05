#include <iostream>
using namespace std;
int main()
{
	for (int Rows = 1; Rows <= 10; Rows++)
	{
		for (int Columns = Rows; Columns <=10 ; Columns++)
		{
			cout << Columns << " ";
		}
		cout << "\n";
	}
	return 0;
}