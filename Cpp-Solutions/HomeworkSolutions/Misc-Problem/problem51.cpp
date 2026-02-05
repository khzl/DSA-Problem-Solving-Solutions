#include <iostream>
using namespace std;
enum enColor{Red,Green,Blue,Yellow};
enum enGendor{Male,Female};
enum enMaritalStatus{Single,Married};
struct stAddress
{
	string StreetName;
	string BuildingNo;
	string POBox;
	string ZipCode;
};
struct stContactInfo
{
	string Phone;
	string Email;
	stAddress Address;
};
struct stPerson
{
	string FirstName;
	string LastName;
	stContactInfo ContactInfo;
	enMaritalStatus MaritalStatues;
	enGendor Gendor;
	enColor FavourateColor;
};
int main() {
	stPerson Person1;
	Person1.FirstName = "Khazaal";
	Person1.LastName = "Emad";
	Person1.ContactInfo.Email = "xyz@xyz.com";
	Person1.ContactInfo.Phone = "+961548465857";
	Person1.ContactInfo.Address.POBox = "7777";
	Person1.ContactInfo.Address.ZipCode = "11194";
	Person1.ContactInfo.Address.StreetName = "Iraq";
	Person1.ContactInfo.Address.BuildingNo = "313";
	Person1.Gendor = enGendor::Male;
	Person1.MaritalStatues = enMaritalStatus::Single;
	Person1.FavourateColor = enColor::Red;
	cout << "*******************************\n";
	cout << Person1.FirstName << endl;
	cout << Person1.LastName << endl;
	cout << Person1.ContactInfo.Email << endl;
	cout << Person1.ContactInfo.Phone << endl;
	cout << Person1.ContactInfo.Address.POBox << endl;
	cout << Person1.ContactInfo.Address.ZipCode << endl;
	cout << Person1.ContactInfo.Address.StreetName << endl;
	cout << Person1.ContactInfo.Address.BuildingNo << endl;
	cout << Person1.Gendor << endl;
	cout << Person1.MaritalStatues << endl;
	cout << Person1.FavourateColor << endl;
	cout << "**********************************\n";
	return 0;
}