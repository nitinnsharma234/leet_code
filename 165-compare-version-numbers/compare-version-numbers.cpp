class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i =0, j=0; 
        int n = version1.size() , m = version2.size();
        bool flag =false;
        int num1=0, num2=0;
        while (i< n or  j<m  )
        {
            // if flag is false we are comparing the digits before .
            while (i<n and  version1[i]!='.'){
              
           
                num1=num1*10+(version1[i]-'0');
                 
                i++;
            }
            while (j<m and version2[j]!='.'){
                    
                   
                  num2=num2*10+(version2[j]-'0');

                j++;
                
            }
                cout<<num2<<" -> "<<num1<<endl;

            if (num1!=num2){
                return num2>num1?-1:1;
            }
            num1=0;num2=0;
            i++;
            j++;
        }
        // while(i<n){
        //     num1=num1*10+(version1[i]-'0');
        //         i++;
        // }
        //  while(j<m){
        //     num2=num2*10+(version2[j]-'0');
        //         j++;
        // }
        // if(num2!=num1){
        //      return num2>num1?1:-1;
        // }
        return 0;
    }
};
//10.0 and 2.0 
// 