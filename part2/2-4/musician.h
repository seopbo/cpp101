#pragma once
#include <iostream>
#include "person.h"

class Musician : public Person {
    private:
        string m_instrument;
    public:
        Musician(string m_name);
        ~Musician();
        void setInstrument(string instrument);
        string getInstrument();
};
