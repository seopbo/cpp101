#include <iostream>

using namespace std;

int main() {
    int number[3] = {1, 3, 5};
    int input = 0;

    cout << "Enter integer number(1~3)" << endl;
    cin >> input;

    try {
        if (input < 1 || input > 3) {
            throw input;
        }
        cout << number[input-1] << endl;
    } catch (int e) {
        cout << "Invalid input: " << e << endl;
    }

    cout << "Done!" << endl;
    return 0;
}