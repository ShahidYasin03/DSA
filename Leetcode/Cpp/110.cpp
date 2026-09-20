class Solution
{
public:
    bool b = true;
    int dfs(TreeNode *node)
    {
        if (node == nullptr)
            return 0;
        int l = dfs(node->left);
        int r = dfs(node->right);
        if (abs(l - r) > 1)
            b = false;
        return max(l, r) + 1;
    }
    bool isBalanced(TreeNode *root)
    {
        dfs(root);
        return b;
    }
};