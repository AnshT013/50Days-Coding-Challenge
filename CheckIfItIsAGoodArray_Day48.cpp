#include <iostream>
#include <vector>
#include <numeric>  // For std::gcd

using namespace std;

class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int gcd = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            gcd = std::gcd(gcd, nums[i]);
        }
        return gcd == 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {12, 5, 7, 23};  // Example input
    bool result = sol.isGoodArray(nums);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
