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
    bool preOrder(TreeNode* a , TreeNode*b){
       
        if (!a or !b ){
            return a==b;
        }
         if(a->val!=b->val){
            return false;
        }
        return preOrder(a->left,b->right) and  preOrder(a->right,b->left);
    }
    bool isSymmetric(TreeNode* root) {
    
        return preOrder(root,root); 
    }
};