#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (char c : columnTitle) {
            result = result * 26 + (c - 'A' + 1);
        }
        return result;
    }
};

int main() {
    Solution solution;
    string columnTitle;
    cin >> columnTitle;
    cout << solution.titleToNumber(columnTitle) << endl;
    return 0;
}
