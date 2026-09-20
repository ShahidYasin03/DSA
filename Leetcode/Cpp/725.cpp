#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    vector<ListNode *> splitListToParts(ListNode *head, int k)
    {
        vector<ListNode *> res(k, nullptr);
        int count = 0;
        ListNode *temp = head;

        // First, calculate the total length of the linked list.
        while (temp)
        {
            count++;
            temp = temp->next;
        }

        int baseSize = count / k; // Base size of each part.
        int extra = count % k;    // Extra nodes to distribute.

        temp = head;
        ListNode *prev = nullptr;

        // Iterate over the parts.
        for (int i = 0; i < k && temp; i++)
        {
            res[i] = temp;
            int currentSize = baseSize + (extra > 0 ? 1 : 0); // Add an extra node if needed.
            extra--;

            // Advance the pointer to split the part.
            for (int j = 0; j < currentSize; j++)
            {
                prev = temp;
                temp = temp->next;
            }

            // Cut off the end of the current part.
            if (prev != nullptr)
            {
                prev->next = nullptr;
            }
        }

        return res;
    }
};

int main()
{
    cout << "Hello, word!" << endl;
    return 0;
}