function searchRange(nums: number[], target: number): number[] {
    function lowerBound(nums:number[],target:number):number{
        let l:number=0;
        let h:number=nums.length-1;
        let ans:number=-1;
        while(l<=h){
            let mid : number =Math.floor((l+h)/2);
            console.log("nums mid",nums[mid],mid);
            if(nums[mid]==target){
                ans=mid;
                h=mid-1;
            }
            else if (nums[mid]>target){
               h=mid-1;
            }
            else{
               l=mid+1;
            }
        }
        return ans;
    }
    function upperBound(nums:number[],target:number):number{
        let l:number=0;
        let h:number=nums.length-1;
        let ans:number=-1;
        while(l<=h){
            let mid : number =Math.floor((l+h)/2);
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if (nums[mid]>target){
                 h=mid-1;
            }
            else{
              l=mid+1;
            }
        }
        return ans;
    }
    let result:number[]=[];
    let x:number =lowerBound(nums,target);
    let y:number =upperBound(nums,target);
    result.push(x);
    result.push(y);
    return result;
};