#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

string firstPalindrome(vector<string>& words) {
    for (string word : words) {
        if (isPalindrome(word)) return word;
    }
    return "";
}

int main() {
    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};
    cout << firstPalindrome(words);
    return 0;
}
