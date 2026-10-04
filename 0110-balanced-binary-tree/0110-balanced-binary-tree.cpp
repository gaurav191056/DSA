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
    int Height(TreeNode* root, bool &ans)
    {
        if(!root)
        {
            return{};
        }
        int left = Height(root -> left, ans);
        int right = Height(root -> right, ans);

        if(abs(left - right) > 1)
        {
            ans = 0;
        }

        return 1 + max(left, right);
    }
    
    bool isBalanced(TreeNode* root) {
        bool ans = 1;
        Height(root, ans);
        return ans;
    }
};