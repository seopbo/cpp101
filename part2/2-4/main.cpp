// inheritance example
#include <iostream>
#include "musician.h"

using namespace std;

int main() {
    Musician m1 = Musician("Eric Clapton");
    m1.setInstrument("guitar");
    m1.sayHello();
    cout << m1.getInstrument() << endl;
    return 0;
}