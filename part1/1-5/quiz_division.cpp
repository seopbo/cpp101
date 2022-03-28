#include <iostream>

int main() {
    using namespace std;
    int inputNumber = 0;

    cout << "Please enter number: " << endl;
    cin >> inputNumber;

    for (int i = 1; i <= inputNumber; i++) {
        if (inputNumber % i == 0) {
            cout << i << endl;
        }
    }   
}