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

    int Height(TreeNode* root, int &ans)
    {
        if(!root)
            return 0;

        if(root->left && !root->left->left && !root->left->right)
        {
            ans += root->left->val;
        }

        Height(root->left, ans);
        Height(root->right, ans);

        return 0;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        Height(root, ans);
        return ans;
    }
};