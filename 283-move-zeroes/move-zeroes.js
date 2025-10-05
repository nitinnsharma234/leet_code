/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let ptr=0;
    let n = nums.length;
    let i=0;
    let count=0;
    while(i<n){
        if(nums[i]==0){
           
            count++;
        }
        else{
            nums[ptr++]=nums[i];
        }
         i++;
    }

    while(count>0){
        nums[n-1]=0;
        n--;
        count--;
    }
    
};

