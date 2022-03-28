#include <iostream>

int main() {
    using namespace std;

    int carrots = 10;

    if (carrots < 5) {
        cout << "Let's buy some carrots!" << endl;
    } else if (carrots < 10){
        cout << "um...." << endl;
    } else {
        cout << "No need to buy new carrots!" << endl;
    }
    return 0;
}