class Solution
{
public:
    bool check(string s)
    {
        if (s.length() < 1)
            return false;
        for (char i : s)
        {
            if (!(isalnum(i) || i == '_'))
                return false;
        }
        return true;
    }
    vector<string> validateCoupons(vector<string> &code, vector<string> &businessLine, vector<bool> &isActive)
    {
        int n = code.size();
        vector<string> bus;
        vector<string> cod;
        for (int i = 0; i < n; i++)
        {
            if (
                check(code[i]) &&
                (businessLine[i] == "electronics" || businessLine[i] == "grocery" || businessLine[i] == "pharmacy" || businessLine[i] == "restaurant") &&
                isActive[i])
            {
                cod.push_back(code[i]);
                bus.push_back(businessLine[i]);
            }
        }
        vector<string> ans;
        string arr[] = {"electronics", "grocery", "pharmacy", "restaurant"};
        for (int i = 0; i < 4; i++)
        {
            vector<string> temp;

            for (int j = 0; j < cod.size(); j++)
            {
                if (bus[j] == arr[i])
                    temp.push_back(cod[j]);
            }

            sort(temp.begin(), temp.end());

            for (auto &x : temp)
                ans.push_back(x);
        }

        return ans;
    }
};