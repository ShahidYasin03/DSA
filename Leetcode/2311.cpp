#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int longestSubsequence(string s, int k)
{
    int n = s.length();
    long long sum = 0;
    int count = 0;
    int p = 0; // from right to left

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            count++;
        }
        else
        {
            if (p < 63) // avoid overflow
            {
                // bit shift to calculate pow 
                long long power = 1LL << p;
                if (sum + power <= k)
                {
                    sum += power;
                    count++;
                }
            }
        }
        p++;
    }

    return count;
}

int main()
{

    int n = longestSubsequence("111100010000011101001110001111000000001011101111111110111000011111011000010101110100110110001111001001011001010011010000011111101001101000000101101001110110000111101011000101", 11713332);

    cout << "Size returned is " << n << endl;

    // Input: s = "1001010", k = 5
    // Output: 5
}