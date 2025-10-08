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
        ListNode *fast = head;
        ListNode *slow = fast;
        int sum = 0;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev, *nextNode = nullptr;
        while(slow)
        {
            nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        while(prev)
        {
            sum = max(sum, (head->val + prev->val));
            prev = prev->next;
            head = head->next;
        }
        return sum;
    }
};