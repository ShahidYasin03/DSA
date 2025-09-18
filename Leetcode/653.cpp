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
    void toNum(vector<int> &num, TreeNode *root)
    {
        if (!root)
            return;
        toNum(num, root->left);
        num.push_back(root->val);
        toNum(num, root->right);
    }
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> num;
        toNum(num, root);
        int i = 0, j = num.size() - 1;
        while (i < j)
        {
            if (num[i] + num[j] == k)
            {
                return true;
            }
            else if (num[i] + num[j] < k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return false;
    }
};