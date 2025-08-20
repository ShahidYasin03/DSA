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
    void sumi(TreeNode* root, int& sume)
    {
        if(!root) return;
        if(root->left)
        {
            TreeNode* l = root->left;
            if(!l->left && !l->right) {
                sume += root->left->val;
            }
        }
        sumi(root->left, sume);
        sumi(root->right, sume); 

    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sume = 0;
        sumi(root, sume);
        return sume;
    }
};