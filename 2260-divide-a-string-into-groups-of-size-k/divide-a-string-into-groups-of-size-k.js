/**
 * @param {string} s
 * @param {number} k
 * @param {character} fill
 * @return {string[]}
 */
var divideString = function(s, k, fill) {
    const ans = [];
    let i=1;
    let str="";
    for(const ch of s){
        str+=ch;
        if(str.length==k){
            ans.push(str);
            str="";
        }
    }
    if(str.length != 0)
   { 
    while(str.length>0 && str.length<k){
         str+=fill;
    }
        ans.push(str)
    }
    return ans;
};