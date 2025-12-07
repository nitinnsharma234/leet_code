class Solution {
public:
    int countOdds(int low, int high) {
       int diff = (high-low)/2;
       if(low%2==0 && high%2==1){
        diff++;
       }
       diff+=(low%2);
       return diff;
    }
};
// 14+5 = 19