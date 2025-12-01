function minOperations(nums: number[], k: number): number {
    //acc : accumulator @ initialized with zero

const sum = nums.reduce((acc, num) => acc + num, 0);
return sum%k;
};