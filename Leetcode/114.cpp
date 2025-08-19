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
    void preOrder(TreeNode* root, TreeNode*& temp) {
        if (!root) return;

        TreeNode* node = new TreeNode(root->val);
        temp->right = node;
        temp = temp->right; 

        preOrder(root->left, temp);
        preOrder(root->right, temp);
    }

    void flatten(TreeNode* root) {
        if (!root) return;

        TreeNode* dummy = new TreeNode(-1);
        TreeNode* temp = dummy;
        preOrder(root, temp);

        root->left = nullptr;
        root->right = dummy->right->right; 
    }
};
