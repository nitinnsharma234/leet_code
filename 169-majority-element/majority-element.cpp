class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =1;
        int curr_el=nums[0];
        for(int i=1;i<nums.size();i++){
            if(count!=0 and curr_el!=nums[i]){
                count--;
               
            }
            else
           { curr_el=nums[i];
            count++;
            }
        }
        return curr_el;
    }
};