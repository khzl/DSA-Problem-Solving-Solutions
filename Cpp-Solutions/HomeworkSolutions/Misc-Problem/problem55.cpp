#include <iostream>
#include <string>
using namespace std;
int main() {
	string FullName;
	getline(cin, FullName);
	/*the getline function reads the entire line from the beginning of the line to the end of the line */
	//cin >> FullName;
	cout << FullName << endl;
	return 0;
}