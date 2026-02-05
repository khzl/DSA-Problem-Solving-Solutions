#include <iostream>
using namespace std;
void ReadGrades(int &Grade)
{
	cout << "Please Enter Grade:" << endl;
	cin >> Grade;
	if (Grade >= 90)
	{
		cout << "A" << endl;
	}
	else if (Grade >= 80)
	{
		cout << "B" << endl;
	}
	else if (Grade >= 70)
	{
		cout << "C" << endl;
	}
	else if (Grade >= 60)
	{
		cout << "D" << endl;
	}
	else if (Grade >= 50)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
}
int main()
{
	int Grade;
	ReadGrades(Grade);
	return 0;
}