#pragma once
#include <iostream>
#include "person.h"

class Baker : public Person {
    public:
        Baker(string m_name);
        void sayHello();
};
