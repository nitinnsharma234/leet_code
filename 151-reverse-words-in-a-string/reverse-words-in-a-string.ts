function reverseWords(s: string): string {
    let ans : string="";

    const newStr :string =s.trim().replace(/\s+/g," ");
    // console.log(newStr);
    const words=newStr.split(" ").reverse();

    // console.log("-",words.length,"-");
    for (let i=0;i<words.length;i++){
        ans+=words[i];
        if(i<words.length-1)
       { ans+=" ";}
    //    console.log("-",ans,"-");
    }
    return ans;

};