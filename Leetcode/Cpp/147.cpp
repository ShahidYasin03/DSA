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

class Solution
{
public:
    ListNode *insertionSortList(ListNode *head)
    {
        ListNode *i = head;
        while (i)
        {
            ListNode *j = i->next;
            while (j)
            {
                if (j->val < i->val)
                {
                    int temp = i->val;
                    i->val = j->val;
                    j->val = temp;
                }
                j = j->next;
            }
            i = i->next;
        }
        return head;
    }
};

auto init = []()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    return 'c';
}();

int main()
{
    cout << "Hello, word!" << endl;
    return 0;
}