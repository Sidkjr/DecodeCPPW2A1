#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cout << "Enter the value of A: ";
    cin >> a;

    cout << "\nEnter the value of B: ";
    cin >> b;

    if (a > b) {
        cout << "first number " << a << " is the largest\n";
    }
    else {
        cout << "second number " << b << " is the largest\n";
    }
}