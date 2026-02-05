#include <iostream>
using namespace std;
void ReadGrades(float Grades[3])
{
	cout << "Please Enter Number1:" << endl;
	cin >> Grades[0];
	cout << "Please Enter Number2:" << endl;
	cin >> Grades[1];
	cout << "Please enter Number3:" << endl;
	cin >> Grades[2];
}
float CalculateAverageGrades(float Grades[3])
{
	return (Grades[0] + Grades[1] + Grades[2]) / 3;
}
int main()
{
	float Grades[3];
	ReadGrades(Grades);
	cout << "The Average of grades is " << CalculateAverageGrades(Grades) << endl;
	return 0;
}