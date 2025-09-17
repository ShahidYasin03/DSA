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

///-----------------------------------sol 1----------------------------
// class Solution
// {
// public:
//     void inorder(vector<int> &num, TreeNode *root)
//     {
//         if (!root)
//             return;
//         inorder(num, root->left);
//         num.push_back(root->val);
//         inorder(num, root->right);
//     }
//     TreeNode *build(vector<int> num, int i)
//     {
//         if (i == num.size())
//             return nullptr;
//         TreeNode *root = new TreeNode(num[i++]);
//         root->right = build(num, i);
//         return root;
//     }
//     TreeNode *increasingBST(TreeNode *root)
//     {
//         vector<int> num;
//         inorder(num, root);
//         return build(num, 0);
//     }
// };

// -------------------------- Solution 2 -------------------------------

class Solution
{
public:
    void inorder(TreeNode *&prev, TreeNode *root)
    {
        if (!root)
            return;
        inorder(prev, root->left);
        prev->right = new TreeNode(root->val);
        prev = prev->right;
        inorder(prev, root->right);
    }

    TreeNode *increasingBST(TreeNode *root)
    {
        TreeNode *dummy = new TreeNode(-1);
        TreeNode *prev = dummy;
        inorder(prev, root);
        return dummy->right;
    }
};