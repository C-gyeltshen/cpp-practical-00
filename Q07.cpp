#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name          = "Chimi Gyeltshen"; 
    int    studentNumber = 2230279;           

    // Array named after your first name — 5 hardcoded marks
    int tenzin_marks[] = {85, 72, 90, 65, 78}; 
    int size = 5;

    // ── Compute statistics ─────────────────────────────────────────────
    int highest = tenzin_marks[0];
    int lowest  = tenzin_marks[0];
    int sum     = 0;

    for (int i = 0; i < size; i++) {
        if (tenzin_marks[i] > highest) highest = tenzin_marks[i];
        if (tenzin_marks[i] < lowest)  lowest  = tenzin_marks[i];
        sum += tenzin_marks[i];
    }

    double average = (double)sum / size;

    int aboveAverage = 0;
    for (int i = 0; i < size; i++) {
        if (tenzin_marks[i] > average) aboveAverage++;
    }

    // ── Display ────────────────────────────────────────────────────────
    cout << "Student: " << name << " | No: " << studentNumber << endl;
    cout << "------------------------------------------" << endl;
    cout << left << setw(8) << "Index"
         << setw(8) << "Mark"
         << "Bar" << endl;

    for (int i = 0; i < size; i++) {
        cout << "[" << i << "]    "
             << setw(8) << tenzin_marks[i];
        for (int s = 0; s < tenzin_marks[i] / 10; s++) cout << "*";
        cout << endl;
    }

    cout << "------------------------------------------" << endl;
    cout << "Highest      : " << highest                             << endl;
    cout << "Lowest       : " << lowest                              << endl;
    cout << "Average      : " << fixed << setprecision(2) << average << endl;
    cout << "Above Average: " << aboveAverage << " mark(s)"          << endl;

    return 0;
}