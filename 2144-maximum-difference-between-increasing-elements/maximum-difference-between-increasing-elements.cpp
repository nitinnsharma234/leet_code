class Solution {
public:
    int maximumDifference(vector<int>& nums) {
      int ans =-1;
      int min_num=INT_MAX;
      for(int x: nums) {
        if(min_num>=x){
            min_num = min(min_num,x);
            continue;
        }
            ans=max(x-min_num,ans);
      } 
      return ans;
    }
};