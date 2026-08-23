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
    // Time complexity: O(N)
    // Space complexity: O(H) 
    // (If this is balanced tree, then O(logN))
    // (If this is skewed tree, then call stack is the worst case as O(N))
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
