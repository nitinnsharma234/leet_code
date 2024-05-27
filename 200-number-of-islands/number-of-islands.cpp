class Solution {
public:

int depth =0;
    void dfs(vector<vector<char>>& grid, vector<vector<int>>&vis, int r , int c ){
        int row = grid.size(); 
        int col = grid[0].size();
        //cout<<y1<<" "<<x1<<" "<<endl;
       
        vector<int> x ={1,-1,0,0};
        vector<int> y= {0,0,1,-1};
        for(int i =0;i<4;i++){
            int newX= c+x[i];
            int newY=r+y[i];
            //--> yeh out of range 
            // cout<<newX<<" "<<newY<<endl;
             if((newY<0 or newY>=row) or (newX<0 or newX>=col)){
                // cout<<"Yes"<<endl;
                         continue ;
         }
            // if that new one is zero 
            if(grid[newY][newX]=='0' or vis[newY][newX]==1){
            //    cout<<"Nai"<<endl;
                continue ;
            }
            vis[newY][newX]=1;
            depth++;
            dfs(grid,vis,newY,newX);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size(); 
        int col = grid[0].size();
        vector<vector<int>> vis (row,vector<int>(col,0)); 
        int count =0;
        for(int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                if (!vis[i][j] and grid[i][j]=='1'){
                    vis[i][j]=1;
                    dfs(grid, vis, i , j);
                    count++;
                    // cout<<depth<<" ";
                }
            }
        }
        return count;
    }
};