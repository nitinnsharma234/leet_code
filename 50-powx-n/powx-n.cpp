class Solution {
public:
    double myPow(double x, int n) {
      long nn =abs (n);
      double ans =1.0;
      while(nn>0){
        if(nn%2==1){
            ans = x *ans;
            nn=nn-1;
        }
        else{
            x=x*x;
            nn=nn/2;
        }
      }
    return n<0?1/ans:ans;

    }
};