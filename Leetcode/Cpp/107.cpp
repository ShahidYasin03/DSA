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
// class Solution {
// public:
//     vector<vector<int>> levelOrderBottom(TreeNode* root) {
//         vector<vector<int>> ans;
//         deque<vector<int>> deku;
//         if(!root) return ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty())
//         {
//             int s = q.size();
//             vector<int> level;
//             for(int i = 0; i < s; i++)
//             {
//                 TreeNode* temp = q.front();
//                 q.pop();
//                 level.push_back(temp->val);
//                 if(temp->left) q.push(temp->left);
//                 if(temp->right) q.push(temp->right);
//             }
//             deku.push_front(level);
//         }
//         for(auto i: deku)
//         {
//             ans.push_back(i);
//         }
//         return ans;
//     }
// };

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

class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int s = q.size();
            vector<int> level;
            for (int i = 0; i < s; i++)
            {
                TreeNode *temp = q.front();
                q.pop();
                level.push_back(temp->val);
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
            }
            ans.push_back(level);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    vector<int> values1 = {3, 9, -1, -1, 20, 15, -1, -1, 7, -1, -1};
    idx = -1;
    TreeNode *root1 = buildTree(values1);
    Solution sol;
    auto res1 = sol.levelOrderBottom(root1);

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
    auto res2 = sol.levelOrderBottom(root2);

    cout << "Test 2:\n";
    for (auto &level : res2)
    {
        for (int x : level)
            cout << x << " ";
        cout << endl;
    }
}
