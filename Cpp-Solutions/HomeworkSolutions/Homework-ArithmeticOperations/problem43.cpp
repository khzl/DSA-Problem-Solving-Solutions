#include <iostream>
using namespace std;
int main() {
	int TotalSeconds;
	cout << "Please Enter The TotalSeconds: " << endl;
	cin >> TotalSeconds;
	int SecondsPerDay = 24 * 60 * 60;
	int SecondsPerHour = 60 * 60;
	int SecondsPerMinute = 60;
	int NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	int Remainder = TotalSeconds % SecondsPerDay;
	int NumberOfHours = floor(Remainder / SecondsPerHour);
	 Remainder = Remainder % SecondsPerHour;
	int NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	 Remainder = Remainder % SecondsPerMinute;
	int NumberOfSeconds = Remainder;
	cout << "\n" << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;
	return 0;
}