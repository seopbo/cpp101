#include "person.h"
#include <iostream>

Person::Person(string name) {
    cout << "Construting Person..." << endl;
    m_name = name;
}

Person::~Person() {
    cout << "Destructing Person..." << endl;
}

void Person::sayHello() {
    cout << "Hello I'm " << m_name << endl;
}

string Person::getName() {
    return m_name;
}
