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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insert(vector<int>& nums, int s, int e)
    {
        if(s > e) return nullptr;
        int mid = s + (e - s)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = insert(nums, s, mid - 1);
        root->right = insert(nums, mid+1, e);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return nullptr;
        ListNode* temp = head;
        vector<int> nums;
        while(temp)
        {
            nums.push_back(temp->val);
            temp = temp->next;
        }
        return insert(nums, 0, nums.size()-1);
    }
};