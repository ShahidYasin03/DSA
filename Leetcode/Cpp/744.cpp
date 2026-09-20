#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        for (int i = 0; i < letters.size(); i++)
        {
            if (letters[i] > target)
                return letters[i];
        }
        return letters[0];
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<char> letters1 = {'c', 'f', 'j'};
    char target1 = 'a';
    cout << "Test 1: " << sol.nextGreatestLetter(letters1, target1) << endl;

    // Test case 2
    vector<char> letters2 = {'c', 'f', 'j'};
    char target2 = 'c';
    cout << "Test 2: " << sol.nextGreatestLetter(letters2, target2) << endl;

    return 0;
}