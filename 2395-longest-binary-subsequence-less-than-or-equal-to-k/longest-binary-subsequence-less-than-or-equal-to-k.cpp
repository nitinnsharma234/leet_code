class Solution {
public:
    int longestSubsequence(string s, int k) {
        int curr=0;
        int count =0;
        int bits=floor(log2(k)) + 1; 
       int n =s.size()-1;
       int j=0;
       while(n>=0){
            char ch =s[n];
            if(ch=='1'){
                if(j<=bits && curr+(1<<j)<=k){
                    curr+=(1<<j);
                    count++;
                }
            }
            else{
                count++;
            }
            j++;
            n--;
       }
        return count;
    }
};