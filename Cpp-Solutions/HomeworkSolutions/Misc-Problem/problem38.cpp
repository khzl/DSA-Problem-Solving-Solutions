#include <iostream>
#include <string>
using namespace std;
int Global1 = 300; // Global variable 
int Global2 = 600; // Global variable 
void MyFunction1()
{
	int x = 500; // variable 
	x++;
	x = x + 8;
	x = x - 4;
	cout << "The Value of x inside function is: " << x << endl;
}
int main()
{
	int x = 10; // Local Variable
	x++;
	x = x + 5;
	cout << "The Local Value of x inside main is: " << x << endl;
	MyFunction1();
	// calling Global Variable 
	// ::VariableName
	// modifing Global variable ::VariableName
	::Global1++;
	::Global1 = 600;
	cout << "The Global value of x is : " << ::Global1 << endl;
	// calling Global variable 
	// modifing Global variable 
	::Global2++;
	::Global2 = 800;
	cout << "The Global value od y is : " << ::Global2 << endl;
}