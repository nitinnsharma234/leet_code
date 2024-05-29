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
       int i1 =1;
        int i2=1;
        int ans=1;
        for(int i=2;i<=n;i++){
           // dp[i]=dp[i-1]+dp[i-2];
            ans =i1+i2;
            
            i2=i1;
            i1=ans;
        }
        return ans;
        return util(n,dp);

    }

       
};