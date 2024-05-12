class Solution {
public:
    void utils (vector<int> & nums , vector<int> & sols , int i,vector<vector<int>> &ans  ){
        if (i>=nums.size()){
           ans.push_back(sols);
           return;
        }

        sols.push_back(nums[i]);
        utils(nums,sols,i+1,ans);
        if(sols.size()>0){
            sols.pop_back();
        }
         
        utils(nums,sols,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>  sols;
        vector<vector<int>> ans ;
        utils (nums,sols, 0,ans);
        
        return ans;
    }
};