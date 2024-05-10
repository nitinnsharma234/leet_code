class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =1;
        
        int curr_el =nums[0];
        int ptr=1;
        while(i<nums.size()){
            while(i<nums.size() and curr_el ==nums[i]){
                i++;
            }
            if(i<nums.size() and curr_el !=nums[i]){
                curr_el = nums[i];
                nums[ptr++]=curr_el;
            }

        }

        return ptr;
    }
};


// normally increasing order 
// ptr approach 