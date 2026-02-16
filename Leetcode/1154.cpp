#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int dayOfYear(string date)
    {
        int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string y = "", m = "", d = "";
        int i = 0;
        while (i < 4)
        {
            y += date[i++];
        }
        i++;
        while (i < 7)
        {
            m += date[i++];
        }
        i++;
        while (i < 10)
        {
            d += date[i++];
        }
        int year = stoi(y), month = stoi(m), day = stoi(d);
        if (month == 1)
            return day;
        if (month > 2 && ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))))
        {
            day++;
        }
        for (int i = 0; i < month - 1; i++)
        {
            day += arr[i];
        }
        return day;
    }
};

int main()
{
    Solution sol;
    cout << "Number of days: " << sol.dayOfYear("2019-01-09") << endl;
    cout << "Number of days: " << sol.dayOfYear("2019-02-10") << endl;

    return 0;
}