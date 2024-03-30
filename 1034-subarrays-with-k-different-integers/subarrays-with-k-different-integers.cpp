class Solution {
public:
int slidingWindowAtMost(vector<int>& nums, int k){
    map<int,int>mp;
    int freq=0;
    int s=0,ans=0;
    for(int i=0;i<nums.size();i++){

        mp[nums[i]]++;
        freq=mp.size();
        while(freq>k){
            mp[nums[s]]--;
            if(mp[nums[s]]==0){
                mp.erase(nums[s]);
            }
            s++;
            freq=mp.size();
        }
        ans+=(i-s+1);
    }
    return ans;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return slidingWindowAtMost(nums,k)-slidingWindowAtMost(nums,k-1);
    }
};