#include <iostream>
#include <string> 
using namespace std;

int main() {
    string studentNumber; 
    cout << "Enter your student number: ";
    getline(cin, studentNumber);  // Read entire line including spaces

    cout << "Your student number.     : " << studentNumber << endl;

    int sum = 0;
    
    int length = studentNumber.length(); 

    for (int i = 0; i < length; i++){
        // Only process numeric characters
        if (isdigit(studentNumber[i])) {
            int digit = studentNumber[i] - '0';  
            sum += digit;
        }
    }
    cout << "Digit Sum                : " << sum << endl;

    int remainder = sum % 7;  // Changed from / to %
    cout << "Remainder (% 7)          : " << remainder << endl;

    if (sum % 2 == 0){
        cout << "Odd / Even               : Even" << endl;
    }else if (sum % 2 == 1){
        cout << "Odd / Even               : Odd" << endl;
    }

    // Only convert if string contains only digits
    if (!studentNumber.empty() && studentNumber.find_first_not_of("0123456789") == string::npos) {
        int number = stoi(studentNumber);
        cout << "Multiplied by 3          : " << 3 * number << endl;
    } else {
        cout << "Multiplied by 3          : Cannot multiply (not a valid number)" << endl;
    }

    return 0;
}