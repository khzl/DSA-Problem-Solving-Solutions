#include <iostream>
using namespace std;
void ReadTotalSales(float& TotalSales)
{
	cout << "Please Enter TotalSales:" << endl;
	cin >> TotalSales;
	if (TotalSales >= 1000000)
	{
		float Percentage = 0.01;
		float TotalComission = Percentage * TotalSales;
		cout << "TotalPercentage:" << TotalComission << endl;
	}
	else if (TotalSales >= 500000)
	{
		float Percentage = 0.02;
		float TotalComission = Percentage * TotalSales;
		cout << "TotalPercentage:" << TotalComission << endl;
	}
	else if (TotalSales >= 100000)
	{
		float Percentage = 0.03;
		float TotalComission = Percentage * TotalSales;
		cout << "TotalPercentage:" << TotalComission << endl;
	}
	else if (TotalSales >= 50000)
	{
		float Percentage = 0.05;
		float TotalComission = Percentage * TotalSales;
		cout << "TotalPercentage:" << TotalComission << endl;
	}
	else
	{
		float Percentage = 0;
		float TotalComission = Percentage * TotalSales;
		cout << "TotalPercentage:" << TotalComission << endl;
	}
}
int main()
{
	float TotalSales;
	ReadTotalSales(TotalSales);
	return 0;
}