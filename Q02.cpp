#include <iostream>
#include <string> 
using namespace std;

int main() {
    string studentNumber; 
    cout << "Enter your student number: ";
    cin >> studentNumber;

    cout << "Your student number.     : " << studentNumber << endl;

    int sum = 0;
    
    int length = studentNumber.length(); 

    for (int i = 0; i < length; i++){
        int digit = studentNumber[i] - '0';  
        sum += digit;
    }
    cout << "Digit Sum                : " << sum << endl;

    int reminder = sum / 7;
    cout << "Remender (% 7)           : " << reminder << endl;

    if (sum % 2 == 0){
        cout << "Odd / Even               : Even" << endl;
    }else if (sum % 2 == 1){
        cout << "Odd / Even               : Odd" << endl;
    }

    int number = stoi(studentNumber);
        cout << "Multiplied my 3          : " << 3 * number;

    return 0;
}