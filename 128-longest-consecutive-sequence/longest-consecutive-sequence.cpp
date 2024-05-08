class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        int max_len =1;
        int ans =1;

        for (int i =1;i<nums.size();i++ ){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if (nums[i]==nums[i-1]+1){
                cout<<max_len<<" ";
                max_len++;
            }
            else{
               
                max_len=1;
            }
             ans=max(ans,max_len);
        }
        return ans ;
        
    }
};
