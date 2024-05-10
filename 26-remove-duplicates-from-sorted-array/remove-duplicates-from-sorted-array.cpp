class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =1;
        
        int curr_el =nums[0];
        int ptr=1;
        while(i<nums.size()){
           
            if( curr_el !=nums[i]){
                curr_el = nums[i];
                nums[ptr++]=curr_el;
            }
            else{
                i++;
            }

        }

        return ptr;
    }
};


// normally increasing order 
// ptr approach 