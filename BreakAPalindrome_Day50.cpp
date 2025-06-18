#include <iostream>
#include <string>
using namespace std;

string breakPalindrome(string palindrome) {
    if (palindrome.size() == 1) return "";

    for (int i = 0; i < palindrome.size() / 2; ++i) {
        if (palindrome[i] != 'a') {
            palindrome[i] = 'a';
            return palindrome;
        }
    }

    palindrome[palindrome.size() - 1] = 'b';
    return palindrome;
}

int main() {
    string palindrome;
    cout << "Enter a palindrome: ";
    cin >> palindrome;
    string result = breakPalindrome(palindrome);
    cout << "Result after breaking palindrome: " << result << endl;
    return 0;
}
