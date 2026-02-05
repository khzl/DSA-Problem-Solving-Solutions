#include <iostream>
using namespace std;
struct PersonalInformation
{
	string Name;
	int Age;
};
struct CountryOfResidence
{
	string City;
	string Country;
};
struct Salary
{
	int MonthlySalary;
	int YearlySalary;
};
struct MatrimonialInformation
{
	char Gender;
	bool IsMarried;
};
struct Address
{
	string Governorate;
	string District;
};
struct Content
{
	string PhoneNumber;
	string FaceBook;
	string LinkedIn;
};
int main() {
	PersonalInformation Personal_Information;
	CountryOfResidence Country_Of_Residence;
	Salary Salary;
	MatrimonialInformation Matrimonial_Information;
	Address Address;
	Content Content;
	cout << "Please Enter Your Name:" << endl;
	cin >> Personal_Information.Name;
	cout << "Please Enter Your Age:" << endl;
	cin >> Personal_Information.Age;
	cout << "Please Enter Your City:" << endl;
	cin >> Country_Of_Residence.City;
	cout << "Please Enter Your Country:" << endl;
	cin >> Country_Of_Residence.Country;
	cout << "Please Enter Your MonthlySalary:" << endl;
	cin >> Salary.MonthlySalary;
	cout << "Please Enter Your YearlySalary:" << endl;
	cin >> Salary.YearlySalary;
	cout << "Please Enter Your Gender:" << endl;
	cin >> Matrimonial_Information.Gender;
	cout << "Please Enter Your Married:" << endl;
	cin >> Matrimonial_Information.IsMarried;
	cout << "Please Enter Your Governorate:" << endl;
	cin >> Address.Governorate;
	cout << "Please Enter Your District:" << endl;
	cin >> Address.District;
	cout << "Please Enter Your PhoneNumber:" << endl;
	cin >> Content.PhoneNumber;
	cout << "Please Enter Your FaceBook:" << endl;
	cin >> Content.FaceBook;
	cout << "Please Enter Your LinkedIn:" << endl;
	cin >> Content.LinkedIn;
	cout << "\n************************************************\n";
	cout << "Name:" << Personal_Information.Name << endl;
	cout << "Age:" << Personal_Information.Age << endl;
	cout << "City:" << Country_Of_Residence.City << endl;
	cout << "Country:" << Country_Of_Residence.Country << endl;
	cout << "MonthlySalary:" << Salary.MonthlySalary << endl;
	cout << "YearlySalary:" << Salary.YearlySalary << endl;
	cout << "Gender:" << Matrimonial_Information.Gender << endl;
	cout << "Married:" << Matrimonial_Information.IsMarried << endl;
	cout << "Governorate:" << Address.Governorate << endl;
	cout << "District:" << Address.District << endl;
	cout << "PhoneNumber:" << Content.PhoneNumber << endl;
	cout << "FaceBook:" << Content.FaceBook << endl;
	cout << "LinkedIn:" << Content.LinkedIn << endl;
	cout << "******************************************************\n";
	return 0;
}