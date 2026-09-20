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
        ListNode* temp = head;  
        vector<vector<int>> vec(m, vector<int>(n, -1));
        int direction = 0;
        int top = 0, left = 0, right = n - 1, bottom = m - 1;
        int index = 0;
        while(top <= bottom && left <= right && temp != nullptr)
        {
            if(direction == 0)
            {
                for(int i = left; i <= right && temp != nullptr; i++)
                {
                    vec[top][i] = temp->val;
                    temp = temp->next;
                }
                top++;
            }else if(direction == 1)
            {
                for(int i = top; i <= bottom && temp != nullptr; i++)
                {
                    vec[i][right] = temp->val;
                    temp = temp->next;
                }
                right--;
            }else if(direction == 2)
            {
                for(int i = right; i >= left && temp != nullptr; i--)
                {
                    vec[bottom][i] = temp->val;
                    temp = temp->next;
                }
                bottom--;
            }else if(direction == 3)
            {
                for(int i = bottom; i >= top && temp != nullptr; i--)
                {
                    vec[i][left] = temp->val;
                    temp = temp->next;
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