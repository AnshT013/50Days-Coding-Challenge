#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ans = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        string support = "";
        for (int j = 0; j < ans.size() && j < strs[i].size(); j++) {
            if (strs[i][j] == ans[j]) {
                support += ans[j];
            } else {
                break;
            }
        }
        ans = support;
    }
    return ans;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string result = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}
