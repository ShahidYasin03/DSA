class Solution {
public:
    int maximum69Number (int num) {
        vector<int> x;
        while(num)
        {
            int dig = num%10;
            x.push_back(dig);
            num /= 10;
        }
        int n = 0;
        int count = 0;
        for(int i = x.size()-1; i >=0; i--)
        {
            if(x[i] == 6 && count == 0)
            {
                x[i] = 9;
                count = 1;
            }
            n *= 10;
            n += x[i];
        }
        return n;
    }
};

