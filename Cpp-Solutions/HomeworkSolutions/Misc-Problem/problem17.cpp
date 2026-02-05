#include <iostream>
using namespace std;
enum MyFavoriteColor{Red,Green,Blue,Yellow};
enum MyGender{Male,Female};
enum MyStatus{Single,Married};
struct PersonalInformation
{
	string Name;
	short int Age;
	string City;
	string Country;
	int MonthlySalary;
};
int main() {
	MyFavoriteColor FavoriteColor;
	MyGender Gender;
	MyStatus Status;
	PersonalInformation Personal_Information;
	FavoriteColor = MyFavoriteColor::Red;
	Gender = MyGender::Male;
	Status = MyStatus::Single;
	cout << "Please Enter Your Name:" << endl;
	cin >> Personal_Information.Name;
	cout << "Please Enter Your Age:" << endl;
	cin >> Personal_Information.Age;
	cout << "Please Enter Your City:" << endl;
	cin >> Personal_Information.City;
	cout << "Please Enter Your Country:" << endl;
	cin >> Personal_Information.Country;
	cout << "Please Enter Your MonthlySalary:" << endl;
	cin >> Personal_Information.MonthlySalary;
	cout << "\n*****************************************\n";
	cout << "Name:" << Personal_Information.Name << endl;
	cout << "Age:" << Personal_Information.Age << endl;
	cout << "City:" << Personal_Information.City << endl;
	cout << "Country:" << Personal_Information.Country << endl;
	cout << "MonthlySalary:" << Personal_Information.MonthlySalary << endl;
	cout << "YearlySalary:" << Personal_Information.MonthlySalary * 12 << endl;
	cout << "Gender:" << Gender << endl;
	cout << "Married:" << Status << endl;
	cout << "FavoriteColor:" << FavoriteColor << endl;
	cout << "********************************************\n";
	return 0;
}