#include <iostream>
#include <string> // Need this for string types
using namespace std;

int main() {
    string studentNumber; // Changed from int to string
    cout << "Enter your student number: ";
    cin >> studentNumber;

    cout << "Your student number: " << studentNumber << endl;

    int sum = 0;
    
    int length = studentNumber.length(); 
    cout << "Number of digits: " << length << endl;

    for (int i = 0; i<= length; i++){
        int digit = studentNumber % 10;
        sum += digit;
    }

    return 0;
}