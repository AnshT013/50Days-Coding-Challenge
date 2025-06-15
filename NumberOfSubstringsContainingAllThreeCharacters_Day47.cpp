#include <iostream>
#include <string>
#include <vector>
using namespace std;

int numberOfSubstrings(string s) {
    vector<int> count(3, 0);
    int left = 0, res = 0;
    for (int right = 0; right < s.size(); ++right) {
        count[s[right] - 'a']++;
        while (count[0] && count[1] && count[2]) {
            count[s[left] - 'a']--;
            left++;
        }
        res += left;
    }
    return res;
}

int main() {
    string s = "abcabc";
    cout << "Number of substrings with all three characters: " << numberOfSubstrings(s) << endl;
    return 0;
}
