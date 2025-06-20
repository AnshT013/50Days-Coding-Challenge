#include <iostream>
#include <string>
using namespace std;

string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) return "";
    int a = str1.size();
    int b = str2.size();
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return str1.substr(0, a);
}

int main() {
    string str1 = "ABCABC", str2 = "ABC";
    cout << "GCD of Strings: " << gcdOfStrings(str1, str2) << endl;
    return 0;
}
