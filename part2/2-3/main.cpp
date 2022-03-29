// encapsulation example
#include "person.h"
#include <iostream>

int main() {
    Person p1 = Person("Eric Clapton");
    p1.sayHello();
    cout << p1.getName() << endl;
    return 0;
}