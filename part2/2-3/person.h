#pragma once
#include <iostream>

using namespace std;

class Person {
    private:
        string m_name;
    public:
        Person(string name);
        void sayHello();
        string getName();
};