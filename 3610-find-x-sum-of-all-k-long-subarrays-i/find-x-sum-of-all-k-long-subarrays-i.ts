function findXSum(nums: number[], k: number, y: number): number[] {

    let s = 0;


    let ans: number[] = [];
    let freq: number[][] = Array.from({ length: 51 }, () => [0, 0]);

    for (let i = 0; i < nums.length; i++) {

        let x = nums[i]
        freq[x][1] = x;          // store the number itself
        freq[x][0] = (freq[x][0] || 0) + 1;
        if(i>=k-1){

             let newFreq=[...freq]
             newFreq.sort((a, b) => {
            if (a[0] === b[0]) {
                return b[1] - a[1]; // descending by second element
            }
            return b[0] - a[0];   // ascending by first element
        });

        console.log(newFreq)

         let sum: number = 0;
        for (let i = 0; i < y; i++) {
            // console.log(newFreq[i][0],"()()",newFreq[i][1]);
            sum += ((newFreq[i][0])*(newFreq[i][1]));
        }
        ans.push(sum)
        freq[nums[s]][0] = (freq[nums[s]][0] || 0) - 1;
        s++;
        }


       
       

    }
    return ans;
};