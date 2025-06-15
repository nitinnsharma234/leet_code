class Solution {
public:
    int maxDiff(int num) {
         vector<int> digits;
        while(num>0){
            
            int x = num%10;
            num=num/10;
            digits.push_back(x);
        }
        reverse(digits.begin(),digits.end());
        int max_n =0;
        int min_n=0; 
        int c=-1;
        int d=-1;
        bool iszero=false;
        for (int i =0;i<digits.size();i++){
           
            if(c==-1 && digits[i]!=9){
                c=digits[i];
                
            }
            if(d==-1 && digits[i]>1){
                iszero = i==0;
                d=digits[i];

            }
            if(c!=-1 && digits[i]==c){
               max_n =max_n*10+9;
            }
            else{
                 max_n =max_n*10+digits[i];
            }
             

             if(d!=-1 && digits[i]==d){
               min_n=min_n*10+(iszero);
            }
            else{
            min_n=min_n*10+digits[i];
            }
             
            

        }
        return abs(max_n-min_n);
    }
};