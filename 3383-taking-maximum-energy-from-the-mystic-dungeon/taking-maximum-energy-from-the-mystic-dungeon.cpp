class Solution {
public:
  
    int maximumEnergy(vector<int>& energy, int k) {
  int n = energy.size();
        vector<int> dp(n);
        int ans =INT_MIN;
        // Base case: last k elements just hold their own value
        for (int i = n - 1; i >= 0; i--) {
            dp[i] = energy[i];
            if (i + k < n) dp[i] += dp[i + k];

            ans=max(ans,dp[i]);
        }

        // Find max among all possible starts
        return ans;
    
    }
};