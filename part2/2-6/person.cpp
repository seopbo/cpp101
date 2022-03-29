#include "person.h"

Person::Person(string name) {
    m_name = name;
}

void Person::sayHello() {
    cout << "Hello I'm " << m_name << endl;
}
