#include <iostream>
using namespace std;
enum enumScreenColor{Red=1,Blue=2,Green=3,Yellow=4};
int main()
{
	cout << "**********************************\n";
	cout << "Please Choose the Number of Your Color?\n";
	cout << "(1) Red\n";
	cout << "(2) Blue\n";
	cout << "(3) Green\n";
	cout << "(4) Yellow\n";
	cout << "************************************\n\n";
	cout << "Your Choice? ";
	int Choice;
	enumScreenColor Color;
	cin >> Choice;
	Color = (enumScreenColor)Choice;
	if (Color == enumScreenColor::Red)
	{
		system("color 4F");
	}
	else if (Color == enumScreenColor::Blue)
	{
		system("color 1F");
	}
	else if (Color == enumScreenColor::Green)
	{
		system("color 2F");
	}
	else if (Color == enumScreenColor::Yellow)
	{
		system("color 6F");
	}
	else
	{
		system("color 4F");
	}
	return 0;
}