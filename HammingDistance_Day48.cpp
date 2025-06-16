#include <iostream>

using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorResult = x ^ y;
        int count = 0;
        while (xorResult) {
            count += xorResult & 1;
            xorResult >>= 1;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int x = 1, y = 4;  // Example input
    int result = sol.hammingDistance(x, y);
    cout << "Hamming Distance: " << result << endl;
    return 0;
}
