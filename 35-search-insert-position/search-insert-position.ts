function searchInsert(nums: number[], target: number): number {
    let l:number=0;
    let h: number=nums.length-1;
    let ans:number=0;
    if(target>nums[h]){
        return h+1;
    }
    if(target<nums[l]){
        return 0;
    }

    while(l<=h){
        let mid : number =Math.floor((l+h)/2);
        if(nums[mid]>target){
            h=mid-1;
        }
        else if(nums[mid]==target){
                return mid;
        }
        else{
           
                l=mid+1;
             ans=l;
        }
    }
    return ans;
    
};

