#include <iostream>
#include <string>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) return false;
    string ss = s + s;
    return ss.find(goal) != string::npos;
}

int main() {
    string s = "abcde";
    string goal = "cdeab";
    if (rotateString(s, goal))
        cout << "Yes, it's a rotation." << endl;
    else
        cout << "No, it's not a rotation." << endl;
    return 0;
}
