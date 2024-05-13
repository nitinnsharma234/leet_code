class Solution {
public:
void print(vector<int> & nums){
   
}
void utils (vector<int> & nums , int idx , vector<int> & perms ,vector<vector<int>> & ans){
     if (nums.size()==0){
       ans.push_back(perms);
        //return ;
     }
     for (int i =idx; i<nums.size(); i++){
      //  cout<<idx<<" ";
        int val = nums [i];
            perms.push_back(val);
            nums.erase(nums.begin()+i);
           
            utils(nums,0, perms,ans);
            perms.pop_back();
            nums.insert(nums.begin()+i,val);
            
     }

}
    vector<vector<int>> permute(vector<int>& nums) {
            vector<int> perms ; 
            vector<vector<int>> ans ;
            utils(nums, 0 , perms,ans);
            return ans;
    }
};