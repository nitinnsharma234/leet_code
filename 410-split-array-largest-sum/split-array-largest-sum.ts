function splitArray(nums: number[], k: number): number {
    function canBeSplit(nums:number[],k:number,minSum:number):boolean{
        let sum:number=0;
        let partition:number=1;
        for(const x of nums){
            if((sum + x) > minSum){
                sum=0;
                partition++;
            }
            sum+=x;
            if(partition>k) return false;
        }
        return true;
    }
    let low:number=0;
    let high:number=0;
    for(const x of nums){
        low=Math.max(x,low);
        high+=x;
    }
    let ans:number=low;
    while(low<=high){
        let mid:number=Math.floor((low+high)/2);

        if(canBeSplit(nums,k,mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
};

//base observations 

// if k==numes.length return max_element