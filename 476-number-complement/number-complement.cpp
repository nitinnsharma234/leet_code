class Solution {
public:
    int findComplement(int num) {
        int ans =0;
        int p = 0;

        while(num>0){
            int b= num&1 ;
            b =!b;
            ans+=(b*pow(2,p));
            p++;
            num =num>>1;
        }
        return ans ;
    }
};