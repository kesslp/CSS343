#include "Item.h"


Item::Item() {
    yearOfIssue = 0;
}

Item::Item(string name, string title, int yearOfIssue) {
    this->name = name;
    this->title = title;
    this->yearOfIssue = yearOfIssue;
}

Item::~Item() {
}

void Item::display() const {
    cout << name << " " << title << " " << yearOfIssue << endl;
}