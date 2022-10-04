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
    int l;
    void Smallest(TreeNode* root, int &k, int &res)
    {
        if (!root)
            return ;

        Smallest(root->left, k, res);
        k--;
        if (!k)
            res = root->val;
        Smallest(root->right, k, res);
    }
    
    int kthSmallest(TreeNode* root, int k)
    {
        l = 0;
        int res = 0;
        Smallest(root, k, res);
        return (res);
    }
};