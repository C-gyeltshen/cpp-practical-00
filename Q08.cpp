#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// ── Function: digit sum ────────────────────────────────────────────────
int digitSum(int n) {
    int sum = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        sum += n % 10;
        n   /= 10;
    }
    return sum;
}

// ── Function: primality test ───────────────────────────────────────────
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// ── Function: count vowels ─────────────────────────────────────────────
int countVowels(string s) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : s) {
        if (vowels.find(c) != string::npos) count++;
    }
    return count;
}

// ── Function: reverse string ───────────────────────────────────────────
string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

// ── Main ───────────────────────────────────────────────────────────────
int main() {
    string name          = "Chimi Gyeltshen"; 
    int    studentNumber = 2230279;           

    cout << "========================================" << endl;
    cout << " Function Results for " << name           << endl;
    cout << " Student No: " << studentNumber           << endl;
    cout << "========================================" << endl;

    cout << "digitSum("     << studentNumber << ")          : "
         << digitSum(studentNumber)                         << endl;

    cout << "isPrime("      << studentNumber << ")          : "
         << (isPrime(studentNumber) ? "Yes" : "No")         << endl;

    cout << "countVowels("  << name          << ")  : "
         << countVowels(name)                               << endl;

    cout << "reverseString(" << name         << "): "
         << reverseString(name)                             << endl;

    cout << "========================================" << endl;

    return 0;
}