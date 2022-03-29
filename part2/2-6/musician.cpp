#include "musician.h"
#include "person.h"

Musician::Musician(string m_name) : Person(m_name) {

}

void Musician::sayHello() {
    cout << "Hi I'm " << m_name << endl;
    cout << "I'm a musician!" << endl;
}

void Musician::playSomething() {
     cout << "lalala~" << endl;
}
