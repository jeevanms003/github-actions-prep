#include <iostream>
#include <vector>
using namespace std;

// Declare function (since no header yet)
int findMax(const vector<int>& arr);

void runTest(const vector<int>& arr, int expected) {
    try {
        int result = findMax(arr);
        if (result == expected) {
            cout << "PASS\n";
        } else {
            cout << "FAIL: Expected " << expected << ", Got " << result << "\n";
            exit(1); // important for CI failure
        }
    } catch (...) {
        cout << "EXCEPTION\n";
        exit(1);
    }
}

int main() {
    runTest({1, 2, 3, 4, 5}, 5);
    runTest({-1, -5, -3}, -1);
    runTest({10}, 10);
    runTest({0, 0, 0}, 0);
    runTest({100, 50, 200, 150}, 200);

    cout << "All tests passed\n";
    return 0;
}