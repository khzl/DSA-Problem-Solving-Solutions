#include <iostream>
using namespace std;
void ReadNumber(int & Number)
{
	cout << "Please Enter The Number:" << endl;
	cin >> Number;
	int Counter = 0, Sum = 0;
	for (int Counter = 0; Counter <= Number; Counter = Counter + 1)
	{
		if (Counter % 2 != 0)
		{
			Sum = Sum + Counter;
		}
	}
        cout << "Sum = " << Sum << endl;
}
int main()
{
	int Number;
	ReadNumber(Number);
	return 0;
}