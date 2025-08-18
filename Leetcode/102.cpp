#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

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


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

static int idx = -1;

TreeNode *buildTree(vector<int> values)
{
    idx++;
    if (values[idx] == -1)
        return nullptr;
    TreeNode *root = new TreeNode(values[idx]);
    root->left = buildTree(values);
    root->right = buildTree(values);
    return root;
}

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int sze = q.size();
            vector<int> x;
            for (int i = 0; i < sze; i++) {
                TreeNode* curr = q.front();
                q.pop();
                x.push_back(curr->val);
                if (curr->left != nullptr) {
                    q.push(curr->left);
                }
                if (curr->right != nullptr) {
                    q.push(curr->right);
                }
            }
            ans.push_back(x);
        }
        return ans;
    }
};

int main()
{
    vector<int> values1 = {3, 9, -1, -1, 20, 15, -1, -1, 7, -1, -1};
    idx = -1;
    TreeNode *root1 = buildTree(values1);
    Solution sol;
    auto res1 = sol.levelOrder(root1);

    cout << "Test 1:\n";
    for (auto &level : res1)
    {
        for (int x : level)
            cout << x << " ";
        cout << endl;
    }

    vector<int> values2 = {1, 2, 3, 4, -1, -1, -1, -1, -1};
    idx = -1;
    TreeNode *root2 = buildTree(values2);
    auto res2 = sol.levelOrder(root2);

    cout << "Test 2:\n";
    for (auto &level : res2)
    {
        for (int x : level)
            cout << x << " ";
        cout << endl;
    }
}
