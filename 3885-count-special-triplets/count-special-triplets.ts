const MOD = 1e9 + 7;
function specialTriplets(nums: number[]): number {
    const freq = new Map<number,number>();
    const runningFreq = new Map<number,number>();
    let ans:number =0;

    for (const x of nums){
        freq.set(x,(freq.get(x)??0)+1)
    }
    for(let i =0 ; i< nums.length;i++){
        let y = nums[i];
        let target = 2* y;
        let lCount:number=runningFreq.get(target)??0;
        runningFreq.set(y,(runningFreq.get(y)??0)+1);
        let rCount:number = (freq.get(target)??0)-(runningFreq.get(target)??0);
        ans+=(rCount*lCount) % MOD;
        ans%=MOD;

    }
    return ans;
};