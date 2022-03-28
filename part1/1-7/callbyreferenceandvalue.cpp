#include <iostream>

using namespace std;

void printMessage(int a, int b) {
    cout << "----------" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "----------" << endl;
}

void callByValue(int a, int b) {
    cout << "IN callByValue" << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    int tmp = a;
    a = b;
    b = tmp;
}

void callByReference(int &a, int &b) {
    cout << "IN callByReference" << endl;
    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;

    int tmp = a;
    a = b;
    b = tmp;
}