class Solution
{
public:
    string toHex(int num)
    {
        if (num == 0)
            return "0";

        unsigned int n = num;
        string hexChars = "0123456789abcdef";
        string ans = "";

        while (n && ans.size() < 8)
        {                     
            int dig = n % 16;
            ans.push_back(hexChars[dig]);
            n >>= 4; 
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
