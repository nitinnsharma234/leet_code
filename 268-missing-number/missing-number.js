/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let n = nums.length;
    const sum =n*(n+1)>>1
    let agg=0;
    const total=nums.reduce((sum,i)=>i+sum,agg);
    return sum-total;
};