#include <iostream>
#include <cmath>
using namespace std;
void ReadNumberDays(float &NumberOfDays, float &NumberOfHours, float &NumberOfMinutes, float &NumberOfSeconds) 
{
	cout << "Please Enter The NumberOfDays:" << endl;
	cin >> NumberOfDays;
	cout << "Please Enter The NumberOfHours:" << endl;
	cin >> NumberOfHours;
	cout << "Please Enter The NumberOfMinutes:" << endl;
	cin >> NumberOfMinutes;
	cout << "Please Enter The NumberOfSeconds:" << endl;
	cin >> NumberOfSeconds;
}
float CalculateTotalSeconds(float &NumberOfDays, float &NumberOfHours, float &NumberOfMinutes, float &NumberOfSeconds)
{
	float TotalSeconds = (NumberOfDays * 24 * pow(60, 2)) + (NumberOfHours * pow(60, 2)) + (NumberOfMinutes * 60) + NumberOfSeconds;
	return TotalSeconds;
}
void PrintTotalSeconds(float NumberOfDays, float NumberOfHours, float NumberOfMinutes, float NumberOfSeconds)
{
	cout << "\nTotalSeconds = " << CalculateTotalSeconds(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds) << endl;
}
int main()
{
	float NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
	ReadNumberDays(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds);
	PrintTotalSeconds(NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds);
	return 0;
}