#include <iostream>
using namespace std;

int main() {
    char inp;
    int ascii_val;
    cout << "Enter something single: ";
    cin >> inp;
    ascii_val = int(inp);
    if (ascii_val >= 48 && ascii_val <= 57) {
        cout << "\ndigit!\n";
    }
    else if((ascii_val >= 41 && ascii_val <= 90) || (ascii_val >= 97 && ascii_val <= 122)) {
        cout << "\nalphabet!\n";
    }
    else {
        cout << "\nspecial character!\n";
    }
}