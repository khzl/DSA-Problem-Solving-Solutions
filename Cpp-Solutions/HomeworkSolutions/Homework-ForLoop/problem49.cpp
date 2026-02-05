#include <iostream>
using namespace std;
void PrintLettersFromAtoZ()
{
	for (int Counter = 65; Counter <= 90; Counter = Counter + 1)
	{
		cout << char(Counter) << endl;
	}
}
int main()
{
	PrintLettersFromAtoZ();
	return 0;
}