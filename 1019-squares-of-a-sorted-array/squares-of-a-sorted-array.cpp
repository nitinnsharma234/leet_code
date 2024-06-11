class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int> res(nums.size(),0);
       int l =0 ;
       int r =nums.size()-1;
       for (int i =nums.size()-1;i>=0;i--){
            if (abs(nums[l])<abs(nums[r])){
                nums[r]*=nums[r];
                res[i]=nums[r];
                r--;
            }
            else{
                // cout<<"Yes";
                nums[l]*=nums[l];
                res[i]=nums[l];
                l++;
            }
       }
       return res;
    }
};