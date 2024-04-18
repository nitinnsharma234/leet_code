class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
      //only one island exists 
      //
      int row = grid.size(), col =grid[0].size();
      int sum =0;
      for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            //check up 
            if(grid[i][j]==0){
                continue;
            }
            int rect=4;
            if(i>0 and grid[i-1][j]==1){
                rect--;
            }
            if(i<row-1 and grid[i+1][j]==1){
                rect--;
            }
            if(j>0 and grid[i][j-1]==1){
                rect--;
            }if(j<col-1 and grid[i][j+1]==1){
                rect--;
            }
            sum+=rect;
            // cout<<rect<<" "<<i<<" "<<j<<" "<<endl;
        }
      }
      return sum;
    }
};