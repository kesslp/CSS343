#include <iostream>
#include "Item.h"
#include "RockCD.h"

using namespace std;

int main() {
    RockCD myCD("Metallica", "Master of Puppets", 1986);
    cout << myCD << endl;

    return 0;
}