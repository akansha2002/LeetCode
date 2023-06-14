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

// Approach
// Store the Binary Tree in a vector (in sorted form) using Inorder Traversal


class Solution {
public:
    
    void helper(TreeNode* root, vector<int>& ans)
    {
        
        if(root == NULL) return ;
        if(root->left!=NULL) helper(root->left, ans);
        ans.push_back(root->val);
        if(root->right!=NULL) helper(root->right, ans);
        
    }
    
    
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        helper(root, ans);
        int mn=INT_MAX;
        for(int i=0;i<ans.size()-1;i++)
        {
            mn = min(mn, abs(ans[i] - ans[i+1]));
        }
        return mn;
    }
};