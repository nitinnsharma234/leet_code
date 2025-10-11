class Solution {
public:
  
    int maximumEnergy(vector<int>& energy, int k) {
  int n = energy.size();
        vector<int> dp(n);
        
        // Base case: last k elements just hold their own value
        for (int i = n - 1; i >= 0; i--) {
            dp[i] = energy[i];
            if (i + k < n) dp[i] += dp[i + k];
        }

        // Find max among all possible starts
        return *max_element(dp.begin(), dp.end());
    
    }
};