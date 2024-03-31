class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
         long res = 0;
        bool minFound = false, maxFound = false;
        int start = -1, minStart = -1, maxStart = -1;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num < minK || num > maxK) {
                minFound = false;
                maxFound = false;
                start = i;
            }
            if (num == minK) {
                minFound = true;
                minStart = i;
            }
            if (num == maxK) {
                maxFound = true;
                maxStart = i;
            }
            if (minFound && maxFound) {
                // res += (min(minStart, maxStart) - start + 1);
                // cout<<(1 - start + 1);
                // cout<<i<<"->"<<res<<endl;
            }
             res += max(0,min(minStart, maxStart) - start );
             cout<<i<<"->"<<res<<endl;
        }
        return res;
    }
};