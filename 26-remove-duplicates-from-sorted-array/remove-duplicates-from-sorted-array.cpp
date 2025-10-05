class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =1;
        int n = nums.size();
        int curr=nums[0];int ptr=1;
        while(i<n){
            if(curr!=nums[i]){
                curr=nums[i];
                nums[ptr]=curr;
                ptr++;
            }
            else{
                i++;
            }
        }
        return ptr;
    }
};