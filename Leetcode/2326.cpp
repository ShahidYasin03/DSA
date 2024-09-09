#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<int> x;
        ListNode* temp = head;
        while(temp)
        {
            x.push_back(temp->val);
            temp = temp->next;
        }  
        vector<vector<int>> vec(m, vector<int>(n, -1));
        int direction = 0;
        int top = 0, left = 0, right = n - 1, bottom = m - 1;
        int index = 0;
        while(top <= bottom && left <= right && index < x.size())
        {
            if(direction == 0)
            {
                for(int i = left; i <= right && index < x.size(); i++)
                {
                    vec[top][i] = x[index++];
                }
                top++;
            }else if(direction == 1)
            {
                for(int i = top; i <= bottom && index < x.size(); i++)
                {
                    vec[i][right] = x[index++];
                }
                right--;
            }else if(direction == 2)
            {
                for(int i = right; i >= left && index < x.size(); i--)
                {
                    vec[bottom][i] = x[index++];
                }
                bottom--;
            }else if(direction == 3)
            {
                for(int i = bottom; i >= top && index < x.size(); i--)
                {
                    vec[i][left] = x[index++];
                }
                left++;
            }

            direction = (direction + 1) % 4;
        }

        return vec;
    }
};
int main()
{
    cout << "Hello, word!" << endl;
    return 0;
}