#include <iostream>
using namespace std;
int main() {
    int x1;
    int x2;
    int y1;
    int y2;
    int z1;
    int z2;
    float slope_x_y;
    float slope_y_z;
    cout << "Enter the first co-ordinate of X: ";
    cin >> x1;
    cout << "\nEnter the second co-ordinate of X: ";
    cin >> x2;
    cout << "\nEnter the first co-ordinate of Y: ";
    cin >> y1;
    cout << "\nEnter the second co-ordinate of Y: ";
    cin >> y2;
    cout << "\nEnter the first co-ordinate of Z: ";
    cin >> z1;
    cout << "\nEnter the second co-ordinate of Z: ";
    cin >> z2;
    slope_x_y = (y2 - y1) / (x2 - x1);
    slope_y_z = (z2 - z1) / (y2 - y1);
    if (slope_x_y == slope_y_z) {
        cout << "All three points lie on a straight line!\n";
    }
    else {
        cout << "The three points X, Y and Z are not in a straight line\n";
    }
}