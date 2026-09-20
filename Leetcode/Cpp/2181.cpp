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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {

        ListNode* result = nullptr;
        ListNode* tail = nullptr;

        ListNode* temp = head->next;
        int sum = 0;
        while(temp)
        {
            if(temp->val == 0)
            {
                ListNode* x = new ListNode(sum);
                if(result == nullptr)
                {
                    result = x;
                    tail = x;
                }else{
                    tail->next = x;
                    tail = x;
                }
                sum = 0;
            }else{
                sum += temp->val;
            }
            temp = temp->next;

        }
        return result;
        
    }
};