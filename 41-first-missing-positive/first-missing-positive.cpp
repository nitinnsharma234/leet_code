class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool containsOne =false;
        int n =nums.size();
        for(int i=0;i<nums.size();i++){
            int x =nums[i];
            if (x==1){
                containsOne=true;
            }
            if (x <= 0 || x > n) {
                nums[i] = 1;
            }  
        }
        if (!containsOne) return 1;
         for(int i=0;i<n;i++){
            int idx =abs(nums[i]);
            if(idx==n){
                nums[0]=-abs(nums[0]);
            }
            else{
                nums[idx]=-abs(nums[idx]);
            }

        }
         for (int i = 1; i < n; i++) {
            if (nums[i] > 0)
                return i;
        }
        return nums[0] > 0?n:n+1;
    }
};