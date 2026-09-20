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
    TreeNode *build(vector<int> &num, int s, int e)
    {
        if (s > e)
            return nullptr;

        int mid = s + (e - s) / 2;
        TreeNode *root = new TreeNode(num[mid]);
        root->left = build(num, s, mid - 1);
        root->right = build(num, mid + 1, e);
        return root;
    }
    TreeNode *balanceBST(TreeNode *root)
    {
        vector<int> n;
        inorder(n, root);
        TreeNode *newRoot = build(n, 0, n.size() - 1);
        return newRoot;
    }
};