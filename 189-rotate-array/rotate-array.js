/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
     const n = nums.length;
    k = k % n; 

    // Create rotated version
    const rotated = nums.slice(n - k).concat(nums.slice(0, n - k));


    nums.splice(0, n, ...rotated);
};