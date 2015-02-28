#include "ClassicalCD.h"

ClassicalCD::ClassicalCD() : Item(){
}

ClassicalCD::ClassicalCD(string name, string title, string composer, int yearOfIssue) : Item(name, title, yearOfIssue) {
    this->composer = composer;
}

bool ClassicalCD::operator<(const Item&) {
}

bool ClassicalCD::operator>(const Item&);
bool ClassicalCD::operator==(const Item&);
bool ClassicalCD::operator!=(const Item&);
void ClassicalCD::display() const;
ClassicalCD::~ClassicalCD(){
}
