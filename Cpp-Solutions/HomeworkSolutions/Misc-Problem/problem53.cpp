#include <iostream>
using namespace std;
int main() {
	int A, B;
	cout << "Please Enter The First Number A ?" << endl;
	cin >> A;
	cout << "Please Enter The Second Number B ?" << endl;
	cin >> B;
	cout << "A = B is " << (A == B) << endl;
	cout << "A != B is " << (A != B) << endl;
	cout << "A > B is " << (A > B) << endl;
	cout << "A < B is " << (A < B) << endl;
	cout << "A >= B is " << (A >= B) << endl;
	cout << "A <= B is " << (A <= B) << endl;
	return 0;
}