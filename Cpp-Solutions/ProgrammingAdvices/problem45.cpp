#include <iostream>
#include <string>
using namespace std;
enum enumMonthOfYear { January = 1, February = 2, March = 3, April = 4, May = 5,
	                   June = 6, July = 7, August = 8, September = 9, October = 10,
	                   November = 11, December = 12 };
int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<From || Number>To);
	return Number;
}
enumMonthOfYear ReadMonthOfYear()
{
	return(enumMonthOfYear)ReadNumberInRange("Please Enter a Month", 1, 12);
}
string GetMonthOfYear(enumMonthOfYear Month)
{
	switch (Month)
	{
	case enumMonthOfYear::January:
		return "January";
		break;
	case enumMonthOfYear::February:
		return "February";
		break;
	case enumMonthOfYear::March:
		return "March";
		break;
	case enumMonthOfYear::April:
		return "April";
		break;
	case enumMonthOfYear::May:
		return "May";
		break;
	case enumMonthOfYear::June:
		return "June";
		break;
	case enumMonthOfYear::July:
		return "July";
		break;
	case enumMonthOfYear::August:
		return "August";
		break;
	case enumMonthOfYear::September:
		return "September";
		break;
	case enumMonthOfYear::October:
		return "October";
		break;
	case enumMonthOfYear::November:
		return "November";
		break;
	case enumMonthOfYear::December:
		return "December";
		break;
	default:
		return "Not a Valid Month";
		break;
	}
}
int main()
{
	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;
	return 0;
}
