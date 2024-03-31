class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        map<int,int> mp ;
        int s=-1,freq=0;
        int n=nums.size(),ans=0;
        int count=0;
        for(int i =0;i<n;i++){

            if(nums[i]%2){
                count=0;
              freq++;
            }
            while(freq==k){
                    s++;
                    if(nums[s]%2){
                        freq--;
                     }
                     count++;

            }
            ans+=count;
        }
        return ans;
    }
};