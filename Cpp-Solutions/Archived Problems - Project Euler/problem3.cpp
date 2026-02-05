#include <iostream>
using namespace std;
void FindLargestPrimeFactor(long long &Number, long long &LargestPrimeFactor, long long &CurrentFactor)
{
	Number = 600851475143;
	LargestPrimeFactor = 1;
	CurrentFactor = 2;
	while (Number > 1)
	{
		if (Number % CurrentFactor == 0)
		{
			LargestPrimeFactor = CurrentFactor;
			Number /= CurrentFactor;
		}
		else
		{
			CurrentFactor++;
		}
	}
	cout << "The largest prime factor of 600851475143 is: " << LargestPrimeFactor << endl;
}
int main()
{
	long long  Number, LargestPrimeFactor, CurrentFactor;
	FindLargestPrimeFactor(Number, LargestPrimeFactor, CurrentFactor);
	return 0;
}
