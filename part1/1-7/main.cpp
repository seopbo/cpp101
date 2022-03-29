// call by reference and value example
#include <iostream>
#include "callbyreferenceandvalue.h"

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "&a: " << &a << endl;
    cout << "&b: " << &b << endl;
    cout << "callByValue" << endl;
    printMessage(a,b);
    callByValue(a,b);
    printMessage(a,b);

    cout << "callByReference" << endl;
    printMessage(a, b);
    callByReference(a, b);
    printMessage(a, b);    
    return 0;
}