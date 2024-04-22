/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        // bfs 
        vector<vector<int>>ans ;
        if(!root){
            return ans;
        }
        queue<Node*>qt;
        qt.push(root);
        while(!qt.empty()){
            //top
            vector<int> level;
            int n=qt.size();
            for(int i =0;i<n;i++)
          {  Node* top = qt.front();
            qt.pop();
            vector<Node*> vt = top->children;
            for(auto x : vt){
                // cout<<x->val<<" ";x
                qt.push(x);
            }
            level.push_back(top->val);
            
}
ans.push_back(level);
        }
        return ans ;
    }
};