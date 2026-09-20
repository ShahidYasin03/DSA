#include <iostream>
#include <vector>
using namespace std;  


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


//Solution

class Solution {
public:
    void inorder(vector<int> &x, TreeNode* root)
    {
        if(root == nullptr) return;
        inorder(x, root->left);
        x.push_back(root->val);
        inorder(x, root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(res, root);
        return res;
    }
};


// Definition for a binary tree node.


int main() {
    Solution sol;

    // Test case 1: Tree with nodes 1, 2, 3
    TreeNode* root1 = new TreeNode(2, new TreeNode(1), new TreeNode(3));
    vector<int> res1 = sol.inorderTraversal(root1);
    cout << "Test case 1: ";
    for (int v : res1) cout << v << " ";
    cout << endl;

    // Test case 2: Tree with single node
    TreeNode* root2 = new TreeNode(5);
    vector<int> res2 = sol.inorderTraversal(root2);
    cout << "Test case 2: ";
    for (int v : res2) cout << v << " ";
    cout << endl;

    // Clean up
    delete root1->left;
    delete root1->right;
    delete root1;
    delete root2;

    return 0;
}