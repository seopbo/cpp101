#include <iostream>

int main() {
    using namespace std;

    int sum = 0;
    int inputNumber = 0;
    cout << "Please enter number: " << endl;
    cin >> inputNumber;

    for (int i=1; i<=inputNumber; i++) {
        sum += i;
    }
    cout << "sum: " << sum << endl;
}