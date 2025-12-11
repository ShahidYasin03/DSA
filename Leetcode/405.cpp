class Solution
{
public:
    string toHex(int num)
    {
        if (num == 0)
            return "0";

        unsigned int n = num;
        string ans = "";

        while (n && ans.size() < 8)
        {
            int dig = n % 16;
            switch (dig)
            {
            case 10:
                ans = "a" + ans;
                break;
            case 11:
                ans = "b" + ans;
                break;
            case 12:
                ans = "c" + ans;
                break;
            case 13:
                ans = "d" + ans;
                break;
            case 14:
                ans = "e" + ans;
                break;
            case 15:
                ans = "f" + ans;
                break;
            default:
                ans = to_string(dig) + ans;
                break;
            }
            n /= 16;
        }
        return ans;
    }
};
