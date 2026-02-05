#include <iostream>
using namespace std;
struct StAddress
{
	string Street1;
	string PoBox;
};
struct StOwner
{
	string FullName;
	string Phone;
	StAddress Address;
};
struct Car 
{
	string Brand;
	string Model;
	int Year;
	StOwner Owner;
};
int main() {
	// struct Car is Datatype that type data type User - defined 
	Car MyCar1,MyCar2,x;
	MyCar1.Brand = "BMW";
	MyCar1.Model = "X5";
	MyCar1.Year = 2001;
	MyCar2.Brand = "Ford";
	MyCar2.Model = "Musting";
	MyCar2.Year = 2022;
	x.Brand = "Toyta";
	x.Model = "marsdes";
	x.Year = 2023;
	MyCar1.Owner.FullName = "khazaal";
	MyCar1.Owner.Phone = "07701347855";
	MyCar1.Owner.Address.Street1 = "Mosul";
	MyCar1.Owner.Address.PoBox = "35456";
	cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << "\n";
	cout << MyCar2.Brand << " " << MyCar2.Model << " " << MyCar2.Year << "\n";
	cout << x.Brand << " " << x.Model << " " << x.Year << "\n";
	cout << MyCar1.Owner.FullName << " " << MyCar1.Owner.Phone << "\n";
	cout << MyCar1.Owner.Address.Street1 << " " << MyCar1.Owner.Address.PoBox << "\n";
}