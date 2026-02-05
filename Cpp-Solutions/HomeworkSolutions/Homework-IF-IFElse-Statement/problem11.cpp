#include <iostream>
using namespace std;
void ReadMarks(float &Mark1, float &Mark2, float &Mark3)
{
	cout << "Please Enter Mark1:" << endl;
	cin >> Mark1;
	cout << "Please Enter Mark2:" << endl;
	cin >> Mark2;
	cout << "Please Enter Mark3:" << endl;
	cin >> Mark3;
}
float Average(float Mark1,float Mark2,float Mark3)
{
	return (Mark1 + Mark2 + Mark3) / 3;
}
void PrintMarks(float Mark1, float Mark2, float Mark3)
{
	cout << "Average:" << Average(Mark1, Mark2, Mark3) << endl;
	if (Average(Mark1, Mark2, Mark3) >= 50)
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
	float Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintMarks(Mark1, Mark2, Mark3);
	return 0;
}