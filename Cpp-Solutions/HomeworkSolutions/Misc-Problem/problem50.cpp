#include <iostream>
using namespace std;
enum enumWeekDay { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };
void ShowWeekDayMenue()
{
	cout << "****************************" << endl;
	cout << "         Week Days          " << endl;
	cout << "****************************" << endl;
	cout << "1: Sunday" << endl;
	cout << "2: Monday" << endl;
	cout << "3: Tuesday" << endl;
	cout << "4: Wednesday" << endl;
	cout << "5: Thursday" << endl;
	cout << "6: Friday" << endl;
	cout << "7: Saturday" << endl;
	cout << "***************************************" << endl;
	cout << "Please Enter The Number Of Day:" << endl;
}
enumWeekDay ReadWeekDay()
{
	enumWeekDay WeekDay;
	int weekday;
	cin >> weekday;
	return (enumWeekDay)weekday;
}
string GetWeekDayName(enumWeekDay WeekDay)
{
	switch (WeekDay)
	{
	case enumWeekDay::Sunday:
		return "Sunday";
		break;
	case enumWeekDay::Monday:
		return "Monday";
		break;
	case enumWeekDay::Tuesday:
		return "Tuesday";
		break;
	case enumWeekDay::Wednesday:
		return "Wednesday";
		break;
	case enumWeekDay::Thursday:
		return "Thursday";
		break;
	case enumWeekDay::Friday:
		return "Friday";
		break;
	case enumWeekDay::Saturday:
		return "Saturday";
		break;
	default:
		return "Not a week Day!\n";
		break;
	}
}
int main()
{
	ShowWeekDayMenue();
	cout << "Today is " << GetWeekDayName(ReadWeekDay()) << endl; // Neasted Function 
	return 0;
}