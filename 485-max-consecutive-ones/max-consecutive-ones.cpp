class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,ans(0);
       for (int x : nums){
         if (x){
            count++;
         }
         else {
           ans= max(count,ans);
          
            count=0;
         }
       }
       return   max(count,ans);;
    }
};