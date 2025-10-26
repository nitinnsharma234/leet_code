function minEatingSpeed(piles: number[], hr: number): number {
    function canEatAllBananas(piles: number[], h: number, k: number): boolean {
        let hoursPassed: number = 0;
        for (let j = 0; j < piles.length; j++) {
           
                hoursPassed += Math.ceil(piles[j] / k);
            
            if(hoursPassed>h){
                return false;
            }
        }
            console.log(hoursPassed,'----',k,"\n")

            return true;
    }
    //searching for search space l will be the min and h will be the max 
    let l :number=0;   // largest possible number
    let h = Number.MIN_VALUE;

    for (let i = 0; i < piles.length; i++) {
        l = 0
        h = Math.max(h, piles[i]);
    }
    console.log(l," ",h)
    let ans: number = piles[0];
    while (l <= h) {
        let mid: number = Math.floor((l + h) / 2);
        let canEat:boolean = canEatAllBananas(piles, hr, mid);
        if (canEat) {
            ans = mid;
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
      
    }
      return ans;
};