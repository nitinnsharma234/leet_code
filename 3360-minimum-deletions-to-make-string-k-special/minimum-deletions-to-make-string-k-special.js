/**
 * @param {string} word
 * @param {number} k
 * @return {number}
 */
var minimumDeletions = function(word, k) {
        const map= new Map();
        for(const ch of word){
            map.set(ch,(map.get(ch)||0)+1);
        }

        let ans= word.length;

        for(const a of map.values()){
            let deleted=0;
            for (const b of map.values()){
                if(a>b){
                    deleted+=b;
                }
                else if (a+k<b){
                    deleted+=b-a-k;
                }
            }
            ans =Math.min(deleted,ans);
        }
        return ans;
};

