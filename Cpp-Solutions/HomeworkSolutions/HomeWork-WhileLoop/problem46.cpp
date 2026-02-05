#include <iostream>
using namespace std;
void PrintLettersFromAtoZ(int& Counter)
{
	Counter = 65;
	while (Counter <= 90)
	{
		cout << char(Counter) << endl;
		Counter = Counter + 1;
	}
}
int main()
{
	int Counter;
	PrintLettersFromAtoZ(Counter);
	return 0;
}