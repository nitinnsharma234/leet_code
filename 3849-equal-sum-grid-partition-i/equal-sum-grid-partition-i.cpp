class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // ── Total sum ──────────────────────────────────────────────
        long long total = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                total += grid[i][j];

        // ── Horizontal cut: after row i ────────────────────────────
        // Top-half sum == bottom-half sum  →  topSum * 2 == total
        long long rowSum = 0;
        for (int i = 0; i < m - 1; i++) {        // last row can't be cut after
            for (int j = 0; j < n; j++)
                rowSum += grid[i][j];
            if (rowSum * 2 == total) return true;
        }

        // ── Vertical cut: after column j ───────────────────────────
        long long colSum = 0;
        for (int j = 0; j < n - 1; j++) {        // last col can't be cut after
            for (int i = 0; i < m; i++)
                colSum += grid[i][j];
            if (colSum * 2 == total) return true;
        }

        return false;
    }
};
