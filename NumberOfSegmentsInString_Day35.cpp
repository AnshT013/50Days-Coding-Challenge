#include <iostream>
#include <sstream>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string word;
        int count = 0;
        while (ss >> word) count++;
        return count;
    }
};

int main() {
    string s = "Hello, my name is Ansh";
    Solution sol;
    cout << "Segments: " << sol.countSegments(s) << endl;
    return 0;
}
