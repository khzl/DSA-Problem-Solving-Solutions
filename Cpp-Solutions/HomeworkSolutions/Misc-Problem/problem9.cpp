#include <iostream>
#include <string>
using namespace std;
void MyFunction1(int &Number1) // reference & <-- Adress memory 
{
	Number1 = 7000;
	cout << "Number inside function became = " << Number1 << endl;
}
int main()
{
	int Number1;
	Number1 = 1000;
	MyFunction1(Number1);
	cout << "Number after calling the function became = " << Number1 << endl;
	cout << &Number1 << endl;
	return 0;
}