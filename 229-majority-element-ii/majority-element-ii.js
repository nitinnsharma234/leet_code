/**
 * @param {number[]} nums
 * @return {number[]}
 */
var majorityElement = function(nums) {
    const ans =[];
    const freqMap = new Map();
    for(const x of nums){
        freqMap.set(x,(freqMap.get(x)||0)+1)

    }
    for (const [key, value] of freqMap) {
        if(value > nums.length/3){
            ans.push(key);
        }
}
return ans;
};