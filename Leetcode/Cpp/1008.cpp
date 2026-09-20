class Solution
{
public:
    TreeNode *build(vector<int> &pre, int &i, int bound)
    {
        if (i == pre.size() || pre[i] > bound)
            return nullptr;
        TreeNode *root = new TreeNode(pre[i++]);
        root->left = build(pre, i, root->val);
        root->right = build(pre, i, bound);
        return root;
    }

    TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        int i = 0;
        return build(preorder, i, INT_MAX);
    }
};