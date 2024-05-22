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
    TreeNode* util(vector<int>& nums, int low , int high, int & idx)  {
        if (low>high)return NULL;
        int mid=(low+high)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        idx+=1;
        root->left= util(nums,low,mid-1,idx);
        root->right=util(nums,mid+1,high,idx);
        cout<<root->val<<" ";
        return root;
    } 
    
     TreeNode* sortedArrayToBST(vector<int>& nums) {
        int idx=0;
        TreeNode* head =util(nums,0,nums.size()-1,idx);
        return head ;
    }
};