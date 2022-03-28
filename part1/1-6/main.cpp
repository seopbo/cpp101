#include <iostream>
#include "function.h"

int main() {
    using namespace std;
    cout << "main" << endl;
    cout << "result: " << sayHello(10) << endl;
    cout << add(1, 2) << endl;
    cout << add(1, 2, 3) << endl;
    return 0;
}