function findKthPositive(arr: number[], k: number): number {
    let count:number=0;
    let j:number=0;
    let last:number= arr[arr.length-1];//2

    //1+1<2
    if(k+arr.length<=last){
    for(let i=1;i<=last;i++){
        let x : number =arr[j];
        if(i!=x){
            count++;
            
        }
        else{
            j++;
        }
        if(count==k){
            return i;
        }

    }
    }
    else{
        count=last-(arr.length);
        return last+(k-count);
    }
    
    return -1;
};

//o(N)