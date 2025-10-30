class Solution {
public:
    int minNumberOperations(vector<int>& arr) {
        int ans = 0;
        int firstTop = false;
        int prev = 0;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[i - 1]) {
                // falling element detected

                ans += abs(arr[i - 1] - prev);
                prev = arr[i];
            }
        }
        ans += abs(arr[arr.size() - 1] - prev);
        return ans;
    }
};