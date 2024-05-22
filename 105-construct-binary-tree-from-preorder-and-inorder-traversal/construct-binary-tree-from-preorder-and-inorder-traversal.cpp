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
int findIndex(vector<int>&inorder , int target, int low , int high){
    for(int i=low;i<=high;i++){
        if (inorder[i]==target){
            return i;
        }
    }
    return -1;
}

    TreeNode* create(vector<int>&preorder,vector<int>&inorder,int &  idx, int low , int high ){
        if(idx>=inorder.size()){
            return NULL;
        }
            cout<<idx<<" ";

            if(low>high){
                return NULL;
            }
            TreeNode* head=new TreeNode(preorder[idx]);
            int j =findIndex(inorder,preorder[idx],low,high);
            idx=idx+1;
            head->left=create(preorder,inorder,idx,low ,j-1);
            head->right=create(preorder,inorder,idx,j+1,high);
            return head;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx =0;
        return create(preorder,inorder,idx,0,preorder.size());
     
    }
};