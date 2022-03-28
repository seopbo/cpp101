#include "function.h"
#include <iostream>

using namespace std;

int sayHello(int number) {
    if (number < 0) {
        return -1;
    }
    for (int i = 0; i < number; i++) {
        cout << "Welcome!" << endl;
    }
    return 0;
}

int add(int a, int b) {
    cout << "addTwo" << endl;
    return a + b ;
}

int add(int a, int b, int c) {
    cout << "addThree" << endl;
    return a + b + c;
}