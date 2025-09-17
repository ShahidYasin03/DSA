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
    void preOrder(TreeNode *root, string path, int &ans)
    {
        if (!root)
            return;

        path.push_back(root->val + '0');

        if (!root->left && !root->right)
        {
            ans += toDeci(path);
            return;
        }

        preOrder(root->left, path, ans);
        preOrder(root->right, path, ans);
    }
    int toDeci(string s)
    {
        int value = 0;
        for (char c : s)
        {
            value = value * 2 + (c - '0');
        }
        return value;
    }
    int sumRootToLeaf(TreeNode *root)
    {
        int ans = 0;
        string temp = "";
        preOrder(root, temp, ans);
        return ans;
    }
};