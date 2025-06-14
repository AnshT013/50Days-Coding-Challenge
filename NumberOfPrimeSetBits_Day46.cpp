#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool isPrime(int n) {
    static const unordered_set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
    return primes.count(n) > 0;
}

int countSetBits(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1);
        ++count;
    }
    return count;
}

int countPrimeSetBits(int left, int right) {
    int result = 0;
    for (int num = left; num <= right; ++num) {
        int setBits = countSetBits(num);
        if (isPrime(setBits)) ++result;
    }
    return result;
}

int main() {
    int left = 10, right = 15;
    cout << countPrimeSetBits(left, right) << endl;
    return 0;
}
