#include <iostream>
#include <string>
using namespace std;
void Swap(int Number1, int Number2)
{
	int Temporary = Number1;
	Number1 = Number2;
	Number2 = Temporary;
	cout << "After Swap Inside Function Number1 = " << Number1 << ", Number2 = " << Number2 << endl;
}
int main()
{
	int Number1, Number2;
	cout << "Please Enter The Number1:" << endl;
	cin >> Number1;
	cout << "Please Enter The Number2:" << endl;
	cin >> Number2;
	cout << "Before Swap Number1 = " << Number1 << ", Number2 = " << Number2 << endl;
	Swap(Number1, Number2);
	cout << "After Swap inside main the function Number1 = " << Number1 << ", Number2 = " << Number2 << endl;
	return 0;
}