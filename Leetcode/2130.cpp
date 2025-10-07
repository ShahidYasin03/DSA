/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int pairSum(ListNode *head)
    {
        vector<int> x;
        ListNode *temp = head;
        while (temp)
        {
            x.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0;
        int j = x.size() - 1;
        int sum = 0;
        while (i < j)
        {
            sum = max(sum, (x[i++] + x[j--]));
        }
        return sum;
    }
};