class Solution {
public:
    void dfs (vector<vector<int>>& isConnected ,vector<int>&visited ,int curr){
        visited[curr]=1;
        for(int i=0;i<isConnected[curr].size();i++){
            if(!visited[i] && isConnected[curr][i]==1){
        dfs(isConnected,visited,i);
            }
          
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0,n=isConnected.size();
        vector<int>visited(n,0);
       for(int i=0;i<isConnected.size();i++){
        if(!visited[i])
       { dfs(isConnected,visited,i);
        count++;
       }
       }
       return count;
        

    }
};