#pragma once
#include <string>
#include <sstream>
using std::string;

using std::string;


class PostAddr
{
private:
    string zipcode;
    string city;
    string street;
    string room;
public:
    PostAddr(string zip_ = "000000", string city_ = "Default city", string street_ = "Default street", string room_ = "000");
    ~PostAddr() {};
    void ChangeZip(string& zip_);
    void ChangeCity(string& city_);
    void ChangeStreet(string& street_);
    void ChangeRoom(string& room_);
    void showaddr() const;

};

