#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word, result;
    while (ss >> word) {
        result = word + " " + result;
    }
    if (!result.empty()) result.pop_back();
    return result;
}

int main() {
    string input = "  the sky   is blue  ";
    cout << reverseWords(input);
    return 0;
}


