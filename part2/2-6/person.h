#pragma once
#include <iostream>

using namespace std;

class Person {
    protected:
        string m_name;
    public:
        Person(string name);
        virtual void sayHello();
};
