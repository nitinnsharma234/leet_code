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
    int preOrder(TreeNode* root,bool & flag){
        if (!root) return 0 ; 
        if(!flag){
            return 0;
        }

        int left = preOrder(root->left,flag);
        int right = preOrder(root->right,flag);
        if(abs(right-left)>1){
            flag=false;
            return false;
        }

        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        bool flag = true ;

        preOrder(root,flag);  
        return flag ; 
    }
};