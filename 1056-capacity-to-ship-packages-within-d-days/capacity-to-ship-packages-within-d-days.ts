function shipWithinDays(weights: number[], days: number): number {
     function canShipKWeight(weights:number[],days:number, k:number):boolean{
        let sum:number=0;
        for(const x of weights){
            sum+=x;

            if(sum>k) {
                days--;
                sum=x;
            }
            if(days<0) return false;

        }
        if(sum<=k) {
                days--;
            }

        return days>=0;
    }

    let high:number=weights.reduce((a,b)=>a+b,0);
    let low:number =weights.reduce((a,b)=>Math.max(a,b));;
    let ans:number=0;
    while(low<=high){
        let mid:number = Math.floor((low+high)/2);
      
        const canW=canShipKWeight(weights,days,mid);
          console.log(mid," ",canW,"");
        if(canW){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
};