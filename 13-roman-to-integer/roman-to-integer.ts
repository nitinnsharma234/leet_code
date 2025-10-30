function romanToInt(s: string): number {
    let mp: Map<string, number> = new Map();
    mp.set("I", 1);
    mp.set("IV", 4);
    mp.set("V", 5);
    mp.set("IX", 9);
    mp.set("X", 10);
    mp.set("XL", 40);
    mp.set("L", 50);
    mp.set("XC", 90);
    mp.set("C", 100);
    mp.set("CD", 400);
    mp.set("D", 500);
    mp.set("CM", 900);
    mp.set("M", 1000);
     let ans:number=0;
    for(let i =0;i<s.length; ){
        let a:number=mp.get(s[i]+s[i+1]);
        let b:number=mp.get(s[i]);
        if(a) {ans+=a; i+=2;}
        else { ans+=b ;i++;}
        // console.log(ans,"-----");

    }return ans;
};