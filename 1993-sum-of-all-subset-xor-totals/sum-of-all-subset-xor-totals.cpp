class Solution {
public:

    void subsets(vector<int>& nums , int idx , int & ans , int xorResult){
        if (idx==nums.size()){
            ans+=xorResult;
            return ;
        }

        subsets(nums,idx+1,ans, xorResult^nums[idx]);
        subsets(nums,idx+1,ans ,xorResult);
    }

    int subsetXORSum(vector<int>& nums) {
        int ans =0;
        subsets(nums,0,ans,0);
        return ans ;
    }
};