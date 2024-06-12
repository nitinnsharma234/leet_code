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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // normally use bfs 
        queue<TreeNode* > qt;
        
        vector<vector<int>> ans;
            if(root==NULL){
            return ans ;
        }
        qt.push(root);
        int i =0;
        while(!qt.empty()){

            int n = qt.size();
            vector<int> level;
            while(n--){
                TreeNode* head = qt.front();
                qt.pop();
              //  cout<<head->val;
                if(head->left!=NULL){
                    qt.push(head->left);
                }
                if(head->right){
                    qt.push(head->right);
                }
                

                level.push_back(head->val);

            }
            if (i%2){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            i++;
        }
        return ans ;
    }
};