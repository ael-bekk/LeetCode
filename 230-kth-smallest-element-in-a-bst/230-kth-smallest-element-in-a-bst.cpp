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
    int Smallest(TreeNode* root, int &k)
    {
        if (!root)
            return (0);
        int res = Smallest(root->left, k);
        if (!--k)
            return (root->val);
        return (res + Smallest(root->right, k));
    }

    int kthSmallest(TreeNode* root, int k)
    {
        return (Smallest(root, k));
    }
};