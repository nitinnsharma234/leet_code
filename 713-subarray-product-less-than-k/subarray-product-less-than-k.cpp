class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
        int count = 0 ; 
        int s=0;
        int product =1;
        for(int i =0;i<nums.size();i++){
            product*=nums[i];
            while(product>=k){
                product/=nums[s++];
               }
            count += i - s + 1;
            }
            


        return count;
    }
};
