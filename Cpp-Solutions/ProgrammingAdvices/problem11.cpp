#include <iostream>
#include <iostream>
using namespace std;
enum enumPassFail { Pass = 1, Fail = 2 };
void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please Enter Mark1:" << endl;
	cin >> Mark1;
	cout << "Please Enter Mark2:" << endl;
	cin >> Mark2;
	cout << "Please Enter Mark3:" << endl;
	cin >> Mark3;
}
int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1, Mark2, Mark3;
}
float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}
enumPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enumPassFail::Pass;
	else
		return enumPassFail::Fail;
}
void PrintResults(float Average)
{
	cout << "\n You Average is: " << Average << endl;
	if (CheckAverage(Average) == enumPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You Faild" << endl;
}
int main()
{
	int Mark1, Mark2, Mark3;
	ReadNumbers(Mark1, Mark2, Mark3);
	PrintResults(CalculateAverage(Mark1, Mark2, Mark3));
	return 0;
}
