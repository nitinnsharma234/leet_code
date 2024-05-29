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
        // bottom up approach 
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        return util(n,dp);

    }

       
};