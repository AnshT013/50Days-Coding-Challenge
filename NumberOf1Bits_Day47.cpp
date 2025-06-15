#include <iostream>
using namespace std;

int hammingWeight(uint32_t n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    uint32_t n = 11;
    cout << "Number of 1 bits: " << hammingWeight(n) << endl;
    return 0;
}
