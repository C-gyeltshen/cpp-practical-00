#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
using namespace std;

// ── Student class ──────────────────────────────────────────────────────
class Student {
private:
    string       name;
    int          studentNumber;
    vector<float> marks;

public:
    // Parameterised constructor
    Student(string n, int num) : name(n), studentNumber(num) {}

    // Add a mark
    void addMark(float m) {
        marks.push_back(m);
    }

    // Average
    float getAverage() {
        if (marks.empty()) return 0;
        return accumulate(marks.begin(), marks.end(), 0.0f) / marks.size();
    }

    // Highest
    float getHighest() {
        if (marks.empty()) return 0;
        return *max_element(marks.begin(), marks.end());
    }

    // Lowest
    float getLowest() {
        if (marks.empty()) return 0;
        return *min_element(marks.begin(), marks.end());
    }

    // Classify based on average
    string getClassification() {
        float avg = getAverage();
        if      (avg >= 75) return "Distinction";
        else if (avg >= 60) return "Merit";
        else if (avg >= 40) return "Pass";
        else                return "Fail";
    }

    // Print full report
    void printReport() {
        cout << "================================================" << endl;
        cout << "                 ACADEMIC REPORT"                  << endl;
        cout << "================================================" << endl;
        cout << "Student Name  : " << name          << endl;
        cout << "Student No    : " << studentNumber << endl;
        cout << "Marks Entered : " << marks.size()  << endl;

        cout << "Marks         : ";
        for (float m : marks) cout << m << " ";
        cout << endl;

        cout << fixed << setprecision(2);
        cout << "Average       : " << getAverage()        << endl;
        cout << "Highest       : " << getHighest()        << endl;
        cout << "Lowest        : " << getLowest()         << endl;
        cout << "Classification: " << getClassification() << endl;
        cout << "================================================" << endl;
    }
};

// ── Main ───────────────────────────────────────────────────────────────
int main() {
    // Instantiate with your own name and student number
    Student s("Chimi Gyeltshen", 2230279);

    // Add at least 5 marks
    s.addMark(88);
    s.addMark(76);
    s.addMark(91);
    s.addMark(65);
    s.addMark(83);

    s.printReport();

    return 0;
}