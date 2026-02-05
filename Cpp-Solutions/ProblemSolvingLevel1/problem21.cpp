#include <iostream>
using namespace std;
void ReadCircumferenceLength(float &CircumferenceLength)
{
	cout << "Please Enter The Circumference Length:" << endl;
	cin >> CircumferenceLength;
}
float CalculateCircleAreaAlongTheCircumference(float &CircumferenceLength)
{
	const float PI = 3.14;
	float CircleAreaAlongTheCircumference = (pow(CircumferenceLength, 2)) / (4 * PI);
	return CircleAreaAlongTheCircumference;
}
void PrintCircleAreaAlongTheCircumference(float CircumferenceLength)
{
	cout << "Circle Area Along The Circumference = " << CalculateCircleAreaAlongTheCircumference(CircumferenceLength) << endl;
}
int main() {
	float CircumferenceLength;
	ReadCircumferenceLength(CircumferenceLength);
	PrintCircleAreaAlongTheCircumference(CircumferenceLength);
	return 0;
}