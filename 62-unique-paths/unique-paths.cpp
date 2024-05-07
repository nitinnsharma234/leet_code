class Solution {
public:
int ways (int i, int j , int m ,int n ,vector<vector<int>>& dp){
    if(i==m-1 and j==n-1){        
        return 1 ;
    }
    int a =0,b=0;
    if (i<m and j< n and dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i<m)
   { 
    a=ways(i+1,j,m,n,dp);
    }
   if (j<n){
    b=ways(i,j+1,m,n,dp);
   }
      dp[i][j]=a+b;
   return a +b;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp (m+1,vector<int>(n+1,-1));
       return ways(0,0,m,n,dp); 
    }
};