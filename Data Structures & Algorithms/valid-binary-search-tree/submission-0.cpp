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
    bool validate(TreeNode* node, long long max_val, long long min_val)
    {
        if(node==nullptr)
        {
            return true;
        }
        if(node->val>=max_val || node->val<=min_val)
        {
            return false;
        }

        return validate(node->right, max_val, node->val) && validate(node->left, node->val, min_val);

    }
    bool isValidBST(TreeNode* root) {

        return validate(root, LONG_MAX, LONG_MIN);
    }
};
