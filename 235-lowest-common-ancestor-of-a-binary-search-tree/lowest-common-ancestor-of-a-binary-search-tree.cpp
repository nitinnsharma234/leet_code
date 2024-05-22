/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        if (p==root or q==root){
            return root;
        }
        TreeNode*b =NULL;
        TreeNode*a=NULL;
        if(p->val<=root->val or q->val<=root->val)
        {a =lowestCommonAncestor(root->left,p,q);}
        if(p->val>=root->val or q->val>=root->val)
        {b=lowestCommonAncestor(root->right,p,q);   }
          if (a and b ){
            return root;
        }
        else if (!a and b ){
            return b;
        }
      return a; 
    }
};