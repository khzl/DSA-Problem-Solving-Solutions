#include <iostream>
using namespace std;
void ReadMark(int &Mark)
{
	cout << "Please Enter The Mark:" << endl;
	cin >> Mark;
}
void PrintMark(int Mark)
{
	if (Mark >= 50)
	{
		cout << "Pass" << endl;
	}
	else
	{
		cout << "Fail" << endl;
	}
}
int main()
{
	int Mark;
	ReadMark(Mark);
	PrintMark(Mark);
	return 0;
}