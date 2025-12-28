class Solution {
public:
    int count (vector<vector<int>>& grid,int i , int j){
        if(i<0 || j<0) return 0 ;
        if(grid[i][j]>=0) return 0 ; 
        grid[i][j]=+1;
        int a= count(grid,i-1,j);
        int b=count(grid,i,j-1);

        return a + b + 1;
    }
    int countNegatives(vector<vector<int>>& grid) {
            int row = grid.size()-1;
            int col = grid[0].size()-1;
            
            if(grid[row][col]>=0) return 0;
           return count(grid,row,col);
    }
};