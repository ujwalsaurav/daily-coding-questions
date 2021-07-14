//https://leetcode.com/problems/symmetric-tree/

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
    bool isSymm(TreeNode* leftNode,TreeNode* rightNode)
    {
        if(leftNode==NULL && rightNode==NULL)
            return true;
        else if((leftNode==NULL || rightNode==NULL))
            return false;
        return (leftNode->val==rightNode->val) 
                && isSymm(leftNode->left,rightNode->right)
                && isSymm(leftNode->right,rightNode->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        
        return isSymm(root->left,root->right);
        
    }
};