class Solution {
public:
int  utils(vector<int>& nums , int idx , int prevIdx, vector<vector<int>>&dp){
    if (idx>= nums.size()){
    
        return 0;
    }
    if (dp[idx][prevIdx+1]!=-1){
        return dp[idx][prevIdx+1];
    }
    // pick
      int leng = 0+utils(nums,idx+1 , prevIdx,dp); 
     if (prevIdx==-1 || nums[prevIdx]<nums[idx]){
        // you can pick 
        leng= max(leng,1+utils(nums,idx+1,idx,dp));
     }
     dp[idx][prevIdx+1]=leng;
     return leng ;
   
}
    int lengthOfLIS(vector<int>& nums) {
        //single d array 
        // issue kyu aayega 
        // 1 5 8 6
        int n = nums.size();
        vector<vector<int>>dp (n,vector<int>(n+1,-1));
        
        int ans=0;
        return utils (nums,0,   -1,dp);
        return ans ;
    }
};