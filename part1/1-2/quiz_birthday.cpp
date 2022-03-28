#include <iostream>
#include <string>

using namespace std;

int main() {
    int year;
    int month;
    int day;

    cout << "몇년도에 태어나셨나요?" << endl;
    cin >> year;
    cout << "몇월에 태어나셨나요?" << endl;
    cin >> month;
    cout << "몇일에 태어나셨나요?" << endl;
    cin >> day;
    cout << year << "년 " << month << "월 " << day << "일 생이군요!" << endl;
    return 0;
}
