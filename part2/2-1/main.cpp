// class example
#include <iostream>
#include "person.h"

int main() {
    Person p1;
    p1.m_name = "Eric Clapton";
    cout << p1.m_name << endl;
    p1.sayHello();
    return 0;
}