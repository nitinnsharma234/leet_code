class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int total = n * m;
        const int MOD = 12345;
        
        vector<vector<int>> ans(n, vector<int>(m));
        
        // prefix[k] = product of first k elements (in row-major order), mod 12345
        // suffix[k] = product of last (total-k) elements
        vector<long long> prefix(total + 1, 1), suffix(total + 1, 1);
        
        // Build prefix
        for (int k = 0; k < total; k++) {
            int i = k / m, j = k % m;
            prefix[k + 1] = (prefix[k] * (grid[i][j] % MOD)) % MOD;
        }
        
        // Build suffix
        for (int k = total - 1; k >= 0; k--) {
            int i = k / m, j = k % m;
            suffix[k] = (suffix[k + 1] * (grid[i][j] % MOD)) % MOD;
        }
        
        // ans[i][j] = prefix[k] * suffix[k+1], where k = i*m + j
        for (int k = 0; k < total; k++) {
            int i = k / m, j = k % m;
            ans[i][j] = (prefix[k] * suffix[k + 1]) % MOD;
        }
        
        return ans;
    }
};