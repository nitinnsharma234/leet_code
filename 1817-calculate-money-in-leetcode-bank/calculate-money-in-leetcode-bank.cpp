class Solution {
public:
    int totalMoney(int n) {
        int monday =0;
        int sum =0;
        while(n>0){
            for(int i =1;i<=min(7,n);i++){
                sum+=(monday+i);
            }
            n-=7;
            monday++;
        }

    return sum ;

    }
};