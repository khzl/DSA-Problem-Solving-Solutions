#include<iostream>
using namespace std;
void ReadArrayData(int Number[3])
{
	cout << "Please Enter Number1:" << endl;
	cin >> Number[0];
	cout << "Please Enter Number2:" << endl;
	cin >> Number[1];
	cout << "Please Enter Number3:" << endl;
	cin >> Number[2];
}
void PrintArrayData(int Number[3])
{
	cout << "*****************************\n";
	cout << Number[0] << endl;
	cout << Number[1] << endl;
	cout << Number[2] << endl;
}
int main()
{
	int Number[3];
	ReadArrayData(Number);
	PrintArrayData(Number);
	return 0;
}