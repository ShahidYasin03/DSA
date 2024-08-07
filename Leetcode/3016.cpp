#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if (n <= 8) {
            return n;
        }

        vector<int> count(26, 0);
        for (char c : word) {
            count[c - 'a']++;
        }

        sort(count.begin(), count.end(), greater<int>());

        int keys = 0;
        for (int i = 0; i < count.size() && count[i] != 0; i++) {
            if (i < 8) {
                keys += count[i];
            } else if (i < 16) {
                keys += count[i] * 2;
            } else if (i < 24) {
                keys += count[i] * 3;
            } else {
                keys += count[i] * 4;
            }
        }

        return keys;
    }
};


int main() {
    Solution sol;
    string word =  "hiknogatpyjzcdbe"; // expected output 24
    int keys = sol.minimumPushes(word);
    cout << "Keys: " << keys <<endl;
   
    return 0;
}
