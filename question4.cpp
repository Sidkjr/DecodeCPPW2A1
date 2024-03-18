#include <iostream>
using namespace std;

int main() {
    float length;
    float breadth;
    float area;
    float perimeter;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    area = length * breadth;
    perimeter = (2 * length) + (2 * breadth);
    if(area > perimeter) {
        cout << "Area is greater than perimeter\n";
    }
    else {
        cout << "Perimeter is greater than area\n";
    }
}