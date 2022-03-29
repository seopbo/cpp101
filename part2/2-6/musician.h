#pragma once
#include <iostream>
#include "person.h"

using namespace std;

class Musician : public Person {
    public:
        Musician(string m_name);
        void sayHello();
        void playSomething();
};
