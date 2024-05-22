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
int findIndex (int  target , vector<int>&preorder){
    for(int i =0;i<preorder.size();i++){
        if ( target == preorder[i]){
            return i;
        }
    }
    return -1;
}
TreeNode* util (int& i , vector<int>&preorder , vector<int>& inorder , int low , int high){

    if(low>high){
        return NULL;
    }
    
    TreeNode* root = new TreeNode(preorder[i]);
    int mid = findIndex(preorder[i],inorder);
    i+=1;
    root->left=util(i,preorder,inorder,low ,mid-1);
    root->right= util(i,preorder,inorder, mid+1, high);
    return root;

}
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder(preorder.begin(),preorder.end());

        sort(inorder.begin(),inorder.end());
        for(auto x :inorder){
            cout<<x<<" ";
        }
        int idx=0;
        return util(idx,preorder,inorder,0,inorder.size()-1);
    }
};