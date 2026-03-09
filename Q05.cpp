#include <iostream>
#include <string>
using namespace std;

int main() {
    string name         = "Chimi Gyeltshen";
    int    studentNumber = 2230279;          

    int mark;
    cout << "Enter mark: ";
    cin >> mark;

    cout << "----------------------------------------" << endl;

    if (mark < 0 || mark > 100) {
        cout << "Error: Mark must be between 0 and 100." << endl;
    } else {
        string grade, result;

        if (mark >= 75) {
            grade  = "Distinction";
            result = "Congratulations, " + name.substr(0, name.find(' ')) + "! You have passed.";
        } else if (mark >= 60) {
            grade  = "Merit";
            result = "Congratulations, " + name.substr(0, name.find(' ')) + "! You have passed.";
        } else if (mark >= 40) {
            grade  = "Pass";
            result = "Congratulations, " + name.substr(0, name.find(' ')) + "! You have passed.";
        } else {
            grade  = "Fail";
            result = "Unfortunately, " + name.substr(0, name.find(' ')) + ", you have not passed.";
        }

        cout << "Student : " << name << " (" << studentNumber << ")" << endl;
        cout << "Mark    : " << mark   << endl;
        cout << "Grade   : " << grade  << endl;
        cout << "Result  : " << result << endl;
    }

    cout << "----------------------------------------" << endl;

    return 0;
}