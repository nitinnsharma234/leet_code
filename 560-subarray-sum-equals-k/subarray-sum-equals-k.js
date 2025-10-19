/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {
       let mp=new Map();
       let count=0;
       let sum=0;
       mp.set(0,1);
       for(let i =0;i<nums.length;i++){
            sum+=nums[i];
            
                if (mp.has(sum - k)) {
            count += mp.get(sum - k);
        }

        mp.set(sum, (mp.get(sum) || 0) + 1);
       }
       return count;
};

//sliding window approach
