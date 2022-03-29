#pragma once
#include "person.h"
#include <iostream>

using namespace std;

class Musician : public Person {
    private:
        string m_instrument;
    public:
        Musician(string m_name);
        void sayHello();
        void sayHello(string lang);
        void setInstrument(string instrument);
};
