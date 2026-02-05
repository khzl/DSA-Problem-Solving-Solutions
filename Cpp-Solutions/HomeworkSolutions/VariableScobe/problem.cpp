#include <iostream>
#include <string>
using namespace std;
int x = 300; // Global variable 
void MyFunction1()
{
	int x = 500; // variable 
	cout << "The Value of x inside function is: " << x << endl;
}
int main()
{
	int x = 10; // Local Variable
	cout << "The Local Value of x inside main is: " << x << endl;
	MyFunction1();
	// calling Global Variable 
	// ::VariableName
	// modifing Global variable ::VariableName
	::x++;
	::x = 600;
	cout << "The Global value of x is : " << ::x << endl;
}