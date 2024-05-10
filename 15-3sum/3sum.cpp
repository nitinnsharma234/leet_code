class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i =0;
        int k =nums.size()-1;
        vector<vector<int>> vt ;
        sort(nums.begin(),nums.end());
        while(i<k){
            int j =i+1;
            k=nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum ==0){
                    int x =nums[j];
                    int y =nums[k];
                     vt.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    while(j<k and x==nums[j]){
                        j++;
                    }
                     while(j<k and y==nums[k]){
                       k--;
                    }
                   
                }
                else if (sum>0){
                    k--;
                }
                else {
                    j++;
                }
            }
            int z =nums[i];
            while(i<k and z==nums[i]){
                i++;
            }

        }
            return vt;
    }
};