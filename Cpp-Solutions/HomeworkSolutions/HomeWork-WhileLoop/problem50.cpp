#include <iostream>
using namespace std;
void ATMPIN3Times(int& FailedCounter, int& PIN)
{
	FailedCounter = 0;
	int CorrectPIN = 1234; 
	cout << "Please enter PIN:" << endl;
	cin >> PIN;
	while (FailedCounter < 3)
	{
		if (PIN == CorrectPIN)
		{
			int Balance = 7500;
			cout << "Your Balance is: " << Balance << endl;
			break;
		}
		else
		{
			cout << "Wrong PIN" << endl;
			FailedCounter = FailedCounter + 1;
			if (FailedCounter < 3)
			{
				cout << "Please Enter PIN:" << endl;
				cin >> PIN;
			}
		}
	}
	if (FailedCounter >= 3)
	{
		cout << "Card Locked" << endl;
	}
}
int main()
{
	int FailedCounter=0, PIN;
	ATMPIN3Times(FailedCounter, PIN);
	return 0;
}