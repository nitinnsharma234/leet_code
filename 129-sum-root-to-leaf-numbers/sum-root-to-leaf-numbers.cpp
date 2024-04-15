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
    int sumofTree(TreeNode* root , int  sum ){
        if (!root){
            return 0;
        }
        if (root->left==NULL and root->right==NULL){

           
           sum=sum*10+root->val;
            cout<<sum<<" ";
            return sum;
        }
        sum=sum*10+root->val;
        return sumofTree(root->left,sum)+sumofTree(root->right,sum);
    }
public:
    int sumNumbers(TreeNode* root) {
        int sum=0;
       return  sumofTree(root,sum);
    }
};