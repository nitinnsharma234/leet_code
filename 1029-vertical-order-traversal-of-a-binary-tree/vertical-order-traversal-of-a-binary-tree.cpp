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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode* , int >> q ;
        map<int,map<int,multiset<int>>> mp ;
        q.push({root,0});
        int depth =1;
        while(!q.empty()){
                int n =q.size(); 
                while(n--){
                    TreeNode* curr = q.front().first;
                    int hd= q.front().second;
                    q.pop();
                   mp[hd][depth].insert(curr->val);
                    if(curr->left){
                            q.push({curr->left,hd-1});
                    }
                    if (curr->right){
                             q.push({curr->right,hd+1});
                    }
                }
                depth++;
        }
        vector<vector<int>> ans;

        for (auto x: mp){

            vector<int> temp={} ; 
            for (auto y : x.second){
                temp.insert(temp.end(),y.second.begin(),y.second.end());
            }
            ans.push_back(temp);

        }
        return ans ;
    }
};