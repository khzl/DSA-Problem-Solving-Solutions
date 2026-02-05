#include <iostream>
#include <cmath>
using namespace std;
void ReadTotalSeconds(int &TotalSeconds)
{
	cout << "Please Enter The TotalSeconds:" << endl;
	cin >> TotalSeconds;
}
void ExchangeTotalSecondsToDaysHoursMinutesSeconds(int &NumberOfDays, int &NumberOfHours, int &NumberOfMinutes, int &NumberOfSeconds,int TotalSeconds)
{
	int SecondsPerDay = 24 * pow(60, 2);
	int SecondsPerHour = pow(60, 2);
	int SecondsPerMinute = 60;
    NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	int Remainder = TotalSeconds % SecondsPerDay;
	NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;
	NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;
	NumberOfSeconds = Remainder;
}
void PrintClockNumber(int NumberOfDays, int NumberOfHours, int NumberOfMinutes, int NumberOfSeconds,int TotalSeconds)
{
	ExchangeTotalSecondsToDaysHoursMinutesSeconds(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds,TotalSeconds);
	cout << "\n" << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;
}
int main()
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds,TotalSeconds;
	ReadTotalSeconds(TotalSeconds);
	ExchangeTotalSecondsToDaysHoursMinutesSeconds(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, TotalSeconds);
	PrintClockNumber(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds, TotalSeconds);
	return 0;
}