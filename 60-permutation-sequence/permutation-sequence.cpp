class Solution {
public:

  

    string getPermutation(int n, int k) {
        int fact =1 ; 
        vector<int> nos ;
        for (int i=1;i<n; i++){
            nos.push_back(i);
            fact = fact *i;

        }
        nos.push_back(n);
         k -=1;
         string str="";
         while(true){
            int idx = k/fact ; 
            str+=nos[idx]+'0';
            cout<<nos[idx];
            nos.erase(nos.begin()+idx);
            if (nos.size()==0){
                break;
            }
            k =k%fact;
            fact= fact/nos.size();
         }
         return str;
    }
};

// brute force ap --> k +1 , next permutation 