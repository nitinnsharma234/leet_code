function kLengthApart(nums: number[], k: number): boolean {
    let s : number = -1;

    for(let i =0;i<nums.length;i++){
        if(nums[i]==1){
           if(s==-1) {
            s=i;
            continue;
           }
           else{
               let  len = i-s-1;
            //    console.log(i," ",s);
                if(len<k) return false;
                s=i;
           }
        }
    }
    return true ;
};