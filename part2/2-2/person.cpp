#include "person.h"

using namespace std;

Person::Person(string name) {
    cout << "Constructing Person..." << endl;
    m_name = name;
}

Person::~Person() {
    cout << "Destructing Person..." << endl;
}

void Person::sayHello() {
    cout << "Hello I'm " << m_name << endl;
}
