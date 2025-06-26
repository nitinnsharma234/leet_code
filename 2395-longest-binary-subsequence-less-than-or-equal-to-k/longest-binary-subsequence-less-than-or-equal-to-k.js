/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
var longestSubsequence = function(s, k) {
    let num=0;
    let bits=Math.log2(k)+1;
    let count=0;
    let n =s.length-1;
    let j=0;
    while(n>=0){
        const ch =s[n];
        if(ch==="1"){
            if(j<bits && num+(1<<j)<=k){
                count++;
                num+=(1<<j);
                
            }
            
        }
        else{
            count++;
        }
j++;n--;
        
    }
    return count;
};