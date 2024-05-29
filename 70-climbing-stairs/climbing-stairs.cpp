class Solution {
public:
    int util (int n,vector<int>& dp){
         if (n==1 or n==0){
            return 1;
        }
        if (dp[n] != -1){
            return dp[n];
        }
        dp[n]= util(n-1,dp)+util(n-2,dp);
        return dp[n];
        
    }
    
    int climbStairs(int n) {
        vector<int>dp(n+1, -1 );
        return util(n,dp);

    }

       
};