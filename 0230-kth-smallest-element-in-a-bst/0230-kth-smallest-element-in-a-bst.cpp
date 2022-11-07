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
    int res = 0;
    void Smallest(TreeNode* root, int &k)
    {
        if (!root)
            return ;
        Smallest(root->left, k);
        if (!--k)
            res = root->val;
        Smallest(root->right, k);
    }
    
    int kthSmallest(TreeNode* root, int k)
    {
        Smallest(root, k);
        return (res);
    }
};