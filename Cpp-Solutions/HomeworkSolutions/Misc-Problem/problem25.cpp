#include <iostream>
using namespace std;
int main() {
	cout << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;                        //Result = 1 (True)
	cout << !((5 > 6 && 7 == 7) || (1 || 0)) << endl;						//Result = 0 (False)
	cout << !((5 > 6 && 7 == 7) || !(1 || 0)) << endl;						//Result = 1 (True)
	cout << !((5 > 6 || 7 == 7) && !(1 || 0)) << endl;						//Result = 1 (True)
	cout << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && 1) << endl;		//Result = 0 (False)
	cout << ((5 > 6 && !(7 <= 8) && (8 > 1 || 4 <= 3)) || 1) << endl;		//Result = 1 (True)
	return 0;
}