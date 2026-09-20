#include <iostream>
#include <vector>
using namespace std;

/* ListNode definition */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

/* Helper function to create a linked list from a vector */
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (int i = 1; i < vals.size(); ++i) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}

/* Helper function to print a linked list */
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right)
            return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* beforeLeft = &dummy;

        for (int i = 1; i < left; ++i) {
            beforeLeft = beforeLeft->next;
        }

        ListNode* leftNode = beforeLeft->next;
        ListNode* rightNode = leftNode;
        for (int i = left; i < right; ++i) {
            rightNode = rightNode->next;
        }

        ListNode* afterRight = rightNode->next;

        beforeLeft->next = nullptr;
        rightNode->next = nullptr;

        ListNode* reversedHead = reverse(leftNode);

        beforeLeft->next = reversedHead;

        ListNode* tail = reversedHead;
        while (tail->next) {
            tail = tail->next;
        }
        tail->next = afterRight;

        return dummy.next;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<int> vals1 = {1, 2, 3, 4, 5};
    ListNode* head1 = createList(vals1);
    cout << "Original List 1: ";
    printList(head1);
    ListNode* result1 = sol.reverseBetween(head1, 2, 4);
    cout << "Reversed (2 to 4): ";
    printList(result1);

    cout << "----------------------" << endl;

    // Test Case 2
    vector<int> vals2 = {10, 20, 30, 40, 50, 60};
    ListNode* head2 = createList(vals2);
    cout << "Original List 2: ";
    printList(head2);
    ListNode* result2 = sol.reverseBetween(head2, 1, 3);
    cout << "Reversed (1 to 3): ";
    printList(result2);

    return 0;
}
