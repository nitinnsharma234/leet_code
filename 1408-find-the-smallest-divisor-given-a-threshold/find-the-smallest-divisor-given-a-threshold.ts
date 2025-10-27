function smallestDivisor(nums: number[], threshold: number): number {
    
    function isThreshold(nums:number[],threshold:number, k:number):boolean{
        let sum:number=0;
        for(const x of nums){
            sum+=Math.ceil(x/k);
            if(sum>threshold) return false;
        }
        return true;
    }

    let high:number=nums.reduce((a,b)=>Math.max(a,b));
    let low:number =1;
    let ans:number=0;
    while(low<=high){
        let mid:number = Math.floor((low+high)/2);
        if(isThreshold(nums,threshold,mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
};