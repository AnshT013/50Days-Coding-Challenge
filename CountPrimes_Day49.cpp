#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    if (n <= 2) return 0;

    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i)
                isPrime[j] = false;
        }
    }

    int count = 0;
    for (bool prime : isPrime)
        if (prime) count++;

    return count;
}

int main() {
    int n = 20;
    cout << "Number of primes less than " << n << " is: " << countPrimes(n) << endl;
    return 0;
}
