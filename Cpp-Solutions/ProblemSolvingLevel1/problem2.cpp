#include <iostream>
using namespace std;
void PrintName()
{
	string Name;
	cout << "Please Enter The Name:" << endl;
	cin >> Name;
	cout << "Name:" << Name << endl;
}
int main()
{
	PrintName();
	return 0;
}