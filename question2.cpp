#include <iostream>
using namespace std;

int main() {
    int radius;
    float circumference;
    float area;
    float pi = 3.14;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * (radius * radius);
    circumference = 2 * pi * radius;

    if(area > circumference) {
        cout << "Area greater than the circumference\n";
    }
    else {
        cout << "Circumference is greater than the area\n";
    }
}