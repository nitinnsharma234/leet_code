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
    TreeNode* findLCA(TreeNode* root, int startValue , int destValue ){
    if (!root ) return root;
    if (root->val == startValue || root -> val == destValue) return root;
    TreeNode * a = findLCA(root->left, startValue , destValue);
    TreeNode * b =findLCA(root->right, startValue, destValue);
    


    if(a and b){
        return root;
    }
    else if (!a){
        return b ;
    }
    return a ;
}

    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* ancestor =findLCA(root,startValue, destValue);
        string pre;
    string post;
        getPath(ancestor,pre,startValue);
        getPath(ancestor,post,destValue);

        string ans ="";
        for(int i=0;i<pre.length();i++){
            ans+='U';
        }
        for(int i=0;i<post.length();i++){
            ans+=post[i];
        }
        return ans;
    }
    bool getPath(TreeNode* node, string & path , int targetValue){
         if (node == nullptr) return false;

        if (node->val == targetValue) return true;

        // Try left subtree
        path.push_back('L');
        if (getPath(node->left, path, targetValue)) {
            return true;
        }
        path.pop_back();  // Remove last character

        // Try right subtree
        path.push_back('R');
        if (getPath(node->right, path, targetValue)) {
            return true;
        }
        path.pop_back();  // Remove last character

        return false;
        
    }
};