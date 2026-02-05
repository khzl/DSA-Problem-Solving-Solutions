#include <iostream>
using namespace std;
void ReadNumbers(int& Number1, int& Number2, int& Number3)
{
	cout << "Please Enter Your Number1:" << endl;
	cin >> Number1;
	cout << "Please Enter Your Number2:" << endl;
	cin >> Number2;
	cout << "Please Enter Your Number3:" << endl;
	cin >> Number3;
}
int SumOf3Numbers(int Number1, int Number2, int Number3)
{
	return Number1 + Number2 + Number3;
}
void PrintResults(int Total)
{
	cout << "\n The Total Sum Of Numbers is: " << Total << endl;
}
int main()
{
	int Number1, Number2, Number3;
	ReadNumbers(Number1, Number2, Number3);
	PrintResults(SumOf3Numbers(Number1, Number2, Number3));
	return 0;
}
