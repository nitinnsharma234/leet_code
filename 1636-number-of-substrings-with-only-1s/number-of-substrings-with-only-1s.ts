function numSub(s: string): number {
    let MAX_RANGE= 1000000007
    let ans : number =0;
    let oneCounts:number =0;
    for (const x of s) {
       let ch: number = x.charCodeAt(0) - '0'.charCodeAt(0);
        if(ch==0){
            ans+= ((oneCounts*(oneCounts+1))/2)%MAX_RANGE
            oneCounts=0;
        }
        else{
            oneCounts++;
        }
    }
      ans+= ((oneCounts*(oneCounts+1))/2)%MAX_RANGE
    return ans ;
};