class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        int size = n / 2;
        vector<bool> prime(size, true);

        int limit = sqrt(n);

        for (int i = 3; i <= limit; i += 2) {
            if (prime[i / 2]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    prime[j / 2] = false;
                }
            }
        }

        int count = 1; // prime number 2

        for (int i = 3; i < n; i += 2) {
            if (prime[i / 2])
                count++;
        }

        return count;
    }
};