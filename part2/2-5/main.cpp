// method overriding and method overloading examples
#include <iostream>
#include "musician.h"

using namespace std;

int main() {
    Musician m1 = Musician("Eric Clapton");
    m1.setInstrument("guitar");
    m1.sayHello();
    m1.sayHello("KOR");
    return 0;
}
