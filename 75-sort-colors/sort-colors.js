/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let low =0,mid=0,hi=nums.length-1;

    while(mid<=hi){
        if(nums[mid]==0){
           [ nums[mid],nums[low]]=[nums[low],nums[mid]];
           mid++;
           low++;
        }
        else if (nums[mid]==1){
            mid++;
        }
        else{
             [ nums[mid],nums[hi]]=[nums[hi],nums[mid]];
             hi--;
        }
    }
};