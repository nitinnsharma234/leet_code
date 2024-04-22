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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> qt; 
        qt.push(root);
        vector<double> averages;
        while(!qt.empty()){
            int n =qt.size();
            double sum=0;
            for(int i=0;i<n;i++){
                TreeNode*  top =qt.front();
                qt.pop();
                sum+=top->val;
                if(top->left){
                    qt.push(top->left);
                }
                 if(top->right){
                    qt.push(top->right);
                }
            }
            averages.push_back(sum/n);
        }
        return averages;
    }
};