/**
 * @param {string[]} operations
 * @return {number}
 */
var finalValueAfterOperations = function(operations) {
    let ans=0;
    for(const op of operations){
        if(op==="++X" || op=="X++"){
            ans++;
        }
        else{
            ans--;
        }
    }
    return ans;
};