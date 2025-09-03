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
    void preOrder(vector<int>& n, TreeNode* root)
    {
        if(!root) return;
        n.push_back(root->val);
        preOrder(n, root->left);
        preOrder(n, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> num;
        preOrder(num, root);
        return num;
    }
};