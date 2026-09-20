class Solution
{
public:
    void traverse(TreeNode *root, vector<int> &num)
    {
        if (!root)
            return;
        traverse(root->left, num);
        num.push_back(root->val);
        traverse(root->right, num);
    }

    TreeNode *build(const vector<int> &num, int i, int j)
    {
        if (i > j)
            return nullptr;
        int mid = i + (j - i) / 2;
        TreeNode *root = new TreeNode(num[mid]);
        root->left = build(num, i, mid - 1);
        root->right = build(num, mid + 1, j);
        return root;
    }

    TreeNode *deleteNode(TreeNode *root, int key)
    {
        vector<int> num;
        traverse(root, num);

        auto it = find(num.begin(), num.end(), key);
        if (it != num.end())
            num.erase(it);

        return build(num, 0, num.size() - 1);
    }
};


class Solution
{
public:

    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if(!root) return nullptr;
        if(key < root->val)
        {
            root->left = deleteNode(root->left, key);
        }else if(key > root->val)
        {
            root->right = deleteNode(root->right, key);
        }else{
            
        }
    }
};