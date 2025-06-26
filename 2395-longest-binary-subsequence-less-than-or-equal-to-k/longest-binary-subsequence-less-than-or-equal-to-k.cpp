class Solution {
public:
    int longestSubsequence(string s, int k) {
        int curr=0;
        int count =0;
        int bits=floor(log2(k)) + 1; 
        for(int i =0;i<s.size();i++){
            char ch = s[s.size()-1-i];
            if(ch=='1'){
                if(i<bits && curr+(1<<i)<=k){
                    count++;
                    curr+=1<<i;
                }
            }
            else{
                count++;
            }
        }
        return count;
    }
};