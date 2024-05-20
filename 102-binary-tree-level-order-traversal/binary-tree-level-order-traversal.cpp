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

    void preorder(TreeNode* root , vector<vector<int>>& ans , int height){

        if(root==NULL){
            return;
        }
        if(ans.size()-1<height){
            cout<<"Yess"<<height<<" "<<ans.size()<<endl;
            ans.push_back({});
            cout<<"No"<<height<<" "<<ans.size()<<endl;

        }
        ans[height].push_back(root->val);
        preorder(root->left,ans,height+1);
        preorder(root->right,ans,height+1);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans ; 
        if(root==nullptr){
            return ans ;
        }
        ans.push_back({});
        preorder(root,ans,0);
        return ans ;
    }
};