#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    // this is the whole solution
    void deleteNode(ListNode *node)
    {
        ListNode *curr = node;
        ListNode *nxt = node->next;
        curr->val = nxt->val;
        curr->next = nxt->next;
    }
};
int main()
{
}
