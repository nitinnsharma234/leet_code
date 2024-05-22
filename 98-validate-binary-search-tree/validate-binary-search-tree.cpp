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
    bool isValidBST(TreeNode* root) {

            queue<pair<TreeNode*,pair<long,long> >> q ; 
            q.push({root,{LONG_MIN,LONG_MAX}});
            while(!q.empty()){
                int n = q.size();
                TreeNode* curr = q.front().first;
                long x =q.front().second.first;//INT_MIN
                long y = q.front().second.second;//5
                q.pop();

                //cout<<x<<" "<<y<<endl;
                if (!(curr->val>x and curr->val<y)){
                    return false;
                }
                if (curr->left){
                    q.push({curr->left,{x,curr->val}});
                }
                if (curr->right){
                    q.push({curr->right,{curr->val, y }});
                }
            }
            return true;
    }
};