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
    bool isEvenOddTree(TreeNode* root) {
        bool isEven=true;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int sz=q.size();
            vector<int>temp;
            while(sz--){
                TreeNode* curr = q.front();
                temp.push_back(curr->val);
                q.pop();

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
             int n=temp.size();

            if(isEven){
                if(temp[0]%2 ==0  )
                    return false;
                for(int i=1;i<n;i++){
                    if(temp[i]%2 ==0  )
                    return false;
                    if(temp[i-1] >= temp[i])
                   { 
                       return false;
                    }
                }
            }
            else {
                  if(temp[0]%2 !=0  )
                    return false;
                for(int i=1;i<n;i++){
                    if(temp[i]%2 !=0  )
                    return false;
                    if(temp[i-1] <= temp[i])
                    {   
                        return false;
                    }                
                }

            }
            isEven=!isEven;
        }



        return true;
    }
};
