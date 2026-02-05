#include <iostream>
using namespace std;
int main() {
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
	cout << "Please Enter The NumberOfDays:" << endl;
	cin >> NumberOfDays;
	cout << "Please Enter The NumberOfHours:" << endl;
	cin >> NumberOfHours;
	cout << "Please Enter The NumberOfMinutes:" << endl;
	cin >> NumberOfMinutes;
	cout << "Please Enter The NumberOfSeconds:" << endl;
	cin >> NumberOfSeconds;
	int TotalSeconds = (NumberOfDays * 24 * 60 * 60) + (NumberOfHours * 60 * 60) + (NumberOfMinutes * 60) + NumberOfSeconds;
	cout << "\nTotalSeconds = " << TotalSeconds << " Seconds " << endl;
	return 0;
}