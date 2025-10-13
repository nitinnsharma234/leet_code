/**
 * @param {string[]} words
 * @return {string[]}
 */
var removeAnagrams = function(words) {
       let res = [words[0]]; 
    for(let i=1;i<words.length;i++){
        if(!compare(words[i],words[i-1])){
            res.push(words[i]);
        }
    }
    return res;


    function compare(word1, word2){
        let freq = new Array(26).fill(0);
        for(let a of word1){
            freq[a.charCodeAt(0) - "a".charCodeAt(0)]++;
        }
          for(let b of word2){
            freq[b.charCodeAt(0) - "a".charCodeAt(0)]--;
        }
        return freq.every((x)=>x===0);
    }

};