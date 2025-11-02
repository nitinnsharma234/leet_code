function beautySum(s: string): number {
    let sum: number = 0;
    for (let i = 0; i < s.length; i++) {
        let freq: number[] = new Array(26).fill(0);

        for (let j = i; j < s.length; j++) {
            let x: string = s[j];

            freq[x.charCodeAt(0) - 'a'.charCodeAt(0)]++;
            let max_freq = 1;
            let min_freq = 501;
            for (let i = 0; i < 26; i++) {

                if (freq[i] != 0) {
                    max_freq = Math.max(max_freq, freq[i]);
                    min_freq = Math.min(min_freq, freq[i]);
                }
            }
            if (min_freq != 501) {
                sum += (max_freq - min_freq);
            }
        }

        // console.log(max_freq, " -----", min_freq,"()()",sum);

    }
    return sum;
};