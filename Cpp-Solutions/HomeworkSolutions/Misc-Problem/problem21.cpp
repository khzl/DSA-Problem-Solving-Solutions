#include <iostream>
#include <string> 
using namespace std;
void PersonalInformationCard()
{
	cout << "***************************\n";
	cout << "Name: Khazaal Emad Khazaal" << endl;
	cout << "Age: 23 Years" << endl;
	cout << "City: Mosul" << endl;
	cout << "Country: Iraq" << endl;
	cout << "***************************\n";
	cout << "\n\n";
}
void SquareStarsPrint()
{
	cout << "-----------------------------------\n";
	cout << "********" << endl;
	cout << "********" << endl;
	cout << "********" << endl;
	cout << "********" << endl;
	cout << "-------------------------------------\n";
}
void PrintAnAppreciationLetter()
{
	cout << "I love programming...!\n";
	cout << "I promise to be best developer ever !\n";
	cout << "I know it will take some time to practice, but I will achieve my goal.\n";
	cout << "Best Regards,\n";
	cout << "Khazaal\n";
}
void LetterPrint()
{
	cout << "------------------------------\n";
	cout << "*   *\n";
	cout << "*   *\n";
	cout << "*****\n";
	cout << "*   *\n";
	cout << "*   *\n";
	cout << "-------------------------------\n";
}
int main() {
	PersonalInformationCard();              // calling Function
	SquareStarsPrint();						// calling Function
	PrintAnAppreciationLetter();			// calling Function
	LetterPrint();							// calling Function
	return 0;
}