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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q ; 
        q.push(root);
       
        int depth =0;
        vector<vector<int>> ans ;
         if(!root){
            return ans ;
        }
        while(!q.empty()){
            vector<int> temp;
            int n =q.size();
            while(n--){
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
           if(depth%2) reverse(temp.begin(),temp.end());
            depth++;
            ans.push_back(temp);
        }
        return ans ; 
    }
};