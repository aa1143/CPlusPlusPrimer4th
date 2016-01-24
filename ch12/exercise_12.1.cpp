//
// Created by zhang zhixiang on 16/1/25.
//
#include <iostream>
using namespace std;

class Person{
private:
    string name;
    string address;
public:
    Person(const string &nam, const string &ad):
            name(nam), address(ad){}
    string getName() const {
        return name;
    }
    string getAddress() const  {
        return address;
    }
};