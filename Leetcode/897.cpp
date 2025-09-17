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
class Solution
{
public:
    void inorder(vector<int> &num, TreeNode *root)
    {
        if (!root)
            return;
        inorder(num, root->left);
        num.push_back(root->val);
        inorder(num, root->right);
    }
    TreeNode *build(vector<int> num, int i)
    {
        if (i == num.size())
            return nullptr;
        TreeNode *root = new TreeNode(num[i++]);
        root->right = build(num, i);
        return root;
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        vector<int> num;
        inorder(num, root);
        return build(num, 0);
    }
};