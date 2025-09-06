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

// Mine----------------
// class Solution {
// public:
//     void inOrder(vector<int>& num, TreeNode* root)
//     {
//         if(!root) return;
//         inOrder(num, root->left);
//         num.push_back(root->val);
//         inOrder(num, root->right);
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> num;
//         inOrder(num, root);
//         return num[k-1];
//     }
// };

// GPT

class Solution
{
public:
    void inorder(TreeNode *root, int &k, int &ans)
    {
        if (!root)
            return;
        inorder(root->left, k, ans);
        k--;
        if (k == 0)
        {
            ans = root->val;
            return;
        }
        inorder(root->right, k, ans);
    }

    int kthSmallest(TreeNode *root, int k)
    {
        int ans = -1;
        inorder(root, k, ans);
        return ans;
    }
};