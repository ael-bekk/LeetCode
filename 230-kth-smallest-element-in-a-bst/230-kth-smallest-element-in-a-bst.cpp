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
    void Smallest(TreeNode* root, int &k, int &res)
    {
        if (!root)
            return ;
        if (!res)
        {
            Smallest(root->left, k, res);
            if (!--k)
                res = root->val;
            Smallest(root->right, k, res);
        }
    }
    
    int kthSmallest(TreeNode* root, int k)
    {
        int res = 0;
        Smallest(root, k, res);
        return (res);
    }
};