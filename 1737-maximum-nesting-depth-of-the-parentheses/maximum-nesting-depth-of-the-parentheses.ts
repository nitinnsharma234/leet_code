function maxDepth(s: string): number {
   let openParenthesesCount:number=0;
   let closeParenthesesCount:number =0;
   let ans:number=0;
   for(const c of s){
        if(c=="("){
            openParenthesesCount++;
        }
        else if (c==")"){
              ans=Math.max(openParenthesesCount,ans);
            openParenthesesCount--;
        }

   }
   return ans;
};