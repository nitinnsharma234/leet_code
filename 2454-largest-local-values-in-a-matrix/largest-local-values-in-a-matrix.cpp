class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2,vector<int>(n-2,1)) ;
        int max_el =-2;
        for (int i =0;i<n-2;i++)
        {
            for (int j =0;j<n-2;j++){
                    max_el =0;
                   for(int m = i; m<i+3;m++){
                    for(int p=j;p<j+3;p++){
                        max_el = max (max_el, grid[m][p]);
                    }
                   }
                   ans[i][j]=max_el;
            }
        }
        return ans ;
        
    }
};