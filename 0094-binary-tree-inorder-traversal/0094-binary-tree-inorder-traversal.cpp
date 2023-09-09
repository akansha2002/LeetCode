
class Solution {
public:
    
    vector<int> inorderTraversal(TreeNode* root) 
    {
        stack<TreeNode*> s;
        vector<int> ans;

        while(true) // 
        {
            if(root!= NULL ) //  left
            {
                s.push(root);
                root=root->left;
            }
            else            //
            {
                if(s.empty()) //
                {
                    break;
                }
                root=s.top();
                s.pop();
                ans.push_back(root->val);  // node
                root=root->right;          // right
            }
        }
        return ans;
    }
};

