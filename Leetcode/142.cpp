class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = fast;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast)
            {
                slow = head;
                while (slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return nullptr;
    }
};