#include <iostream>
using namespace std;
int main()
{
	for (int RowCounterChar = 65; RowCounterChar <= 70; RowCounterChar++)
	{
		for (int ColumnCounterChar = 65; ColumnCounterChar <= RowCounterChar; ColumnCounterChar++)
		{
			cout << char(ColumnCounterChar) << " ";
		}
		cout << "\n";
	}
	return 0;
}