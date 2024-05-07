class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i =0;
        while(nums[i]!=-1){
            int x =nums[i];
            cout<<i<<" ";
            nums[i]=-1;
            i=x;
        }
        return i;
    }
};
