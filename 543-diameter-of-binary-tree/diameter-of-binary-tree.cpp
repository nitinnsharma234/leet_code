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
    int height(TreeNode* root){
        if(!root) return 0; 
        return max (height(root->left),height(root->right))+1;
    }
    int preOrder(TreeNode* root)
    {
        if(!root)return 0;
        int a =preOrder(root->left);
        int b =preOrder(root->right);
        int h1 = height(root->left);
        int h2= height(root->right);
           int ans= max(a,max(b,h1+h2+1));

        return ans ;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        return preOrder(root)-1;
    }
};