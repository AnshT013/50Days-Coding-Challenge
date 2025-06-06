#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if parentheses are valid
bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        else {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '['))
                return false;
        }
    }

    return st.empty();
}

// Main function
int main() {
    string input;
    cout << "Enter a string of parentheses to check: ";
    cin >> input;

    if (isValid(input))
        cout << "The parentheses are valid." << endl;
    else
        cout << "The parentheses are NOT valid." << endl;

    return 0;
}
