#include <iostream>
using namespace std;
void ReadNumbersFrom1ToN(int &Number) // Pass By Reference
{
	cout << "Please Enter The Number" << endl;
	cin >> Number;
	int Counter = 0;
	while (Counter <= Number)
	{
		cout << Counter << endl;
		Counter = Counter + 1;
	}
}
int main()
{
	int Number;
	ReadNumbersFrom1ToN(Number);
	return 0;
}