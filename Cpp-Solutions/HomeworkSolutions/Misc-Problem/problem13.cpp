#include <iostream>
using namespace std;
int main()
{
	float Grades[3];
	cout << "Please Enter Grade1:" << endl;
	cin >> Grades[0];
	cout << "Please Enter Grade2:" << endl;
	cin >> Grades[1];
	cout << "Please Enter Grade3:" << endl;
	cin >> Grades[2];
	float Average = (Grades[0] + Grades[1] + Grades[2]) / 3;
	cout << "the Average of Grades is " << Average << endl;
	return 0;
}