#include <iostream>
using namespace std;
enum enumPassFail { Pass = 1, Fail = 2 };
int ReadMark()
{
	int Mark;
	cout << "Please Enter Your Mark: " << endl;
	cin >> Mark;
	return Mark;
}
enumPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enumPassFail::Pass;
	else
		return enumPassFail::Fail;
}
void PrintResults(int Mark)
{
	if (CheckMark(Mark) == enumPassFail::Pass)
		cout << "\n You passed" << endl;
	else
		cout << "\n You Faild" << endl;
}
int main()
{
	PrintResults(ReadMark());
	return 0;
}
