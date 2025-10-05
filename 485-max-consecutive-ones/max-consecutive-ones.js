/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let ans=0;
    let sum=0;
    for(const i of nums){
        if(i==0){
            sum=0;
        }
        else{
            sum++;
            ans=Math.max(ans,sum);
        }
    }
    return ans;
};