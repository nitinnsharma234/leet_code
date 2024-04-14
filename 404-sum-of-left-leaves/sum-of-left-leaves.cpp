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
int leftSum(TreeNode* root , bool isLeft ){
    if (!root){
        return 0;
    }
    if(!root->left and !root->right){
        return isLeft?root->val:0;
    }
    return leftSum(root->left,true)+leftSum(root->right,false);
}
    int sumOfLeftLeaves(TreeNode* root) {
        queue<pair<TreeNode*, bool>> qt ; 
        int sum =0;
        qt.push({root,false});
        while(!qt.empty()){
            pair<TreeNode* , bool> head = qt.front();
            qt.pop();
            if (head.first->left){
                qt.push({head.first->left,true});
            }
             if (head.first->right){
                qt.push({head.first->right,false});
            }
            if(!head.first->left and !head.first->right){
                //i.e it's a leaf node 
                sum+=head.second?head.first->val:0;
            }

        }
        return sum;
    //    return  leftSum(root,false);
    }
};
// space complexity -> 0(H) -> height of the tree
// time complexity  -> 0(N) -> no. of nodes in the tree