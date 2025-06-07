#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to remove adjacent duplicates
string removeDuplicates(string s) {
    stack<char> st;

    for (char c : s) {
        if (!st.empty() && st.top() == c)
            st.pop();
        else
            st.push(c);
    }

    string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

// Main function
int main() {
    string input;
    cout << "Enter a string with adjacent duplicates: ";
    cin >> input;

    string result = removeDuplicates(input);
    cout << "After removing adjacent duplicates: " << result << endl;

    return 0;
}
