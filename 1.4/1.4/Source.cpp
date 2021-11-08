#include"PostAddr.h"
#include <iostream>
#include <string>
using namespace std;

string zip_, city_, street_, room_;
string zipcode;
string city;
string street;
string room;
int main()

{
	PostAddr a;

	a.~PostAddr();
	cout << "Zip:";
	cin >> zipcode;
	cout << "City:";
	cin >> city;
	cout << "Street:";
	cin >> street;
	cout << "Room:";
	cin >> room;
	cout << endl;

	a.ChangeZip(zip_);
	cout << "New Zip:";
	cin >> zipcode;
	a.ChangeCity(city_);
	cout << "New City:";
	cin >> city;
	a.ChangeStreet(street_);
	cout << "New Street:";
	cin >> street;
	a.ChangeRoom(room_);
	cout << "New Room:";
	cin >> room;
	a.showaddr();
	std::cout << zipcode << std::endl
		<< city << std::endl
		<< street << std::endl
		<< room << std::endl;


}

