class Solution {
public:
    int myAtoi(string s) {
        int sign =1;
     // while loop 
     int i =0;
     int n =s.size();

     while(i<n and s[i]==' '){
        i++;
     }   
     int num=0;
     if(s[i]=='+' or s[i]=='-'){
       sign= s[i++]=='+'?1:-1;
     } 
     
     while(i<n and (s[i]>='0' and s[i]<='9')) {
        int digit =s[i++]-'0';
        if( num>(INT_MAX/10) or (num==INT_MAX/10 and  digit>7)){
           // cout<<sign<<" ";
            return sign==-1?INT_MIN:INT_MAX;
        }
        num=num*10+(digit);

       
       
     }
     return sign*num;
    }
};