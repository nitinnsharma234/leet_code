/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function(nums) {
        let inversionCounts=0;
        const n =nums.length;
        for(let i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                inversionCounts++;
            }
            if(inversionCounts>1){
                return false;
            }
        }
        inversionCounts+=(nums[n-1]>nums[0]);
        return inversionCounts<=1;
};