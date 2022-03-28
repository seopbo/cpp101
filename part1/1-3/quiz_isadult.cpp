#include <iostream>

int main() {
    using namespace std;

    int year, month, day;

    cout << "Year? " << endl;
    cin >> year;

    cout << "Month? " << endl;
    cin >> month;

    cout << "day? " << endl;
    cin >> day;

    cout << "You are born in " << year << ", " << month << ", " << day << endl;

    int thisYear = 2022;
    int isAdult = (thisYear - year) >= 20;
    cout << "adult(1) non adult(0): " << isAdult << endl;
    return 0;
}