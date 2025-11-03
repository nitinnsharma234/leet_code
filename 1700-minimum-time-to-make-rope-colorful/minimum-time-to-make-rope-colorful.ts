function minCost(colors: string, neededTime: number[]): number {
    let prev: string = "Z";
    let ans: number = 0;

    for (let i = 0; i < colors.length;) {

        if (prev == colors[i]) {
            let min: number = neededTime[i-1];

            let sum_min: number = neededTime[i-1];
            while (prev == colors[i]) {
                min = Math.max(min, neededTime[i])
                sum_min += neededTime[i];
                //   console.log(prev, "_____", colors[i])
                i++;
            }
            // console.log(sum_min, "_____", min)
            ans += (sum_min) - min;
        }
        else {
        prev = colors[i];
            i++;
        }

    }
    return ans;
};