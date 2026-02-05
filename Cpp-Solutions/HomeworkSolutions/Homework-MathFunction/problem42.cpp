#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
	cout << "Please Enter The NumberOfDays:" << endl;
	cin >> NumberOfDays;
	cout << "Please Enter The NumberOfHours:" << endl;
	cin >> NumberOfHours;
	cout << "Please Enter The NumberOfMinutes:" << endl;
	cin >> NumberOfMinutes;
	cout << "Please Enter The NumberOfSeconds:" << endl;
	cin >> NumberOfSeconds;
	float TotalSeconds = (NumberOfDays * 24 * pow(60, 2)) + (NumberOfHours * pow(60, 2)) + (NumberOfMinutes * 60) + NumberOfSeconds;
	cout << "\nTotalSeconds = " << TotalSeconds << " Seconds " << endl;
	cout << "\nTotalSeconds = " << round(TotalSeconds) << " Seconds " << endl;
	return 0;
}