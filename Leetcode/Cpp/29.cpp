class Solution
{
public:
    int divide(int dividend1, int divisor1)
    {
        bool neg = (dividend1 < 0) ^ (divisor1 < 0);
        long long int divisor = abs(static_cast<long long int>(divisor1));
        long long int dividend = abs(static_cast<long long int>(dividend1));
        long long int count = 0;
        if (divisor == 1)
        {
            count = dividend;
        }
        else
        {
            while (dividend >= divisor)
            {
                dividend -= divisor;
                count++;
            }
        }

        if (neg)
        {
            count *= -1;
        }
        if (count > INT_MAX || count < INT_MIN)
        {
            return INT_MAX;
        }
        return count;
    }
};