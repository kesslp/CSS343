#pragma once
#include "Item.h"

class RockCD : public Item {
    friend ostream& operator<<(ostream& output, const RockCD& r);
    friend istream& operator>>(istream& input, RockCD& c);
public:
    RockCD();
    RockCD(string, string, int);
    bool operator<(const Item&);
    bool operator>(const Item&);
    bool operator==(const Item&);
    bool operator!=(const Item&);
    void display() const;
    ~RockCD();
};

