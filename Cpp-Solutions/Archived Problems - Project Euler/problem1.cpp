#include <iostream>
using namespace std;
void FindMultiplesOf3or5(int& TotalSum)
{
	TotalSum = 0;
	for (int CurrentNumber = 1; CurrentNumber <= 1000; CurrentNumber++)
	{
		if (CurrentNumber % 3 == 0 || CurrentNumber % 5 == 0) 
		{
			TotalSum += CurrentNumber;
		}
	}
	cout << "TotalSum = " << TotalSum << endl;
}
int main()
{
	int TotalSum;
	FindMultiplesOf3or5(TotalSum);
	return 0;
}
