class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans =INT_MIN;
        for (int i =1; i<=nums.size();i++){
            ans=max(ans,abs(nums[i%nums.size()]-nums[i-1]));
        }
        return ans;
    }
};