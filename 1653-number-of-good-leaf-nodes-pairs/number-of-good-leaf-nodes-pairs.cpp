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
vector<int> postOrder (TreeNode * root , int distance  ){
    if (!root){
         return vector<int>(12);
    }
    else if (!root->left and !root->right) {
        vector<int> current(12);
        current[0]=1;
        return current ; 
    }
    vector<int> left = postOrder (root->left,distance);
    vector<int> right = postOrder(root->right,distance);
     vector<int> current(12);
    //
       for (int i = 0; i < 10; i++) {
            current[i + 1] = left[i] + right[i];
        }
    current[11]+=(left[11]+right[11]);
    for (int i =0 ;i<=distance;i++){
        for (int j=0 ; j<= distance ;j++){
            if (2+i+j<=distance){
                current[11]+=left[i]*right[j];
            }
        }
    }
    return current ;

     
}
    int countPairs(TreeNode* root, int distance) {

        // path of leaf nodes 
        return postOrder(root,distance)[11];
    }
};
// shortest path --> b/w two leaf nodes ---> and if wo less than distance then good 
// path could be intensified 
// leaf nodes calculate

