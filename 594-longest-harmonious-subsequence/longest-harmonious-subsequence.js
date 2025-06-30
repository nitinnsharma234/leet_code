/**
 * @param {number[]} nums
 * @return {number}
 */
var findLHS = function (nums) {
    const mp = new Map();
    let ans = 0;
    for (let x of nums) {
        mp.set(x, (mp.get(x) || 0) + 1);
    }
    for (let [key, value] of mp.entries()) {
       let x = key;
       if(mp.has(x+1)){
        ans =Math.max(ans,value+mp.get(x+1));
       }
    }
    return ans;
};

