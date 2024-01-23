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

    void dfs(TreeNode* root,int sum,bool& res){
        if(!root) return;
        cout<<sum<<" ";

        if(sum == root->val && !root->left && !root->right){
            res=true;
            return;
        } 

        dfs(root->left,sum-root->val,res);
        //sum+=root->val;
        dfs(root->right,sum-root->val,res);

    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        bool res=false;
        dfs(root,targetSum,res);
        return res;
    }
};
