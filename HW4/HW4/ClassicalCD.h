#include "Item.h"
#pragma once

class ClassicalCD : public Item
{
    friend ostream& operator<<(ostream&, const ClassicalCD&);
    friend istream& operator>>(istream&, ClassicalCD&);

public:
    ClassicalCD();
    ClassicalCD(string, string, string, int);
    bool operator<(const Item&);
    bool operator>(const Item&);
    bool operator==(const Item&);
    bool operator!=(const Item&);
    void display() const;
    ~ClassicalCD();

private:
    string composer;
};

