#include <vector>
#include <stdexcept>
#include <climits>
using namespace std;

int findMax(const vector<int>& arr) {
    if (arr.empty()) {
        throw invalid_argument("Array is empty");
    }

    int maxVal = INT_MIN;
    for (int num : arr) {
        if (num > maxVal) {
            maxVal = num;
        }
    }
    return maxVal;
}