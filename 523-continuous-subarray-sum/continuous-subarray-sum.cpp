class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefixSum = 0; 
        map<int,int> mp ;
        mp[0]=-1;
        for (int i =0;i<nums.size();i++){
            prefixSum = (prefixSum+nums[i])%k;

            if (mp.find(prefixSum)!=mp.end()){
                if (i-mp[prefixSum]>1){
                    return true;
                }
            }
            else{
                mp[prefixSum]=i;
            }
        }
        return false;
    }
};