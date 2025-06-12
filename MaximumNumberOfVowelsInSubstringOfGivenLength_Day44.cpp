#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int maxCount = 0, count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) count++;
        }
        maxCount = count;
        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i - k])) count--;
            if (isVowel(s[i])) count++;
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }

    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};

int main() {
    Solution sol;
    string s = "abciiidef";
    int k = 3;
    cout << sol.maxVowels(s, k);
    return 0;
}
