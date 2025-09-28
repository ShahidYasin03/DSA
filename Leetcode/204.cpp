#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        vector<bool> Primes(n, true);
        int count = 0;
        Primes[0] = false;
        Primes[1] = false;
        for (int i = 2; i < n; i++)
        {
            if (Primes[i])
            {
                count++;

                for (long long j = (long long)i * i; j < n; j += i)
                {
                    Primes[j] = false;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    cout << sol.countPrimes(10) << endl; // Output: 4 (primes: 2, 3, 5, 7)
    cout << sol.countPrimes(20) << endl; // Output: 8 (primes: 2, 3, 5, 7, 11, 13, 17, 19)
    return 0;
}