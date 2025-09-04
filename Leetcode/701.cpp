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
    TreeNode *insertIntoBST(TreeNode *root, int v)
    {
        TreeNode *newNode = new TreeNode(v);
        if (!root)
        {
            return newNode;
        }
        if (root->val > v)
        {
            root->left = insertIntoBST(root->left, v);
        }
        else
        {
            root->right = insertIntoBST(root->right, v);
        }
        return root;
    }
};