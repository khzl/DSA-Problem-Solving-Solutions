#include <iostream>
#include <string>
using namespace std;
enum enumDayOfWeek { SaturDay = 1, SunDay = 2, MonDay = 3, TuesDay = 4, WednesDay = 5, ThursDay = 6, FriDay = 7 };
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
enumDayOfWeek ReadDayOfWeek()
{
	return (enumDayOfWeek)ReadNumberInRange("Please Enter Number Day:",1,7);
}
string GetDayOfWeek(enumDayOfWeek Day)
{
	switch (Day)
	{
	case enumDayOfWeek::SaturDay:
		return "SaturDay";
		break;
	case enumDayOfWeek::SunDay:
		return "SunDay";
		break;
	case enumDayOfWeek::MonDay:
		return "MonDay";
		break;
	case enumDayOfWeek::TuesDay:
		return "TuesDay";
		break;
	case enumDayOfWeek::WednesDay:
		return "WednesDay";
		break;
	case enumDayOfWeek::ThursDay:
		return "ThursDay";
		break;
	case enumDayOfWeek::FriDay:
		return "FriDay";
		break;
	default:
		return "Not A valid Day";
		break;
	}
}
int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
	return 0;
}
