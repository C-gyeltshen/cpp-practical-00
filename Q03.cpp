#include <iostream>
#include <string> 
using namespace std;

int main() {
    string fullName;
    cout << "Enter you full name : ";
    getline(cin, fullName); 
    cout << "Full Name           : " << fullName << endl; 

    int count = 0;
    int length = fullName.length();  
    for (int i = 0; i < length; i++){
        count++;  
    }
    cout << "Total Length        : " << count << endl;

    cout << "Uppercase           : ";
    for (char c : fullName) {
        cout << (char)toupper(c);
    }
    cout << endl;

    cout << "Lowercase           : ";
    for (char c : fullName) {
        cout << (char)tolower(c);
    }
    cout << endl;

    cout << "Initials            : ";
    for (int i = 0; i < length; i++) {
        if (i == 0 || fullName[i-1] == ' ') {
            cout << (char)toupper(fullName[i]);
        }
    }
    cout << endl;

    int firstNameLength = fullName.find(' ');
    if (firstNameLength == string::npos) {
        firstNameLength = length;
    }
    cout << "First Name Length   : " << firstNameLength << endl;

    return 0;
}