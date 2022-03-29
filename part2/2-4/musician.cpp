#include "musician.h"
#include <iostream>

using namespace std;

Musician::Musician(string m_name):Person(m_name) { // 부모 클래스의 생성자를 호출함.
    cout << "Constructing Musician..." << endl;
}

Musician::~Musician() {
    cout << "Destructing Musician..." << endl;
}

void Musician::setInstrument(string instrument) {
    m_instrument = instrument;
}

string Musician::getInstrument() {
    return m_instrument;
}