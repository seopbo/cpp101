#include "person.h"
#include "musician.h"
#include <iostream>


Musician::Musician(string m_name) : Person(m_name) {

}

// method overriding
void Musician::sayHello() { 
    cout << "Hi I'm " << m_name << endl;
    cout << "I play the " << m_instrument << endl;
}

// method overloading
void Musician::sayHello(string lang) { 
    if (lang == "ENG"){
        cout << "Hello!" << endl;
    }
    else {
        cout << "I can only speak in English..." << endl;
    }
}

void Musician::setInstrument(string instrument) {
        m_instrument = instrument;
}
