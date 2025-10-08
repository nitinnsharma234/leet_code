class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0) ;
        bool isPositive =true;
        int ptr=0;
        for (int i =0;i<nums.size();i++){

            if(isPositive&& nums[i]>=0){
                ans[ptr]=nums[i];
                ptr+=2;
            }
            else if(!isPositive && nums[i]<0){
                ans[ptr]=nums[i];
                ptr+=2;
            }
        }
        ptr=1;

        for (int i=0;i<nums.size();i++){

             if(isPositive&& nums[i]<0){
                ans[ptr]=nums[i];
                ptr+=2;
            }
            else if(!isPositive && nums[i]>=0){
                ans[ptr]=nums[i];
                ptr+=2;
            }
        }
        return ans;
    }
};
// brute force 