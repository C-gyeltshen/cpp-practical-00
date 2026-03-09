#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName    = "Chimi Gyeltshen"; 
    string firstName   = "Chimi";          
    int    studentNumber = 2230279;        

    int firstNameLen = firstName.length();
    int fullNameLen  = fullName.length();
    int lastDigit    = studentNumber % 10;

    // ── Name repeated N times ──────────────────────────────────────────
    cout << "Name repeated (" << firstNameLen << " times):" << endl;
    for (int i = 0; i < firstNameLen; i++) {
        cout << firstName << endl;
    }

    cout << endl;

    // ── Right-angled triangle ──────────────────────────────────────────
    cout << "Triangle (height = " << fullNameLen << "):" << endl;
    for (int row = 1; row <= fullNameLen; row++) {
        for (int col = 0; col < row; col++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // ── Multiplication table ───────────────────────────────────────────
    cout << "Times Table for " << lastDigit
         << " (last digit of " << studentNumber << "):" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << lastDigit << " x " << i << " = " << lastDigit * i << endl;
    }

    return 0;
}