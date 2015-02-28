#pragma once
#include <iostream>
#include <string>
using namespace std;

class Item {
    
public:
    Item();
    Item(string, string, int);
    virtual bool operator<(const Item&) = 0;
    virtual bool operator>(const Item&) = 0;
    virtual bool operator==(const Item&) = 0;
    virtual bool operator!=(const Item&) = 0;
    virtual ~Item(); 
    virtual void display() const;

protected:
    string name;
    string title;
    int yearOfIssue;
};

