class Solution {
public:
    bool isAllSetBits(int n ){
        while(n>0){
            if((n & 1) ==0){
                return false;
            }
            n=n>>1;

        }
        return true;
    }
    int smallestNumber(int n) {
        int i =n; 
        while(!isAllSetBits(i)){
            i++;
        }
        return i;
    }
};