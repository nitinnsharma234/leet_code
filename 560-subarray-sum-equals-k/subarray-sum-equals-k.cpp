class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       mp[0]=1;
       int count =0;
       int sum =0;
       for(int i=0;i<nums.size();i++){
            // find for target -curr_elmenet
            sum+=nums[i];
            int element= sum-k;
            if(mp.find(element)!=mp.end()){
                    count+=mp[element];
            }
            mp[sum]++;
       } 
       return count;
    }
};