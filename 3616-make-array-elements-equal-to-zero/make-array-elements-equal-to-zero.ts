function countValidSelections(nums: number[]): number {
   
    
      let n : number = nums.length;
    let zeroIndexes:number []=[];
    let prefix: number[] = new Array(n + 1).fill(0);
    let suffix: number[] = new Array(n + 1).fill(0);
   for(let i =0;i<nums.length;i++){
        if(nums[i]==0){
            zeroIndexes.push(i);
        }
        prefix[i+1]=prefix[i]+nums[i];
   }
    for(let i =n-1;i>=0;i--){
      
        suffix[i]=suffix[i+1]+nums[i];
   }
   
   let validWays:number =0;
   for(const x of zeroIndexes){
      let lft:number = prefix[x]-prefix[0];
        let rt: number = suffix[x]-suffix[n];
        if(lft==rt) validWays+=2;
        if(Math.abs(lft-rt)==1 )validWays++;
   }
   return validWays;
};


