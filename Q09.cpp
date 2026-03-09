#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

int main() {
    vector<int> v2230279; 

    cout << "Enter 6 values (separated by spaces): ";
    int val;
    for (int i = 0; i < 6; i++) {
        if (!(cin >> val)) {
            cerr << "Error: Could not read integer " << (i+1) << endl;
            return 1;
        }
        v2230279.push_back(val);
    }

    cout << "Original : ";
    for (int v : v2230279) cout << v << " ";
    cout << endl;

    sort(v2230279.begin(), v2230279.end());

    cout << "Sorted   : ";
    for (int v : v2230279) cout << v << " ";
    cout << endl;

    int    minVal = *min_element(v2230279.begin(), v2230279.end());
    int    maxVal = *max_element(v2230279.begin(), v2230279.end());
    int    sum    = accumulate(v2230279.begin(), v2230279.end(), 0);
    double avg    = (double)sum / v2230279.size();

    cout << "Min      : " << minVal                              << endl;
    cout << "Max      : " << maxVal                              << endl;
    cout << "Sum      : " << sum                                 << endl;
    cout << "Average  : " << fixed << setprecision(2) << avg     << endl;

    v2230279.erase(
        remove_if(v2230279.begin(), v2230279.end(),
                  [avg](int x){ return x < avg; }),
        v2230279.end()
    );

    cout << "After removing below average:" << endl;
    for (int v : v2230279) cout << v << " ";
    cout << endl;

    return 0;
}