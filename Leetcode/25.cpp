#include <vector>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    void reverse(vector<int>& x, int start, int end) {
        while (start < end) {
            int temp = x[start];
            x[start] = x[end];
            x[end] = temp;
            start++;
            end--;
        }
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        // Brute force
        vector<int> x;

        // Convert linked list to vector
        ListNode* temp = head;
        while (temp) {
            x.push_back(temp->val);
            temp = temp->next;
        }

        // Reverse segments of k elements in the vector
        for (int i = 0; i + k <= x.size(); i += k) {
            reverse(x, i, i + k - 1);
        }

        // Convert vector back to linked list
        ListNode* result = nullptr;
        ListNode* tail = nullptr;
        for (int i = 0; i < x.size(); i++) {
            ListNode* newNode = new ListNode(x[i]);
            if (result == nullptr) {
                result = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
        }
        return result;
    }
};
