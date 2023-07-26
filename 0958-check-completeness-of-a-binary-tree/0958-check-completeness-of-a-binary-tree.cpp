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
// INTUTION - 
// if right child is existing then left cchild should also exist for a complete binary tree, or else right child should also not exist

class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        while(q.size()>0)
        {
            TreeNode* front = q.front();
            q.pop();

            if(front == NULL){
                while(q.size()){
                    TreeNode* x = q.front();
                    if(x != NULL) return false;
                    q.pop();
                }
            }
            if(front!=NULL)q.push(front->left);
            if(front!=NULL)q.push(front->right);
        }
        return true;
    }
};