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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(!root) return 0;
        if(!root->left && !root->right) return root->val;
        vector<int>res;
        while(!q.empty()){
            res.clear();
            int sz=q.size();
            while(sz--){
                TreeNode* curr=q.front();
                q.pop();

                if(curr->left)
                {q.push(curr->left);
                res.push_back(curr->left->val);
                }
                if(curr->right)
                {
                res.push_back(curr->right->val);
                    q.push(curr->right);}

            }
        }
        return res[0];
    }
};
