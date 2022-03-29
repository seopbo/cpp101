#pragma once
#include <iostream>

using namespace std;

class Person {
    public:
        string m_name;

        Person(string name);
        ~Person();
        void sayHello();
};
