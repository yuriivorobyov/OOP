#include "postaddr.h"
#include <iostream>

using namespace std;

PostAddr::PostAddr(string zip_, string city_, string street_, string room_)
{
    zipcode = zip_;
    city = city_;
    street = street_;
    room = room_;
}

void PostAddr::ChangeZip(string& zip_)
{
    zipcode = zip_;
}
void PostAddr::ChangeCity(string& city_)
{
    city = city_;
}
void PostAddr::ChangeStreet(string& street_)
{
    street = street_;
}
void PostAddr::ChangeRoom(string& room_)
{
    room = room_;
}
void PostAddr::showaddr() const
{
    std::cout << zipcode << std::endl
        << city << std::endl
        << street << std::endl
        << room << std::endl;
}
