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
    ListNode* partition(ListNode* head, int x) {
        // Brute force with extra space
        // vector<int> les;
        // vector<int> gre;
        // ListNode* temp = head;
        // while(temp)
        // {
        //     if(temp->val < x)
        //     {
        //         les.push_back(temp->val);
        //     }else{
        //         gre.push_back(temp->val);
        //     }
        //     temp = temp->next;
        // }
        // ListNode *Res = new ListNode(0);
        // temp = Res;
        // for(int i = 0 ; i < les.size(); i++)
        // {
        //     ListNode* newNode = new ListNode(les[i]);
        //     temp->next = newNode;
        //     temp = temp->next;
        // }
        // for(int i = 0 ; i < gre.size(); i++)
        // {
        //     ListNode* newNode = new ListNode(gre[i]);
        //     temp->next = newNode;
        //     temp = temp->next;
        // }
        // temp = Res;
        // Res = Res->next;
        // delete temp;
        // return Res;

        // Optimized
        ListNode* lesser = new ListNode(0);
        ListNode* greater = new ListNode(0);
        ListNode* less = lesser;
        ListNode* great = greater;
        while(head)
        {
            if(head->val < x)
            {
                less->next = head;
                less = less->next;
            } else {
                great->next = head;
                great = great->next;
            }
            head = head->next;
        }
        great->next = nullptr;
        less->next = greater->next;
        ListNode* result = lesser->next;
        delete lesser;
        delete greater;
        return result;
    }
};

// Helper function to create linked list from vector
ListNode* createList(const vector<int>& vals) {
    ListNode* dummy = new ListNode(0);
    ListNode* tail = dummy;
    for (int val : vals) {
        tail->next = new ListNode(val);
        tail = tail->next;
    }
    ListNode* result = dummy->next;
    delete dummy;
    return result;
}

// Helper function to print linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Test case 1
    vector<int> vals1 = {1, 4, 3, 2, 5, 2};
    int x1 = 3;
    ListNode* head1 = createList(vals1);
    cout << "Original List 1: ";
    printList(head1);
    ListNode* result1 = sol.partition(head1, x1);
    cout << "Partitioned around " << x1 << ": ";
    printList(result1);

    cout << endl;

    // Test case 2
    vector<int> vals2 = {2, 1};
    int x2 = 2;
    ListNode* head2 = createList(vals2);
    cout << "Original List 2: ";
    printList(head2);
    ListNode* result2 = sol.partition(head2, x2);
    cout << "Partitioned around " << x2 << ": ";
    printList(result2);

    return 0;
}
