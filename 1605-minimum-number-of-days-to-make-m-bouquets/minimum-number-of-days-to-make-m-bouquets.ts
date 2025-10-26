function minDays(bloomDay: number[], m: number, k: number): number {
    function canMakeBouquets(bloomDay:number[],m:number,k:number,days:number):boolean{
        let n : number = bloomDay.length-1;
        let boq:number =0;

        let i:number=0;
        while(i<=n){

            let count:number=0

            while(bloomDay[i]<=days && count <k){
                i++;
                count++;


            }

            if(count>=k){
                i--;
                boq++;
            }
            if(boq>=m){
                return true;
            }
            i++;
        }   
        return false;
    }

    let low:number=0;
    let high :number =bloomDay.reduce((a, b) => Math.max(a, b));
    let ans:number=-1;
    while(low<=high){
        let mid :number =Math.floor((low+high)/2);
        if(canMakeBouquets(bloomDay,m,k,mid)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
};