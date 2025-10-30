function myAtoi(s: string): number {
    function isDigit(n: string): boolean {
        const code = n.charCodeAt(0);
        return code >= 48 && code <= 57;
    }
    // s.trim()//to remove leading whitespaces
    // number =0;
    // if (polarity=+1;)
    //number char[0]=="-"{polarity=-1};
    if (s.length <= 0) return 0;

    const newStr = s.trim();
    let polarity: number = newStr[0] == "-" ? -1 : 1;
    let ans: number = 0;


    for (let i = 0; i < newStr.length; i++) {
        if (isDigit(newStr[i])) {
            ans = ans * 10 + (+newStr[i])
        }
        else if (i==0 && (newStr[0] == "+" || newStr[0] == "-")) {
            continue;
        }
        else {
            if (polarity === -1) {
                return Math.max(-2147483648, ans * polarity);
            }
            return Math.min(2147483647, ans * polarity);
        }
    }
    if (polarity === -1) {
  return Math.max(-2147483648, ans * polarity);
}
return Math.min(2147483647, ans * polarity);

};