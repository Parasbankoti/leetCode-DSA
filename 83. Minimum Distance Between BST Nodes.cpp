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

    void dfs(TreeNode* root,vector<int>& res){
        if(!root) return;
        res.push_back(root->val);

        dfs(root->left,res);
        dfs(root->right,res);
    }

    int minDiffInBST(TreeNode* root) {
        vector<int>res;
        dfs(root,res);
        sort(res.begin(),res.end());
        int mini=INT_MAX;
        for(int i=1;i<res.size();i++){
            int diff=res[i]-res[i-1];
            mini=min(mini,diff);
        }
        return mini;
    }
};
