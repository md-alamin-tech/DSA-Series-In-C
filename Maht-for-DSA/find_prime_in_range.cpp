#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 1) return 0;

        vector<bool> isPrime(n, true);

        // 0 and 1 are NOT primes
        isPrime[0] = false;
        isPrime[1] = false;

        int count = 0;

        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
                for (int j = 2 * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution sol;
    int n = 133;
    cout << "Count = " << sol.countPrimes(n) << endl;
    return 0;
}
