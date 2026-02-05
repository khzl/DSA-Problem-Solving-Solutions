#include <iostream>
using namespace std;
int main()
{
	int Day;
	cout << "Please Enter Day:" << endl;
	cin >> Day;
	switch (Day)
	{
	case 1:
		cout << "It`s Sunday" << endl;
		break;
	case 2:
		cout << "It`s Monday" << endl;
		break;
	case 3:
		cout << "it`s Tuesday" << endl;
		break;
	case 4:
		cout << "It`s Wednesday" << endl;
		break;
	case 5:
		cout << "It`s Thursday" << endl;
		break;
	case 6:
		cout << "It`s Friday" << endl;
		break;
	case 7:
		cout << "It`s Saturday" << endl;
		break;
	default:
		cout << "Wrong Day" << endl;
		break;
	}
	return 0;
}