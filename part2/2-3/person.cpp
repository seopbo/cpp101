#include "person.h"
#include <iostream>

using namespace std;

Person::Person(string name) {
    m_name = name;
}

void Person::sayHello() {
    cout << "Hello I'm " << m_name << endl;
}

string Person::getName() {
    return m_name;
}
