/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    
    let ptr=1;
    const n = nums.length;
    let curr = nums[0];
    let i=0;
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

};