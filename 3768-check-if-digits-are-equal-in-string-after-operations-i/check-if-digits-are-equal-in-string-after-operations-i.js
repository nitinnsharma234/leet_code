/**
 * @param {string} s
 * @return {boolean}
 */
var hasSameDigits = function(s) {
    var num=s
    while(num.length>2){
        let temp="";
        for(let i=0;i<num.length-1;i++){
            let y = (+num[i]+(+num[i+1]))%10;
            temp+=y;
        }
        num=temp;

    }
    return num[0]==num[1];
};