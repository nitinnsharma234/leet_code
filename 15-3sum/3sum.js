/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    const ans=[];
    let i=0;
    let j=i+1;
    nums.sort((a, b) => a - b);
    console.log(nums);
    let k=nums.length-1;
    while(i<k){
        j=i+1;
        k=nums.length-1;
        while(j<k){

            if(nums[j]+nums[i]+nums[k]==0){
            console.log(nums[i]+nums[j]+nums[k]);
                ans.push([nums[i],nums[j],nums[k]]);
                let x=nums[j];
                let y =nums[k];
                while(nums[k]==y){
                    k--;
                }
                 while(nums[j]==x){
                    j++;
                }
            }
             else if (nums[j]+nums[i]+nums[k] > 0){
                
                k--;
            }
            else{
                j++;
            }
        }
          let z =nums[i];
                while(nums[i]==z){
                    i++;
                }
    }
    return ans;
};