#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//-------------------------------------------------------- Actual Solution ----------------------------------------------------------------

class Solution
{
public:
    TreeNode *insert(vector<int> &nums, int s, int e)
    {
        if (s > e)
            return nullptr;
        int mid = s + (e - s) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = insert(nums, s, mid - 1);
        root->right = insert(nums, mid + 1, e);
        return root;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return insert(nums, 0, nums.size() - 1);
    }
};

//-------------------------------------------------------- Solution End --------------------------------------------------------------------


// Helper function to print tree in level order
void printLevelOrder(TreeNode *root)
{
    if (!root)
    {
        cout << "[]\n";
        return;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        if (node)
        {
            cout << node->val << " ";
            q.push(node->left);
            q.push(node->right);
        }
        else
        {
            cout << "null ";
        }
    }
    cout << endl;
}

int main()
{
    Solution sol;

    // Test case 1
    vector<int> nums1 = {-10, -3, 0, 5, 9};
    TreeNode *bst1 = sol.sortedArrayToBST(nums1);
    cout << "Test case 1 (Input: {-10, -3, 0, 5, 9}): ";
    printLevelOrder(bst1);

    // Test case 2
    vector<int> nums2 = {1, 3};
    TreeNode *bst2 = sol.sortedArrayToBST(nums2);
    cout << "Test case 2 (Input: {1, 3}): ";
    printLevelOrder(bst2);

    return 0;
}
