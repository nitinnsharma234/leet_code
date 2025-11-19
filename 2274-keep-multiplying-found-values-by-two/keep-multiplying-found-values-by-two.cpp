class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int k = original;
        int ans=k;
        for(auto x : nums){
            if(x==k){
                ans=x*2;
                k=ans;
            }
        }
        return k;
    }
};