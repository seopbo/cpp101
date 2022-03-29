// virtual example
#include <iostream>
#include "person.h"
#include "musician.h"
#include "baker.h"

using namespace std;

int main() {
    Person *p1 = new Musician("Jeff");
    p1->sayHello();
    // p1->playSomething();
    cout << endl;

    Person *p2 = new Person("Jane");
    p2->sayHello();
    cout << endl;

    p1 = new Baker("Yumi");
    p1->sayHello();

    delete p1;
    delete p2;

    return 0;
}
