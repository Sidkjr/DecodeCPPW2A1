#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    cout << "Enter the coordinates: ";
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "The point lies on the origin\n";
    }
    else if(x == 0) {
        cout << "The point lies on the Y-Axis\n";
    }
    else if(y == 0) {
        cout << "The point lies on the X-Axis\n";
    }
    else {
        cout << "The point doesn't lie on both X and Y Axis\n";
    }
}