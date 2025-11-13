function maxOperations(s: string): number {
    let ans : number = 0;
    let ones : number =0; 
    let zeroes : number =0;
    for(let i=0;i<s.length;i++){
        if(zeroes!=0 && s[i]==="1"){
            ans+=ones;
            zeroes=0;
            ones++;
        }
        else if(s[i]=="0"){
            zeroes++;
        }
        else{
            ones++;
        }
    }
     if(zeroes!=0 ){
            ans+=ones;
            zeroes=0;
            ones++;
        }
    return ans;

};

// Derivation 
// count no. of ones and then if zeroes comes and again ones come add that to ans