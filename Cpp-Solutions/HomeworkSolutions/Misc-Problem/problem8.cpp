#include <iostream>
using namespace std;
void ReadArrayData(int Array1[100], int& length)
{
	cout << "How Many Numbers do you want to Enter ? 1 to 100\n";
	cin >> length;
	for (int Counter = 0; Counter <= length - 1; Counter++)
	{
		cout << "Please Enter Number " << Counter + 1 << endl;
		cin >> Array1[Counter];
	}
}
void PrintArrayData(int Array1[100], int Length)
{
	cout << "\nArray Data....\n";
	for (int Counter = 0; Counter <= Length - 1; Counter++)
	{
		cout << "Number [" << Counter + 1 << "] : " << Array1[Counter] << endl;
	}
}
int CalculateArraySum(int Array1[100], int Length)
{
	int Sum = 0;
	for (int Counter = 0; Counter <= Length - 1; Counter++)
	{
		Sum += Array1[Counter];
	}
	return Sum;
}
float CalculateArrayAverage(int Array1[100], int Length)
{
	return (float)CalculateArraySum(Array1, Length) / Length;
}
int main()
{
	int Array1[100], Length = 0;
	ReadArrayData(Array1, Length);
	PrintArrayData(Array1, Length);
	int Sum = CalculateArraySum(Array1, Length);
	cout << "\n********************************************\n";
	cout << "Sum = " << Sum << endl;
	cout << "Average = " << CalculateArrayAverage(Array1, Length) << endl;
	return 0;
}