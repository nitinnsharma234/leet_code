function rowAndMaximumOnes(mat: number[][]): number[] {
    function findIth(row:number[]):number{
        let low : number =0;
        let high : number = row.length;
        row.sort((a,b)=>a-b)
        let ans:number =-1;
        while(low<=high){
            let mid:number= Math.floor((low+high)/2)
            if(row[mid]==1){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }

        return ans==-1?0:row.length-ans ;

    }
    let rows: number = mat.length;
    let ansIdx:number=0;
    let maxL:number=0;
    for(let i=0;i<rows;i++){
        let len :number = findIth(mat[i]);
        if(len >maxL){
            ansIdx=i;
           maxL=len
        }
    }
    return [ansIdx,maxL]

};