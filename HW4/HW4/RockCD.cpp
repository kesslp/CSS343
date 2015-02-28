#include "RockCD.h"


RockCD::RockCD() : Item() {
}

RockCD::RockCD(string name, string title, int year) : Item(name, title, year) {

}

bool RockCD::operator<(const Item& item) {
    const RockCD& r = static_cast< const RockCD & >(item);
    if (name.compare(r.name) < 0) {
        return true;
    }
    else if (yearOfIssue < r.yearOfIssue) {
        return true;
    }
    else {
        return (title.compare(r.title) < 0);
    }
}

bool RockCD::operator>(const Item& item) {
    const RockCD& r = static_cast< const RockCD & >(item);
    if (name.compare(r.name) > 0) {
        return true;
    }
    else if (yearOfIssue > r.yearOfIssue) {
        return true;
    }
    else {
        return (title.compare(r.title) > 0);
    }
}

bool RockCD::operator==(const Item& item) {
    const RockCD& r = static_cast< const RockCD & >(item);
    return name == r.name && yearOfIssue == r.yearOfIssue &&
        title == r.title;
}

bool RockCD::operator!=(const Item& item) {
    const RockCD& r = static_cast< const RockCD & >(item);
    return (name != r.name || yearOfIssue != r.yearOfIssue ||
            title != r.title);
}

void RockCD::display() const {
    Item::display();
}

ostream& operator<<(ostream& output, const RockCD& r) {
    r.display();
    return output;
}

RockCD::~RockCD() {
}
