/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
    let ans = nums[0];
    let max_product =nums[0];
    let min_product=nums[0];
    for(let i=1;i<nums.length;i++){
       let temp=max_product;
       max_product=Math.max(nums[i],max_product*nums[i],min_product*nums[i]);
       min_product=Math.min(nums[i],temp*nums[i],min_product*nums[i]);
       ans=Math.max(ans,max_product)

    
    }
    return ans;
};