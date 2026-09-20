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
    TreeNode* build(vector<int>& nums, int st, int end) {
        if (st > end) return nullptr;

        int mx = nums[st];
        int idx = st;
        for (int i = st; i <= end; i++) {
            if (nums[i] > mx) {
                mx = nums[i];
                idx = i;
            }
        }

        TreeNode* root = new TreeNode(mx);
        root->left = build(nums, st, idx - 1);
        root->right = build(nums, idx + 1, end);
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }
};
