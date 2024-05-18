class Solution {
public:
    string countAndSay(int n) {
        string ans = "1"; 
       
        while(--n){
           // cout<<"n is "<<n;
            string a="";
            int m = ans.size();
            m--;
            char c = ans [m];
            int count =1;
            m--;
            a+=c;
           
            while(m>=0){
                if(c==ans[m]){
                    count++;
                }
                else {
                        a+=(count+'0');
                        count=1;
                        c=ans[m];
                    //cout<<"c"<<c;

                        a+=c;
                }
                m--;
            }
            a+=(count+'0');
            reverse(a.begin(), a. end());
            ans = a;
        }
        return ans ;
    }
};