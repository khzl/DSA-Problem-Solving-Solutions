#include <iostream>
#include <string>
using namespace std;
void PrintLettersAtoZ()
{
	for (int Counter = 65; Counter <= 90; Counter++)
	{
		cout << char(Counter) << endl;
	}
}
int main()
{
	PrintLettersAtoZ();
	return 0;
}
