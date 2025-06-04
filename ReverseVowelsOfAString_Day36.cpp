#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        int i = 0, j = s.length() - 1;
        while (i < j) {
            while (i < j && vowels.find(s[i]) == vowels.end()) i++;
            while (i < j && vowels.find(s[j]) == vowels.end()) j--;
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "leetcode";
    cout << "Reversed Vowels: " << sol.reverseVowels(s) << endl;
    return 0;
}
