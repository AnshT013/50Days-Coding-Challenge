#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int length = 0, i = s.length() - 1;
    while (i >= 0 && s[i] == ' ') i--;
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
}

int main() {
    string s;
    getline(cin, s);
    cout << lengthOfLastWord(s) << endl;
    return 0;
}
