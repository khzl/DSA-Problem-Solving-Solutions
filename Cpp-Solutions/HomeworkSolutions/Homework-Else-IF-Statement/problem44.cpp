#include <iostream>
using namespace std;
void ReadDays(int &Day)
{
	cout << "Please Enter The Day:" << endl;
	cin >> Day;
	if (Day == 1)
	{
		cout << "It`s SunDay." << endl;
	}
	else if (Day == 2)
	{
		cout << "It`s MonDay." << endl;
	}
	else if (Day == 3)
	{
		cout << "It`s TuesDay." << endl;
	}
	else if (Day == 4)
	{
		cout << "It`s WednesDay." << endl;
	}
	else if (Day == 5)
	{
		cout << "It`s ThursDay." << endl;
	}
	else if (Day == 6)
	{
		cout << "It`s FriDay." << endl;
	}
	else if (Day == 7)
	{
		cout << "It`s SaturDay." << endl;
	}
	else
	{
		cout << "Wrong Day." << endl;
	}
}
int main()
{
	int Day;
	ReadDays(Day);
	return 0;
}