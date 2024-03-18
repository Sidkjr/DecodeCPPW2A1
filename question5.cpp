#include <iostream>
using namespace std;

int main() {
    int sideA;
    int sideB;
    int sideC;
    cout << "Enter the value of Side A: ";
    cin >> sideA;
    cout << "\nEnter the value of Side B: ";
    cin >> sideB;
    cout << "\nEnter the value of Side C: ";
    cin >> sideC;
    if (sideA == sideB && sideB == sideC && sideA == sideC) {
        cout << "This is an equilateral traingle!\n";
    }
    else if (sideA == sideB || sideB == sideC || sideA == sideC) {
        cout << "This is an isosceles traingle\n";
    }
    else {
        cout << "This is a scalene traingle\n";
    }
}