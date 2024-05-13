class Solution {
public:
void print(vector<int> & nums){
   
}
void utils (vector<int> & nums , int idx  ,vector<vector<int>> & ans){
     if (idx>=nums.size()){
        vector<int> perms;
        for(int x : nums){
            perms.push_back(x);
        }
       ans.push_back(perms);
        //return ;
     }
     for (int i =idx; i<nums.size(); i++){
      //  cout<<idx<<" ";
        swap(nums[idx],nums[i]);
        utils(nums,idx+1,ans);
          swap(nums[idx],nums[i]);
            
     }

}
    vector<vector<int>> permute(vector<int>& nums) {
            vector<int> perms ; 
            vector<vector<int>> ans ;
            utils(nums, 0 ,ans);
            return ans;
    }
};