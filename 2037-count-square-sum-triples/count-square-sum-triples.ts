function countTriples(n: number): number {
    function twoSum(arr :number[],target:number){
        let ans=0;
        let i=0;
        let j = arr.length-1;
        while(i<j){
            if(arr[i]+arr[j]==target){
                ans+=2;
                i++;
                j--;
            }
            else if (arr[i]+arr[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
    const arr :number[]=[];
    for(let i =1;i<=n;i++){
        arr.push(i*i);
    }
    let ans:number =0;
    for(let i =n;i>0;i--){
           ans+= twoSum(arr,i*i);
    }
    return ans;
};