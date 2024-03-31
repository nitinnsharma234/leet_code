class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
         long res = 0;
        int start = -1, minStart = -1, maxStart = -1;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num < minK || num > maxK) {
                start = i;
            }
            if (num == minK) {
                minStart = i;
            }
            if (num == maxK) {
                maxStart = i;
            }

             res += max(0,min(minStart, maxStart) - start );
            //  cout<<i<<"->"<<res<<endl;
        }
        return res;
    }
};