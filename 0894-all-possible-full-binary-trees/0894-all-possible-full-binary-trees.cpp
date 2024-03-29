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
    
    
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> result;

        if(n == 1){
            TreeNode* root = new TreeNode(0);
            result.push_back(root);
            return result;
        }

        for(int i=1; i<n; i+=2){
            vector<TreeNode*> leftAllFBT = allPossibleFBT(i);
            vector<TreeNode*> rightAllFBT = allPossibleFBT(n-i-1);
            for(auto &l: leftAllFBT){
                for(auto &r: rightAllFBT){
                    TreeNode* root = new TreeNode(0);
                    root->left = l;
                    root->right = r;
                    result.push_back(root);
                }
            }
        }
        return result;
    }
};