class Solution {
public:
bool color (vector<vector<int>> & graph , vector<int>& vis , int i, int col){
            vis[i]=col;
            cout<<i<<" ";

    for(int j=0;j<graph[i].size();j++){
        int val = graph[i][j];
        if (vis[val]==-1){
            if(!color(graph,vis,val,!col))return false;
        }
        else if (vis[val]==col){
            return false;
        }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n,-1);
        for(int i =0;i<n;i++){
            if(vis[i]==-1){
                    if(!color(graph,vis,i,0))return false;
            }
        }
        return true;
    }
};
// color dfs 