#include <iostream>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next == nullptr || head == nullptr)
        {
            return head;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp->next)
        {
            prev = temp;
            temp = temp->next;
            int num1 = prev->val, num2 = temp->val;
            int n = std::__gcd(num1, num2);
            // int n = (num1 > num2)? num2 : num1;
            // while((num1 % n != 0) && (num2 % n != 0))
            // {
            //     n--;
            // }
            ListNode* newNode = new ListNode(n);
            newNode->next = temp;
            prev->next = newNode;
        }

        return head;
    }
};

int main()
{
    cout << "Hello, word!" << endl;
    return 0;
}