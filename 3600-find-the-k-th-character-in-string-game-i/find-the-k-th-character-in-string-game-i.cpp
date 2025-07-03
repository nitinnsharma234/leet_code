class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(word.size()<k){
            int n =word.size();
            for(int i =0;i<n;i++){
                char z =word[i]+1;
                word+=(z);
            }
        }
        return word[k-1];
    }
};