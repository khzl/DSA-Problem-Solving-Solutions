#include <iostream>
using namespace std;
int main()
{
	for (int RowCounterChar = 65; RowCounterChar <= 90; RowCounterChar++)
	{
		cout << "Letter:" << char(RowCounterChar) << endl;
		for (int ColumnCounterChar = 65; ColumnCounterChar <= 90; ColumnCounterChar++)
		{
			cout << char(RowCounterChar) << char(ColumnCounterChar) << "\n";
		}
		cout << "--------------------------------------\n";
	}
	return 0;
}