function countValidSelections(nums: number[]): number {
   
    function isValid(nums: number[],idx:number, dir:number):number{
        if(idx<0 || idx>=nums.length) return 0;
        const newArr=[...nums];
        let k:number =idx;
        let n : number = nums.length;
        let d :number =dir;
        console.log(nums);

        while(k>=0 && k<n){

            if(newArr[k]==0){
                  k=k+d;
                continue;
            }
            else{
                newArr[k]--;
                
                d=-d;
                k=k+d;
            }
        }
        let sum: number =0;
        for(const x of newArr ){
            sum+=x;
        }
        console.log("-----");
        return sum==0?1:0;
   }

    let zeroIndexes:number []=[];
   for(let i =0;i<nums.length;i++){
        if(nums[i]==0){
            zeroIndexes.push(i);
        }
   }
   let validWays:number =0;
   for(const x of zeroIndexes){
       let  a:number = isValid(nums,x,-1)
      let   b:number = isValid(nums,x,+1);
        validWays+= (a+b)
   }
   return validWays;
};


