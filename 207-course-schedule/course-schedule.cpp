class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        if(pre.size()<=0){
            return true;
        }
        vector<vector<int>> adj(n,vector<int>());
        vector<int>degree(n,0);
        for ( int i =0;i<pre.size();i++)
        {   
           int a = pre[i][0];
           int b = pre[i][1];
           adj[b].push_back(a);
            degree[a]++;
        }
     
        queue<int> q ; 
        for (int i =0;i<n;i++){
                cout<<i<<" ";
            
            if (degree[i]==0){
                q.push(i);
            }
        }
            while(!q.empty()){
                int curr= q.front();
                q.pop();
                n--;
                for (auto next: adj[curr])
            {if (--degree[next] == 0) {
                q.push(next);
                
                }}
            }
        
        cout<<n<<" ";
        return n==0;

    }

  
};

// detect wether a cycle exists or not 