#include <iostream>
#include <string>
using namespace std;
void MyFunction1()
{
	cout << "This is First Procedure, it got executed :-)" << endl;
}
string MyFunction2()
{
	return "this is my first returning value Function, this is the value.";
}
int MyFunction3()
{
	int x = 70;
	int y = 50;
	return x + y;
	
}
int main()
{
	MyFunction1();
	cout << MyFunction2() << endl;
	int Result;
	Result = MyFunction3() + 60 - 50;
	cout << Result << endl;

	return 0;
}