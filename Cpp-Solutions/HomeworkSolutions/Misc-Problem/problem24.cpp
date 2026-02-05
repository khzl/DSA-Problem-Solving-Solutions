#include <iostream>
using namespace std;
int main() {
	int True;
	cout << "Please Enter 1:" << endl;
	cin >> True;
	cout << "************************" << endl;
	cout << (12 >= 12) << endl;               //Result = 1 (True)
	cout << (12 > 7) << endl;				  //Result = 1 (True)
	cout << (8 < 6) << endl;				  //Result = 0 (False)
	cout << (8 == 8) << endl;				  //Result = 1 (True)
	cout << (12 <= 12) << endl;				  //Result = 1 (True)
	cout << (7 == 5) << endl;				  //Result = 0 (False)
	cout << !(12 >= 12) << endl;			  //Result = 0 (False)
	cout << !(12 < 7) << endl;				  //Result = 1 (True)
	cout << !(8 < 6) << endl;				  //Result = 1 (True)
	cout << !(8 == 8) << endl;				  //Result = 0 (False)
	cout << !(12 <= 12) << endl;			  //Result = 0 (False)
	cout << !(7 == 5) << endl;				  //Result = 1 (True)
	cout << (1 && 1) << endl;				  //Result = 1 (True)
	cout << (True && 0) << endl;			  //Result = 0 (Flase)
	cout << (0 || 1) << endl;				  //Result = 1 (True)
	cout << (0 || 0) << endl;				  //Result = 0 (False)
	cout << !(0) << endl;					  //Result = 1 (True) 
	cout << !(1 || 0) << endl;				  //Result = 0 (False)
	cout << ((7 == 7) && (7 > 5)) << endl;	  //Result = 1 (True)
	cout << ((7 == 7) && (7 < 5)) << endl;	  //Result = 0 (False)
	cout << ((7 == 7) || (7 < 5)) << endl;	  //Result = 1 (True)
	cout << ((7 < 7) || (7 > 5)) << endl;	  //Result = 1 (True)
	cout << (!(7 == 7) && (7 > 5)) << endl;	  //Result = 0 (False)
	cout << ((7 == 7) && !(7 < 5)) << endl;	  //Result = 1 (True)

	return 0;
}