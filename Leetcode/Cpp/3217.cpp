#include <iostream>
#include <vector>
#include <unordered_map>
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> mapp;
        int n = nums.size();
        for(int i = 0; i< n; i++)
        {
            mapp[nums[i]]++;
        }
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp)
        {
            int value = temp->val;
            if(mapp.find(value) != mapp.end() && mapp[value] > 0)
            {
                if(temp == head && temp->next == nullptr)
                {
                    //case 1 single node
                    head = nullptr;
                    temp = nullptr;
                }else if(temp == head){
                    head = temp->next;
                    delete temp;
                    temp = head;
                }else if(temp->next == nullptr)
                {
                    //case 2 lastNode
                    temp = prev;
                    temp->next = nullptr;
                }else {
                // case 3 middle node 
                    prev->next = temp->next;
                    delete temp;
                    temp = prev; 
                }
            }else{
            prev = temp;
            temp = temp->next;
            }
        }

        return head;
    }
};


int main()
{
    cout << "Hello, word!" << endl;
    return 0;
}