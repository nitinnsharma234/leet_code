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
    bool evaluateTree(TreeNode* root) {
        if(root==NULL){
            return false;
        }
        if (root->left ==NULL and root->right ==NULL){

            return  root->val;
        }
        bool a=false, b=false;
        if(root->left)
        { a =evaluateTree(root->left);}
        if(root->right){
        b= evaluateTree(root->right);}
       if(root->val==2){
        return a or b ;
       }
       if(root->val==3)
       {return a and b;}
       return false;
        
    }
};