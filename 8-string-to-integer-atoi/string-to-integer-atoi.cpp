class Solution {
public:
    bool isValidDigit(char c){
        int ascii=c;
        return (ascii>=48 and ascii<=57);
    }
    int myAtoi(string s) {
        if(s.size()<=0 ){
            return 0;
        }
        //removing all initial space 

        int sign=1;
        int i=0;
        long   num =0;
        int power=1;
        
         while(i<s.length() and s[i]==' '){
            i++;
        }
        
        if ( s[i]=='-' or s[i]=='+'){
            sign=s[i]=='-'?-1:1;
            i++;
        }
        // cout<<sign<<" ";

        //removing all leading zeroes
        while(i<s.length() and s[i]=='0'){
            i++;
        }
        //cout<<s[i];
        for ( i ;i<s.length();i++){
            //return if encounter non-digit caracter 
            if(!isValidDigit(s[i])){
                return sign*num;
            }
           int digit = s[i]-'0';
                  num=(num*10)+digit;

           if(num>INT_MAX or num*sign<INT_MIN){
           
            return sign==1?INT_MAX:INT_MIN;
           }
          // power=power*10;
          

        }
         cout<<"Yes"<<sign;
        return sign*num;
        
    }
};