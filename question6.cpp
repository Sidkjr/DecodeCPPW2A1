#include <iostream>
using namespace std;

int main() {
    int marksA;
    int marksB;
    int marksC;
    cout << "Enter Marks of Student A: ";
    cin >> marksA;
    cout << "Enter Marks of Student B: ";
    cin >> marksB;
    cout << "Enter Marks of Student C: ";
    cin >> marksC;
    if (marksA < marksB && marksA < marksC) {
        cout << "Student A has the least marks!\n";
    }
    else if (marksB < marksA && marksB < marksC) {
        cout << "Student B has the least marks!\n";
    }
    else if (marksC < marksA && marksC < marksB) {
        cout << "Student C has the least marks!\n";
    }
}