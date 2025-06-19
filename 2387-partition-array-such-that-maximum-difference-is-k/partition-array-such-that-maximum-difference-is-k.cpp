class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count =0;
        int s= nums[0];
        int n =nums.size();
        for(int i =1;i<n;i++){
            if(nums[i]-s>k){
                count++;
                s=nums[i];
            }
        }
        return count+(nums[n-1]-s<=k);
    }
};

//1 2 3 5 6 