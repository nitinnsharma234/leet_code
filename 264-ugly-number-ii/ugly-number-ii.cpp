class Solution {
public:
    int nthUglyNumber(int n) {
        int a=0;
        int b=0;
        int c=0;
        int dp[n+2];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        int size=1;
        while(size<n)
        {
            int f1=dp[a]*2;
            int f2=dp[b]*3;
            int f3=dp[c]*5;
            int x=min(f1,min(f2,f3));
            dp[size]=x; 
            
            if(x==f1)
            {   
                a++;
                               
            }
            if(x==f2)
            {
                b++;
                
            }
            if(x==f3)
            {
                c++;
                
            }
            size++;
            
        }

        return dp[n-1];
    }

};