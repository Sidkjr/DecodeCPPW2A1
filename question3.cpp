#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Enter the year in YYYY format: ";
    cin >> year;

    if (year % 4 == 0) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
    }
}