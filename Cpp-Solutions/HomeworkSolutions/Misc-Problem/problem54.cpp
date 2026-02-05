#include <iostream>
#include <string>
using namespace std;
int main() {
	string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the MyString is: " << MyString.length() << endl;
	cout << MyString[4] << endl;
	// will print E

	string s1 = "10", s2 = "20";
	string s3 = s1 + s2;
	cout << s3 << endl; // will print "1020"

	int sum = stoi(s1) + stoi(s2);
	cout << sum << endl; // will print 30
	return 0;
}