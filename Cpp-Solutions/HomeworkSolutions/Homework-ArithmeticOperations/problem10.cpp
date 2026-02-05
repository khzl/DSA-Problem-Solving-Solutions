#include <iostream>
using namespace std;
int main() {
	float FirstMark, SecondMark, ThirdMark;
	cout << "Please Enter The FirstMark:" << endl;
	cin >> FirstMark;
	cout << "Please Enter The SecondMark:" << endl;
	cin >> SecondMark;
	cout << "Please Enter the ThirdMark:" << endl;
	cin >> ThirdMark;
	float Average = (FirstMark + SecondMark + ThirdMark) / 3;
	cout << "\nAverage = " << Average << endl;
	return 0;
}