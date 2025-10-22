function search(nums: number[], target: number): number {
    
    let high:number=nums.length-1;
    let low:number=0;
    while(low<=high){
        let mid:number =  Math.floor((low + high) / 2);

        if(nums[mid]>target){
            high=mid-1;
        }
        else if (nums[mid]<target){
            low=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;

};